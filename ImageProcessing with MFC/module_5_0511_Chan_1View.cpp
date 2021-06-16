
// module_5_0511_Chan_1View.cpp: Cmodule50511Chan1View 클래스의 구현
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "module_5_0511_Chan_1.h"
#endif

#include "module_5_0511_Chan_1Doc.h"
#include "module_5_0511_Chan_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmodule50511Chan1View

IMPLEMENT_DYNCREATE(Cmodule50511Chan1View, CView)

BEGIN_MESSAGE_MAP(Cmodule50511Chan1View, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &Cmodule50511Chan1View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_DOWN_SAMPLING, &Cmodule50511Chan1View::OnDownSampling)
	ON_COMMAND(ID_UP_SAMPLING, &Cmodule50511Chan1View::OnUpSampling)
	ON_COMMAND(ID_QUANTIZATION, &Cmodule50511Chan1View::OnQuantization)
	ON_COMMAND(ID_SUM_CONSTANT, &Cmodule50511Chan1View::OnSumConstant)
	ON_COMMAND(ID_SUB_CONSTANT, &Cmodule50511Chan1View::OnSubConstant)
	ON_COMMAND(ID_MUL_CONSTANT, &Cmodule50511Chan1View::OnMulConstant)
	ON_COMMAND(ID_DIV_CONSTANT, &Cmodule50511Chan1View::OnDivConstant)
	ON_COMMAND(ID_AND_OPERATE, &Cmodule50511Chan1View::OnAndOperate)
	ON_COMMAND(ID_OR_OPERATE, &Cmodule50511Chan1View::OnOrOperate)
	ON_COMMAND(ID_XOR_OPERATE, &Cmodule50511Chan1View::OnXorOperate)
	ON_COMMAND(ID_GAMMA_CORRECTION, &Cmodule50511Chan1View::OnGammaCorrection)
	ON_COMMAND(ID_NEGA_TRANSFORM, &Cmodule50511Chan1View::OnNegaTransform)
	ON_COMMAND(ID_BINARYZTION, &Cmodule50511Chan1View::OnBinaryztion)
	ON_COMMAND(ID_STRESS_TRANSFORM, &Cmodule50511Chan1View::OnStressTransform)
	ON_COMMAND(ID_HISTO_STRETCH, &Cmodule50511Chan1View::OnHistoStretch)
	ON_COMMAND(ID_END_IN_SEARCH, &Cmodule50511Chan1View::OnEndInSearch)
	ON_COMMAND(ID_HISTO_EQUAL, &Cmodule50511Chan1View::OnHistoEqual)
	ON_COMMAND(ID_HISTO_SPEC, &Cmodule50511Chan1View::OnHistoSpec)
	ON_COMMAND(ID_HISTOGRAM, &Cmodule50511Chan1View::OnHistogram)
	ON_COMMAND(ID_EMBOSSING, &Cmodule50511Chan1View::OnEmbossing)
	ON_COMMAND(ID_BLURR, &Cmodule50511Chan1View::OnBlurr)
	ON_COMMAND(ID_GAUSSIAN_FILTER, &Cmodule50511Chan1View::OnGaussianFilter)
	ON_COMMAND(ID_SHARPENING, &Cmodule50511Chan1View::OnSharpening)
	ON_COMMAND(ID_HPF_SHARP, &Cmodule50511Chan1View::OnHpfSharp)
	ON_COMMAND(ID_LPF_SHARP, &Cmodule50511Chan1View::OnLpfSharp)
	ON_COMMAND(ID_DIFF_OPERATOR_HOR, &Cmodule50511Chan1View::OnDiffOperatorHor)
	ON_COMMAND(ID_HOMOGEN_OPERATOR, &Cmodule50511Chan1View::OnHomogenOperator)
	ON_COMMAND(ID_LAPLACIAN, &Cmodule50511Chan1View::OnLaplacian)
	ON_COMMAND(ID_NEAREST, &Cmodule50511Chan1View::OnNearest)
	ON_COMMAND(ID_BILINEAR, &Cmodule50511Chan1View::OnBilinear)
	ON_COMMAND(ID_MEDIAN_SUB, &Cmodule50511Chan1View::OnMedianSub)
	ON_COMMAND(ID_MEAN_SUB, &Cmodule50511Chan1View::OnMeanSub)
	ON_COMMAND(ID_TRANSLATION, &Cmodule50511Chan1View::OnTranslation)
	ON_COMMAND(ID_MIRROR_HOR, &Cmodule50511Chan1View::OnMirrorHor)
	ON_COMMAND(ID_MIRROR_VER, &Cmodule50511Chan1View::OnMirrorVer)
	ON_COMMAND(ID_ROTATION, &Cmodule50511Chan1View::OnRotation)
	ON_COMMAND(ID_FRAME_SUM, &Cmodule50511Chan1View::OnFrameSum)
	ON_COMMAND(ID_FRAME_SUB, &Cmodule50511Chan1View::OnFrameSub)
	ON_COMMAND(ID_FRAME_MUL, &Cmodule50511Chan1View::OnFrameMul)
	ON_COMMAND(ID_FRAME_DIV, &Cmodule50511Chan1View::OnFrameDiv)
	ON_COMMAND(ID_FRAME_AND, &Cmodule50511Chan1View::OnFrameAnd)
	ON_COMMAND(ID_FRAME_OR, &Cmodule50511Chan1View::OnFrameOr)
	ON_COMMAND(ID_FRAME_COMB, &Cmodule50511Chan1View::OnFrameComb)
	ON_COMMAND(ID_BINARY_EROSION, &Cmodule50511Chan1View::OnBinaryErosion)
	ON_COMMAND(ID_GRAY_EROSION, &Cmodule50511Chan1View::OnGrayErosion)
	ON_COMMAND(ID_BINARY_DILATION, &Cmodule50511Chan1View::OnBinaryDilation)
	ON_COMMAND(ID_GRAY_DILATION, &Cmodule50511Chan1View::OnGrayDilation)
	ON_COMMAND(ID_LOW_PASS_FILTER, &Cmodule50511Chan1View::OnLowPassFilter)
	ON_COMMAND(ID_HIGH_PASS_FILTER, &Cmodule50511Chan1View::OnHighPassFilter)
	ON_COMMAND(ID_MEAN_FILTER, &Cmodule50511Chan1View::OnMeanFilter)
	ON_COMMAND(ID_MEDIAN_FILTER, &Cmodule50511Chan1View::OnMedianFilter)
	ON_COMMAND(ID_MAX_FILTER, &Cmodule50511Chan1View::OnMaxFilter)
	ON_COMMAND(ID_MIN_FILTER, &Cmodule50511Chan1View::OnMinFilter)
	ON_COMMAND(ID_FFT_2D, &Cmodule50511Chan1View::OnFft2d)
	ON_COMMAND(ID_IFFT_2D, &Cmodule50511Chan1View::OnIfft2d)
	ON_COMMAND(ID_LPF_FREQUENCY, &Cmodule50511Chan1View::OnLpfFrequency)
	ON_COMMAND(ID_HPF_FREQUENCY, &Cmodule50511Chan1View::OnHpfFrequency)
