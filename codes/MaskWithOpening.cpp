void __fastcall MaskWithOpening___ctor(MaskWithOpening_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MaskWithOpening__SetBlock(MaskWithOpening_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Collider_o *mask1; // x0
  UnityEngine_BoxCollider_o *v6; // x20
  __int64 v7; // x8
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EBB54 & 1) == 0 )
  {
    sub_B5D5C4(&ManagerConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBB54 = 1;
  }
  mask1 = (UnityEngine_Collider_o *)this->fields.mask1;
  if ( !mask1 )
    goto LABEL_13;
  UnityEngine_Collider__set_enabled(mask1, 1, 0LL);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask1;
  if ( !mask1 )
    goto LABEL_13;
  v8.fields.x = 0.0;
  v8.fields.y = 0.0;
  v8.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)mask1, v8, 0LL);
  v6 = this->fields.mask1;
  mask1 = (UnityEngine_Collider_o *)ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    mask1 = (UnityEngine_Collider_o *)ManagerConfig_TypeInfo;
  }
  if ( !v6 )
    goto LABEL_13;
  v7 = *(_QWORD *)&mask1[7].fields.m_CachedPtr;
  v9.fields.y = (float)*(int *)(v7 + 88);
  v9.fields.x = (float)*(int *)(v7 + 80);
  v9.fields.z = 0.0;
  UnityEngine_BoxCollider__set_size(v6, v9, 0LL);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask2;
  if ( !mask1
    || (UnityEngine_Collider__set_enabled(mask1, 0, 0LL), (mask1 = (UnityEngine_Collider_o *)this->fields.mask3) == 0LL)
    || (UnityEngine_Collider__set_enabled(mask1, 0, 0LL), (mask1 = (UnityEngine_Collider_o *)this->fields.mask4) == 0LL) )
  {
LABEL_13:
    sub_B5D69C(mask1, method);
  }
  UnityEngine_Collider__set_enabled(mask1, 0, 0LL);
}


