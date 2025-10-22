void UIOrthoCamera___ctor(UIOrthoCamera_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIOrthoCamera__Start(UIOrthoCamera_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  UnityEngine_Camera_o *mCam; // x0

  if ( (byte_4C5B66E & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Camera___);
    byte_4C5B66E = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Camera___);
  this->fields.mCam = (struct UnityEngine_Camera_o *)Component_object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mCam, (int32_t)Component_object, v4, v5);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v7, v8);
  mCam = this->fields.mCam;
  if ( !mCam )
    sub_1C3E7C0(0, v9);
  UnityEngine_Camera__set_orthographic(mCam, 1, 0);
}


void UIOrthoCamera__Update(UIOrthoCamera_o *this, const MethodInfo *method)
{
  UnityEngine_Camera_o *mCam; // x0
  float m_YMin; // s8
  int v5; // w20
  float v6; // s9
  float m_Height; // s10
  int v8; // w21
  float v9; // s8
  float orthographicSize; // s9
  float v11; // s1
  float v12; // s2
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v14; // s0
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o rect; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  mCam = this->fields.mCam;
  if ( !mCam )
    goto LABEL_15;
  rect = UnityEngine_Camera__get_rect(mCam, 0);
  m_YMin = rect.fields.m_YMin;
  mCam = (UnityEngine_Camera_o *)UnityEngine_Screen__get_height(0);
  if ( !this->fields.mCam )
    goto LABEL_15;
  v5 = (int)mCam;
  v17 = UnityEngine_Camera__get_rect(this->fields.mCam, 0);
  v6 = v17.fields.m_YMin;
  m_Height = v17.fields.m_Height;
  mCam = (UnityEngine_Camera_o *)UnityEngine_Screen__get_height(0);
  if ( !this->fields.mTrans )
    goto LABEL_15;
  v8 = (int)mCam;
  lossyScale = UnityEngine_Transform__get_lossyScale(this->fields.mTrans, 0);
  mCam = this->fields.mCam;
  if ( !mCam )
    goto LABEL_15;
  v9 = (float)((float)((float)((float)(m_Height + v6) * (float)v8) - (float)(m_YMin * (float)v5)) * 0.5)
     * lossyScale.fields.y;
  orthographicSize = UnityEngine_Camera__get_orthographicSize(mCam, 0);
  if ( !byte_4C506A5 )
  {
    sub_1C3E564(&UnityEngine_Mathf_TypeInfo);
    byte_4C506A5 = 1;
  }
  v11 = fabsf(orthographicSize);
  v12 = fabsf(v9);
  if ( v11 <= v12 )
    v11 = v12;
  static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
  v14 = v11 * 0.000001;
  if ( (float)(v11 * 0.000001) <= (float)(static_fields->Epsilon * 8.0) )
    v14 = static_fields->Epsilon * 8.0;
  if ( vabds_f32(v9, orthographicSize) >= v14 )
  {
    mCam = this->fields.mCam;
    if ( mCam )
    {
      UnityEngine_Camera__set_orthographicSize(mCam, v9, 0);
      return;
    }
LABEL_15:
    sub_1C3E7C0(mCam, method);
  }
}