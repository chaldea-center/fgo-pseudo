void __fastcall MaskWithOpening___ctor(MaskWithOpening_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MaskWithOpening__SetBlock(MaskWithOpening_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *mask1; // x0
  UnityEngine_BoxCollider_o *v4; // x20
  __int64 v5; // x8
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41858F2 & 1) == 0 )
  {
    sub_B2C35C(&ManagerConfig_TypeInfo, method);
    byte_41858F2 = 1;
  }
  mask1 = (UnityEngine_Collider_o *)this->fields.mask1;
  if ( !mask1 )
    goto LABEL_13;
  UnityEngine_Collider__set_enabled(mask1, 1, 0LL);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask1;
  if ( !mask1 )
    goto LABEL_13;
  v6.fields.x = 0.0;
  v6.fields.y = 0.0;
  v6.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)mask1, v6, 0LL);
  v4 = this->fields.mask1;
  mask1 = (UnityEngine_Collider_o *)ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    mask1 = (UnityEngine_Collider_o *)ManagerConfig_TypeInfo;
  }
  if ( !v4 )
    goto LABEL_13;
  v5 = *(_QWORD *)&mask1[7].fields.m_CachedPtr;
  v7.fields.y = (float)*(int *)(v5 + 88);
  v7.fields.x = (float)*(int *)(v5 + 80);
  v7.fields.z = 0.0;
  UnityEngine_BoxCollider__set_size(v4, v7, 0LL);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask2;
  if ( !mask1
    || (UnityEngine_Collider__set_enabled(mask1, 0, 0LL), (mask1 = (UnityEngine_Collider_o *)this->fields.mask3) == 0LL)
    || (UnityEngine_Collider__set_enabled(mask1, 0, 0LL), (mask1 = (UnityEngine_Collider_o *)this->fields.mask4) == 0LL) )
  {
LABEL_13:
    sub_B2C434(mask1, method);
  }
  UnityEngine_Collider__set_enabled(mask1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaskWithOpening__SetDepth(MaskWithOpening_o *this, int32_t depth, const MethodInfo *method)
{
  WebViewObject_o *Component_WebViewObject; // x0
  __int64 v6; // x1

  if ( (byte_41858F0 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&depth);
    byte_41858F0 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !Component_WebViewObject )
    sub_B2C434(0LL, v6);
  UIPanel__set_depth((UIPanel_o *)Component_WebViewObject, depth, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaskWithOpening__SetOpening(
        MaskWithOpening_o *this,
        UnityEngine_Rect_o hole,
        int32_t depth,
        const MethodInfo *method)
{
  __int64 v6; // x1
  UnityEngine_Collider_o *mask1; // x0
  unsigned __int32 v8; // s0
  ManagerConfig_c *v12; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  UnityEngine_BoxCollider_o *v14; // x20
  int WIDTH; // s8
  int HEIGHT; // s9
  float yMin; // s0
  float v18; // s9
  UnityEngine_BoxCollider_o *v19; // x20
  float v20; // s0
  float v21; // s8
  UnityEngine_BoxCollider_o *mask2; // x20
  float yMax; // s0
  UnityEngine_BoxCollider_o *v24; // x20
  float v25; // s0
  UnityEngine_BoxCollider_o *mask3; // x20
  float m_XMin; // s9
  float y; // s1
  float v29; // s12
  float v30; // s0
  int v31; // s2
  UnityEngine_BoxCollider_o *v32; // x20
  float v33; // s8
  float v34; // s0
  UnityEngine_BoxCollider_o *mask4; // x20
  float v36; // s8
  float v37; // s1
  float v38; // s0
  int v39; // s2
  UnityEngine_BoxCollider_o *v40; // x19
  float v41; // s8
  float v42; // s0
  MethodInfo v43; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v43.methodPointer = *(Il2CppMethodPointer *)&hole.fields.m_XMin;
  v43.invoker_method = *(void **)&hole.fields.m_Width;
  if ( (byte_41858F1 & 1) == 0 )
  {
    sub_B2C35C(&ManagerConfig_TypeInfo, *(_QWORD *)&depth);
    byte_41858F1 = 1;
  }
  MaskWithOpening__SetDepth(this, depth, method);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask1;
  if ( !mask1 )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled(mask1, 1, 0LL);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask2;
  if ( !mask1 )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled(mask1, 1, 0LL);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask3;
  if ( !mask1 )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled(mask1, 1, 0LL);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask4;
  if ( !mask1 )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled(mask1, 1, 0LL);
  v12 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    v8 = j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo).n128_u32[0];
    v12 = ManagerConfig_TypeInfo;
  }
  static_fields = v12->static_fields;
  v14 = this->fields.mask1;
  WIDTH = static_fields->WIDTH;
  HEIGHT = static_fields->HEIGHT;
  yMin = UnityEngine_Rect__get_yMin(*(UnityEngine_Rect_o *)&v8, &v43);
  if ( !v14 )
    goto LABEL_19;
  v18 = (float)HEIGHT * 0.5;
  v44.fields.y = (float)((float)(yMin + v18) * 0.5) - v18;
  v44.fields.x = 0.0;
  v44.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center(v14, v44, 0LL);
  v19 = this->fields.mask1;
  v20 = UnityEngine_Rect__get_yMin(v50, &v43);
  if ( !v19 )
    goto LABEL_19;
  v21 = (float)WIDTH;
  v45.fields.y = v18 + v20;
  v45.fields.z = 0.0;
  v45.fields.x = v21;
  UnityEngine_BoxCollider__set_size(v19, v45, 0LL);
  mask2 = this->fields.mask2;
  yMax = UnityEngine_Rect__get_yMax(v51, &v43);
  if ( !mask2 )
    goto LABEL_19;
  v46.fields.y = v18 + (float)((float)(v18 - yMax) * -0.5);
  v46.fields.x = 0.0;
  v46.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center(mask2, v46, 0LL);
  v24 = this->fields.mask2;
  v25 = UnityEngine_Rect__get_yMax(v52, &v43);
  if ( !v24 )
    goto LABEL_19;
  v47.fields.y = v18 - v25;
  v47.fields.z = 0.0;
  v47.fields.x = v21;
  UnityEngine_BoxCollider__set_size(v24, v47, 0LL);
  mask3 = this->fields.mask3;
  v54.fields.m_XMin = UnityEngine_Rect__get_xMin(v53, &v43);
  m_XMin = v54.fields.m_XMin;
  y = UnityEngine_Rect__get_center(v54, &v43).fields.y;
  if ( !mask3 )
    goto LABEL_19;
  v29 = v21 * 0.5;
  v30 = (float)((float)((float)(v21 * 0.5) + m_XMin) * 0.5) - (float)(v21 * 0.5);
  v31 = 0;
  UnityEngine_BoxCollider__set_center(mask3, *(UnityEngine_Vector3_o *)(&y - 1), 0LL);
  v32 = this->fields.mask3;
  v56.fields.m_XMin = UnityEngine_Rect__get_xMin(v55, &v43);
  v33 = v56.fields.m_XMin;
  v34 = UnityEngine_Rect__get_height(v56, &v43);
  if ( !v32 )
    goto LABEL_19;
  v48.fields.y = v34;
  v48.fields.x = v29 + v33;
  v48.fields.z = 0.0;
  UnityEngine_BoxCollider__set_size(v32, v48, 0LL);
  mask4 = this->fields.mask4;
  v58.fields.m_XMin = UnityEngine_Rect__get_xMax(v57, &v43);
  v36 = v58.fields.m_XMin;
  v37 = UnityEngine_Rect__get_center(v58, &v43).fields.y;
  if ( !mask4
    || (v38 = v29 + (float)((float)(v29 - v36) * -0.5),
        v39 = 0,
        UnityEngine_BoxCollider__set_center(mask4, *(UnityEngine_Vector3_o *)(&v37 - 1), 0LL),
        v40 = this->fields.mask4,
        v60.fields.m_XMin = UnityEngine_Rect__get_xMax(v59, &v43),
        v41 = v60.fields.m_XMin,
        v42 = UnityEngine_Rect__get_height(v60, &v43),
        !v40) )
  {
LABEL_19:
    sub_B2C434(mask1, v6);
  }
  v49.fields.y = v42;
  v49.fields.x = v29 - v41;
  v49.fields.z = 0.0;
  UnityEngine_BoxCollider__set_size(v40, v49, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaskWithOpening__Start(MaskWithOpening_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x19
  int v5; // s0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL),
        *(UnityEngine_Vector3_o *)&v5 = UnityEngine_Vector3__get_one(0LL),
        !transform) )
  {
    sub_B2C434(gameObject, v3);
  }
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v5, 0LL);
}