END_MESSAGE_MAP()

// Cmodule50511Chan1View 생성/소멸

Cmodule50511Chan1View::Cmodule50511Chan1View() noexcept
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

Cmodule50511Chan1View::~Cmodule50511Chan1View()
{
}

BOOL Cmodule50511Chan1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// Cmodule50511Chan1View 그리기

void Cmodule50511Chan1View::OnDraw(CDC* pDC)
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	int i, j;
	unsigned char R, G, B;
	// 입력 영상 출력
	for (i = 0; i < pDoc->m_height; i++) {
		for (j = 0; j < pDoc->m_width; j++) {
			R = pDoc->m_InputImage[i * pDoc->m_width + j];
			G = B = R;
			pDC->SetPixel(j + 5, i + 5, RGB(R, G, B));
		}
	}

	// Resize된 영상 출력
	for (i = 0; i < pDoc->m_Re_height; i++) {
		for (j = 0; j < pDoc->m_Re_width; j++) {
			R = pDoc->m_OutputImage[i * pDoc->m_Re_width + j];
			G = B = R;
			pDC->SetPixel(j + pDoc->m_width + 10, i + 5, RGB(R, G, B));
		}
	}


}


// Cmodule50511Chan1View 인쇄


void Cmodule50511Chan1View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL Cmodule50511Chan1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void Cmodule50511Chan1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void Cmodule50511Chan1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}

void Cmodule50511Chan1View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void Cmodule50511Chan1View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// Cmodule50511Chan1View 진단

#ifdef _DEBUG
void Cmodule50511Chan1View::AssertValid() const
{
	CView::AssertValid();
}

void Cmodule50511Chan1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmodule50511Chan1Doc* Cmodule50511Chan1View::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmodule50511Chan1Doc)));
	return (Cmodule50511Chan1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cmodule50511Chan1View 메시지 처리기


void Cmodule50511Chan1View::OnDownSampling()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	Cmodule50511Chan1Doc* pDoc = GetDocument(); // Doc 클래스 참조
	ASSERT_VALID(pDoc);

	pDoc->OnDownSampling(); // Doc 클래스에 OnDownSampling 함수 호출

	Invalidate(TRUE); // 화면 갱신

}


void Cmodule50511Chan1View::OnUpSampling()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	Cmodule50511Chan1Doc* pDoc = GetDocument(); // Doc 클래스 참조
	ASSERT_VALID(pDoc);

	pDoc->OnUpSampling(); // Doc 클래스에 OnUpSampling 함수 호출

	Invalidate(TRUE); // 화면 갱신

}


