void __fastcall MaskWithOpening___ctor(MaskWithOpening_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MaskWithOpening__SetBlock(MaskWithOpening_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *mask1; // x0
  UnityEngine_BoxCollider_o *v4; // x0
  UnityEngine_BoxCollider_o *v5; // x20
  ManagerConfig_c *v6; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  UnityEngine_Collider_o *mask2; // x0
  UnityEngine_Collider_o *mask3; // x0
  UnityEngine_Collider_o *mask4; // x0
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB623 & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, method);
    byte_40FB623 = 1;
  }
  mask1 = (UnityEngine_Collider_o *)this->fields.mask1;
  if ( !mask1 )
    goto LABEL_13;
  UnityEngine_Collider__set_enabled(mask1, 1, 0LL);
  v4 = this->fields.mask1;
  if ( !v4 )
    goto LABEL_13;
  v11.fields.x = 0.0;
  v11.fields.y = 0.0;
  v11.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center(v4, v11, 0LL);
  v5 = this->fields.mask1;
  v6 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v6 = ManagerConfig_TypeInfo;
  }
  if ( !v5 )
    goto LABEL_13;
  static_fields = v6->static_fields;
  v12.fields.y = (float)static_fields->HEIGHT;
  v12.fields.x = (float)static_fields->WIDTH;
  v12.fields.z = 0.0;
  UnityEngine_BoxCollider__set_size(v5, v12, 0LL);
  mask2 = (UnityEngine_Collider_o *)this->fields.mask2;
  if ( !mask2
    || (UnityEngine_Collider__set_enabled(mask2, 0, 0LL), (mask3 = (UnityEngine_Collider_o *)this->fields.mask3) == 0LL)
    || (UnityEngine_Collider__set_enabled(mask3, 0, 0LL), (mask4 = (UnityEngine_Collider_o *)this->fields.mask4) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  UnityEngine_Collider__set_enabled(mask4, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaskWithOpening__SetDepth(MaskWithOpening_o *this, int32_t depth, const MethodInfo *method)
{
  WebViewObject_o *Component_WebViewObject; // x0

  if ( (byte_40FB621 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&depth);
    byte_40FB621 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !Component_WebViewObject )
    sub_B170D4();
  UIPanel__set_depth((UIPanel_o *)Component_WebViewObject, depth, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaskWithOpening__SetOpening(
        MaskWithOpening_o *this,
        UnityEngine_Rect_o hole,
        int32_t depth,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *mask1; // x0
  UnityEngine_Collider_o *mask2; // x0
  UnityEngine_Collider_o *mask3; // x0
  UnityEngine_Collider_o *mask4; // x0
  unsigned __int32 v10; // s0
  ManagerConfig_c *v14; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  UnityEngine_BoxCollider_o *v16; // x20
  int WIDTH; // s8
  int HEIGHT; // s9
  float yMin; // s0
  float v20; // s9
  UnityEngine_BoxCollider_o *v21; // x20
  float v22; // s0
  float v23; // s8
  UnityEngine_BoxCollider_o *v24; // x20
  float yMax; // s0
  UnityEngine_BoxCollider_o *v26; // x20
  float v27; // s0
  UnityEngine_BoxCollider_o *v28; // x20
  float m_XMin; // s9
  float y; // s1
  float v31; // s12
  float v32; // s0
  int v33; // s2
  UnityEngine_BoxCollider_o *v34; // x20
  float v35; // s8
  float v36; // s0
  UnityEngine_BoxCollider_o *v37; // x20
  float v38; // s8
  float v39; // s1
  float v40; // s0
  int v41; // s2
  UnityEngine_BoxCollider_o *v42; // x19
  float v43; // s8
  float v44; // s0
  MethodInfo v45; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
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
  UnityEngine_Rect_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v45.methodPointer = *(Il2CppMethodPointer *)&hole.fields.m_XMin;
  v45.invoker_method = *(void **)&hole.fields.m_Width;
  if ( (byte_40FB622 & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, *(_QWORD *)&depth);
    byte_40FB622 = 1;
  }
  MaskWithOpening__SetDepth(this, depth, method);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask1;
  if ( !mask1 )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled(mask1, 1, 0LL);
  mask2 = (UnityEngine_Collider_o *)this->fields.mask2;
  if ( !mask2 )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled(mask2, 1, 0LL);
  mask3 = (UnityEngine_Collider_o *)this->fields.mask3;
  if ( !mask3 )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled(mask3, 1, 0LL);
  mask4 = (UnityEngine_Collider_o *)this->fields.mask4;
  if ( !mask4 )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled(mask4, 1, 0LL);
  v14 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    v10 = j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo).n128_u32[0];
    v14 = ManagerConfig_TypeInfo;
  }
  static_fields = v14->static_fields;
  v16 = this->fields.mask1;
  WIDTH = static_fields->WIDTH;
  HEIGHT = static_fields->HEIGHT;
  yMin = UnityEngine_Rect__get_yMin(*(UnityEngine_Rect_o *)&v10, &v45);
  if ( !v16 )
    goto LABEL_19;
  v20 = (float)HEIGHT * 0.5;
  v46.fields.y = (float)((float)(yMin + v20) * 0.5) - v20;
  v46.fields.x = 0.0;
  v46.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center(v16, v46, 0LL);
  v21 = this->fields.mask1;
  v22 = UnityEngine_Rect__get_yMin(v52, &v45);
  if ( !v21 )
    goto LABEL_19;
  v23 = (float)WIDTH;
  v47.fields.y = v20 + v22;
  v47.fields.z = 0.0;
  v47.fields.x = v23;
  UnityEngine_BoxCollider__set_size(v21, v47, 0LL);
  v24 = this->fields.mask2;
  yMax = UnityEngine_Rect__get_yMax(v53, &v45);
  if ( !v24 )
    goto LABEL_19;
  v48.fields.y = v20 + (float)((float)(v20 - yMax) * -0.5);
  v48.fields.x = 0.0;
  v48.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center(v24, v48, 0LL);
  v26 = this->fields.mask2;
  v27 = UnityEngine_Rect__get_yMax(v54, &v45);
  if ( !v26 )
    goto LABEL_19;
  v49.fields.y = v20 - v27;
  v49.fields.z = 0.0;
  v49.fields.x = v23;
  UnityEngine_BoxCollider__set_size(v26, v49, 0LL);
  v28 = this->fields.mask3;
  v56.fields.m_XMin = UnityEngine_Rect__get_xMin(v55, &v45);
  m_XMin = v56.fields.m_XMin;
  y = UnityEngine_Rect__get_center(v56, &v45).fields.y;
  if ( !v28 )
    goto LABEL_19;
  v31 = v23 * 0.5;
  v32 = (float)((float)((float)(v23 * 0.5) + m_XMin) * 0.5) - (float)(v23 * 0.5);
  v33 = 0;
  UnityEngine_BoxCollider__set_center(v28, *(UnityEngine_Vector3_o *)(&y - 1), 0LL);
  v34 = this->fields.mask3;
  v58.fields.m_XMin = UnityEngine_Rect__get_xMin(v57, &v45);
  v35 = v58.fields.m_XMin;
  v36 = UnityEngine_Rect__get_height(v58, &v45);
  if ( !v34 )
    goto LABEL_19;
  v50.fields.y = v36;
  v50.fields.x = v31 + v35;
  v50.fields.z = 0.0;
  UnityEngine_BoxCollider__set_size(v34, v50, 0LL);
  v37 = this->fields.mask4;
  v60.fields.m_XMin = UnityEngine_Rect__get_xMax(v59, &v45);
  v38 = v60.fields.m_XMin;
  v39 = UnityEngine_Rect__get_center(v60, &v45).fields.y;
  if ( !v37
    || (v40 = v31 + (float)((float)(v31 - v38) * -0.5),
        v41 = 0,
        UnityEngine_BoxCollider__set_center(v37, *(UnityEngine_Vector3_o *)(&v39 - 1), 0LL),
        v42 = this->fields.mask4,
        v62.fields.m_XMin = UnityEngine_Rect__get_xMax(v61, &v45),
        v43 = v62.fields.m_XMin,
        v44 = UnityEngine_Rect__get_height(v62, &v45),
        !v42) )
  {
LABEL_19:
    sub_B170D4();
  }
  v51.fields.y = v44;
  v51.fields.x = v31 - v43;
  v51.fields.z = 0.0;
  UnityEngine_BoxCollider__set_size(v42, v51, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaskWithOpening__Start(MaskWithOpening_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x19
  int v4; // s0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL),
        *(UnityEngine_Vector3_o *)&v4 = UnityEngine_Vector3__get_one(0LL),
        !transform) )
  {
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v4, 0LL);
}