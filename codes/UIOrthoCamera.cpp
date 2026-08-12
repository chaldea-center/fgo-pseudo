void UIOrthoCamera___ctor(UIOrthoCamera_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIOrthoCamera__Start(UIOrthoCamera_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  UnityEngine_Camera_o *mCam; // x0

  if ( (byte_59752A9 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Camera___);
    byte_59752A9 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Camera___);
  this->fields.mCam = (struct UnityEngine_Camera_o *)Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mCam, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mTrans,
    (int32_t)transform,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  mCam = this->fields.mCam;
  if ( !mCam )
    sub_2213CDC(0, v17);
  UnityEngine_Camera__set_orthographic(mCam, 1, 0);
}


void UIOrthoCamera__Update(UIOrthoCamera_o *this, const MethodInfo *method)
{
  UnityEngine_Camera_o *mCam; // x0
  float m_YMin; // s8
  int v5; // w20
  int v6; // w21
  float v7; // s8
  float orthographicSize; // s9
  float v9; // s0
  float v10; // s1
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v12; // s0
  float y; // s1
  UnityEngine_Rect_o rect; // 0:kr10_16.16

  mCam = this->fields.mCam;
  if ( !mCam )
    goto LABEL_15;
  m_YMin = UnityEngine_Camera__get_rect(mCam, 0).fields.m_YMin;
  mCam = (UnityEngine_Camera_o *)UnityEngine_Screen__get_height(0);
  if ( !this->fields.mCam )
    goto LABEL_15;
  v5 = (int)mCam;
  rect = UnityEngine_Camera__get_rect(this->fields.mCam, 0);
  mCam = (UnityEngine_Camera_o *)UnityEngine_Screen__get_height(0);
  if ( !this->fields.mTrans )
    goto LABEL_15;
  v6 = (int)mCam;
  y = UnityEngine_Transform__get_lossyScale(this->fields.mTrans, 0).fields.y;
  mCam = this->fields.mCam;
  if ( !mCam )
    goto LABEL_15;
  v7 = (float)((float)((float)((float)(rect.fields.m_Height + rect.fields.m_YMin) * (float)v6)
                     - (float)(m_YMin * (float)v5))
             * 0.5)
     * y;
  orthographicSize = UnityEngine_Camera__get_orthographicSize(mCam, 0);
  if ( !byte_5969AE4 )
  {
    sub_2213A60(&UnityEngine_Mathf_TypeInfo);
    byte_5969AE4 = 1;
  }
  v9 = fabsf(orthographicSize);
  v10 = fabsf(v7);
  static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
  if ( v9 <= v10 )
    v9 = v10;
  v12 = v9 * 0.000001;
  if ( v12 <= (float)(static_fields->Epsilon * 8.0) )
    v12 = static_fields->Epsilon * 8.0;
  if ( vabds_f32(v7, orthographicSize) >= v12 )
  {
    mCam = this->fields.mCam;
    if ( mCam )
    {
      UnityEngine_Camera__set_orthographicSize(mCam, v7, 0);
      return;
    }
LABEL_15:
    sub_2213CDC(mCam, method);
  }
}