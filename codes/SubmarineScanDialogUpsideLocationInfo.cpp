// attributes: thunk
void __fastcall SubmarineScanDialogUpsideLocationInfo___ctor(
        SubmarineScanDialogUpsideLocationInfo_o *this,
        const MethodInfo *method)
{
  Submarine2DUILocationInfo___ctor((Submarine2DUILocationInfo_o *)this, method);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall SubmarineScanDialogUpsideLocationInfo__GetScanDialogRect(
        SubmarineScanDialogUpsideLocationInfo_o *this,
        const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  float v5; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  *(UnityEngine_Rect_o *)&v2 = UiRectFactory__CenterRect(0.0, 160.0, 500.0, 160.0, 0LL);
  result.fields.m_Height = v5;
  result.fields.m_Width = v4;
  result.fields.m_YMin = v3;
  result.fields.m_XMin = v2;
  return result;
}