void __fastcall MaskWithOpening__SetDepth(MaskWithOpening_o *this, int32_t depth, const MethodInfo *method)
{
  __int64 v3; // x3
  WebViewObject_o *Component_WebViewObject; // x0
  __int64 v7; // x1

  if ( (byte_42EBB52 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIPanel___, depth, (_DWORD)method, v3);
    byte_42EBB52 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !Component_WebViewObject )
    sub_B5D69C(0LL, v7);
  UIPanel__set_depth((UIPanel_o *)Component_WebViewObject, depth, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaskWithOpening__SetOpening(
        MaskWithOpening_o *this,
        UnityEngine_Rect_o hole,
        int32_t depth,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v7; // x1
  UnityEngine_Collider_o *mask1; // x0
  unsigned __int32 v9; // s0
  ManagerConfig_c *v13; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  UnityEngine_BoxCollider_o *v15; // x20
  int WIDTH; // s8
  int HEIGHT; // s9
  float yMin; // s0
  float v19; // s9
  UnityEngine_BoxCollider_o *v20; // x20
  float v21; // s0
  float v22; // s8
  UnityEngine_BoxCollider_o *mask2; // x20
  float yMax; // s0
  UnityEngine_BoxCollider_o *v25; // x20
  float v26; // s0
  UnityEngine_BoxCollider_o *mask3; // x20
  float m_XMin; // s9
  float y; // s1
  float v30; // s12
  float v31; // s0
  int v32; // s2
  UnityEngine_BoxCollider_o *v33; // x20
  float v34; // s8
  float v35; // s0
  UnityEngine_BoxCollider_o *mask4; // x20
  float v37; // s8
  float v38; // s1
  float v39; // s0
  int v40; // s2
  UnityEngine_BoxCollider_o *v41; // x19
  float v42; // s8
  float v43; // s0
  MethodInfo v44; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
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
  UnityEngine_Rect_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v44.methodPointer = *(Il2CppMethodPointer *)&hole.fields.m_XMin;
  v44.invoker_method = *(void **)&hole.fields.m_Width;
  if ( (byte_42EBB53 & 1) == 0 )
  {
    sub_B5D5C4(&ManagerConfig_TypeInfo, depth, (_DWORD)method, v4);
    byte_42EBB53 = 1;
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
  v13 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    v9 = j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo).n128_u32[0];
    v13 = ManagerConfig_TypeInfo;
  }
  static_fields = v13->static_fields;
  v15 = this->fields.mask1;
  WIDTH = static_fields->WIDTH;
  HEIGHT = static_fields->HEIGHT;
  yMin = UnityEngine_Rect__get_yMin(*(UnityEngine_Rect_o *)&v9, &v44);
  if ( !v15 )
    goto LABEL_19;
  v19 = (float)HEIGHT * 0.5;
  v45.fields.y = (float)((float)(yMin + v19) * 0.5) - v19;
  v45.fields.x = 0.0;
  v45.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center(v15, v45, 0LL);
  v20 = this->fields.mask1;
  v21 = UnityEngine_Rect__get_yMin(v51, &v44);
  if ( !v20 )
    goto LABEL_19;
  v22 = (float)WIDTH;
  v46.fields.y = v19 + v21;
  v46.fields.z = 0.0;
  v46.fields.x = v22;
  UnityEngine_BoxCollider__set_size(v20, v46, 0LL);
  mask2 = this->fields.mask2;
  yMax = UnityEngine_Rect__get_yMax(v52, &v44);
  if ( !mask2 )
    goto LABEL_19;
  v47.fields.y = v19 + (float)((float)(v19 - yMax) * -0.5);
  v47.fields.x = 0.0;
  v47.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center(mask2, v47, 0LL);
  v25 = this->fields.mask2;
  v26 = UnityEngine_Rect__get_yMax(v53, &v44);
  if ( !v25 )
    goto LABEL_19;
  v48.fields.y = v19 - v26;
  v48.fields.z = 0.0;
  v48.fields.x = v22;
  UnityEngine_BoxCollider__set_size(v25, v48, 0LL);
  mask3 = this->fields.mask3;
  v55.fields.m_XMin = UnityEngine_Rect__get_xMin(v54, &v44);
  m_XMin = v55.fields.m_XMin;
  y = UnityEngine_Rect__get_center(v55, &v44).fields.y;
  if ( !mask3 )
    goto LABEL_19;
  v30 = v22 * 0.5;
  v31 = (float)((float)((float)(v22 * 0.5) + m_XMin) * 0.5) - (float)(v22 * 0.5);
  v32 = 0;
  UnityEngine_BoxCollider__set_center(mask3, *(UnityEngine_Vector3_o *)(&y - 1), 0LL);
  v33 = this->fields.mask3;
  v57.fields.m_XMin = UnityEngine_Rect__get_xMin(v56, &v44);
  v34 = v57.fields.m_XMin;
  v35 = UnityEngine_Rect__get_height(v57, &v44);
  if ( !v33 )
    goto LABEL_19;
  v49.fields.y = v35;
  v49.fields.x = v30 + v34;
  v49.fields.z = 0.0;
  UnityEngine_BoxCollider__set_size(v33, v49, 0LL);
  mask4 = this->fields.mask4;
  v59.fields.m_XMin = UnityEngine_Rect__get_xMax(v58, &v44);
  v37 = v59.fields.m_XMin;
  v38 = UnityEngine_Rect__get_center(v59, &v44).fields.y;
  if ( !mask4
    || (v39 = v30 + (float)((float)(v30 - v37) * -0.5),
        v40 = 0,
        UnityEngine_BoxCollider__set_center(mask4, *(UnityEngine_Vector3_o *)(&v38 - 1), 0LL),
        v41 = this->fields.mask4,
        v61.fields.m_XMin = UnityEngine_Rect__get_xMax(v60, &v44),
        v42 = v61.fields.m_XMin,
        v43 = UnityEngine_Rect__get_height(v61, &v44),
        !v41) )
  {
LABEL_19:
    sub_B5D69C(mask1, v7);
  }
  v50.fields.y = v43;
  v50.fields.x = v30 - v42;
  v50.fields.z = 0.0;
  UnityEngine_BoxCollider__set_size(v41, v50, 0LL);
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
    sub_B5D69C(gameObject, v3);
  }
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v5, 0LL);
}