void Cmodule50511Chan1View::OnQuantization()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument(); // Doc 클래스 참조
	ASSERT_VALID(pDoc);

	pDoc->OnQuantization(); // Doc 클래스에 OnQuantization 함수 호출

	Invalidate(TRUE); // 화면 갱신

}


void Cmodule50511Chan1View::OnSumConstant()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	// 도큐먼트 클래스 참조
	ASSERT_VALID(pDoc); // 인스턴스 주소를 가져옴

	pDoc->OnSumConstant();

	Invalidate(TRUE);

}


//void Cmodule50511Chan1View::OnSubConstant()
//{
//	Cmodule50511Chan1Doc* pDoc = GetDocument();// 도큐먼트 클래스 참조
//	ASSERT_VALID(pDoc); // 인스턴스 주소를 가져옴
//
//	pDoc->OnSubConstant();
//
//	Invalidate(TRUE);
//}


void Cmodule50511Chan1View::OnSubConstant()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();// 도큐먼트 클래스 참조
	ASSERT_VALID(pDoc); // 인스턴스 주소를 가져옴

	pDoc->OnSubConstant();

	Invalidate(TRUE);

}


void Cmodule50511Chan1View::OnMulConstant()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument(); // 도큐먼트 클래스 참조
	ASSERT_VALID(pDoc); // 인스턴스 주소를 가져옴

	pDoc->OnMulConstant();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnDivConstant()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument(); // 도큐먼트 클래스 참조
	ASSERT_VALID(pDoc); // 인스턴스 주소를 가져옴

	pDoc->OnDivConstant();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnAndOperate()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument(); // 도큐먼트 클래스 참조
	ASSERT_VALID(pDoc); // 인스턴스 주소를 가져옴

	pDoc->OnAndOperate();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnOrOperate()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument(); // 도큐먼트 클래스 참조
	ASSERT_VALID(pDoc); // 인스턴스 주소를 가져옴

	pDoc->OnOrOperate();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnXorOperate()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument(); // 도큐먼트 클래스 참조
	ASSERT_VALID(pDoc); // 인스턴스 주소를 가져옴

	pDoc->OnXorOperate();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnGammaCorrection()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument(); // 도큐먼트 클래스 참조
	ASSERT_VALID(pDoc); // 인스턴스 주소를 가져옴

	pDoc->OnGammaCorrection();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnNegaTransform()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument(); // 도큐먼트 클래스 참조
	ASSERT_VALID(pDoc); // 인스턴스 주소를 가져옴

	pDoc->OnNegaTransform();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnBinaryztion()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument(); // 도큐먼트 클래스 참조
	ASSERT_VALID(pDoc); // 인스턴스 주소를 가져옴

	pDoc->OnBinaryztion();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnStressTransform()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnStressTransform();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnHistoStretch()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnHistoStretch();

	Invalidate(TRUE);

}


void Cmodule50511Chan1View::OnEndInSearch()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnEndInSearch();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnHistoEqual()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnHistoEqual();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnHistoSpec()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnHistoSpec();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnHistogram()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnHistogram();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnEmbossing()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnEmbossing();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnBlurr()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnBlurr();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnGaussianFilter()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnGaussianFilter();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnSharpening()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnSharpening();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnHpfSharp()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnHpfSharp();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnLpfSharp()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnLpfSharp();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnDiffOperatorHor()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnDiffOperatorHor();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnHomogenOperator()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnHomogenOperator();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnLaplacian()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnLaplacian();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnNearest()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnNearest();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnBilinear()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnBilinear();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnMedianSub()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnMedianSub();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnMeanSub()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnMeanSub();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnTranslation()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnTranslation();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnMirrorHor()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnMirrorHor();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnMirrorVer()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnMirrorVer();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnRotation()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnRotation();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnFrameSum()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnFrameSum();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnFrameSub()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnFrameSub();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnFrameMul()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnFrameMul();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnFrameDiv()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnFrameDiv();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnFrameAnd()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnFrameAnd();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnFrameOr()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnFrameOr();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnFrameComb()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnFrameComb();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnBinaryErosion()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnBinaryErosion();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnGrayErosion()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnGrayErosion();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnBinaryDilation()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnBinaryDilation();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnGrayDilation()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnGrayDilation();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnLowPassFilter()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnLowPassFilter();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnHighPassFilter()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnHighPassFilter();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnMeanFilter()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnMeanFilter();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnMedianFilter()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnMedianFilter();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnMaxFilter()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnMaxFilter();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnMinFilter()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnMinFilter();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnFft2d()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnFft2d();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnIfft2d()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnIfft2d();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnLpfFrequency()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnLpfFrequency();

	Invalidate(TRUE);
}


void Cmodule50511Chan1View::OnHpfFrequency()
{
	Cmodule50511Chan1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnHpfFrequency();

	Invalidate(TRUE);
}
