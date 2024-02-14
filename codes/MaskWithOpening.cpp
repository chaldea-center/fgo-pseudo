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

  if ( (byte_4212A2E & 1) == 0 )
  {
    sub_B0D8A4(&ManagerConfig_TypeInfo, method);
    byte_4212A2E = 1;
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
    sub_B0D97C(mask1);
  }
  UnityEngine_Collider__set_enabled(mask1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaskWithOpening__SetDepth(MaskWithOpening_o *this, int32_t depth, const MethodInfo *method)
{
  WebViewObject_o *Component_WebViewObject; // x0

  if ( (byte_4212A2C & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&depth);
    byte_4212A2C = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !Component_WebViewObject )
    sub_B0D97C(0LL);
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
  unsigned __int32 v7; // s0
  ManagerConfig_c *v11; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  UnityEngine_BoxCollider_o *v13; // x20
  int WIDTH; // s8
  int HEIGHT; // s9
  float yMin; // s0
  float v17; // s9
  UnityEngine_BoxCollider_o *v18; // x20
  float v19; // s0
  float v20; // s8
  UnityEngine_BoxCollider_o *mask2; // x20
  float yMax; // s0
  UnityEngine_BoxCollider_o *v23; // x20
  float v24; // s0
  UnityEngine_BoxCollider_o *mask3; // x20
  float m_XMin; // s9
  float y; // s1
  float v28; // s12
  float v29; // s0
  int v30; // s2
  UnityEngine_BoxCollider_o *v31; // x20
  float v32; // s8
  float v33; // s0
  UnityEngine_BoxCollider_o *mask4; // x20
  float v35; // s8
  float v36; // s1
  float v37; // s0
  int v38; // s2
  UnityEngine_BoxCollider_o *v39; // x19
  float v40; // s8
  float v41; // s0
  MethodInfo v42; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
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

  v42.methodPointer = *(Il2CppMethodPointer *)&hole.fields.m_XMin;
  v42.invoker_method = *(void **)&hole.fields.m_Width;
  if ( (byte_4212A2D & 1) == 0 )
  {
    sub_B0D8A4(&ManagerConfig_TypeInfo, *(_QWORD *)&depth);
    byte_4212A2D = 1;
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
  v11 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    v7 = j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo).n128_u32[0];
    v11 = ManagerConfig_TypeInfo;
  }
  static_fields = v11->static_fields;
  v13 = this->fields.mask1;
  WIDTH = static_fields->WIDTH;
  HEIGHT = static_fields->HEIGHT;
  yMin = UnityEngine_Rect__get_yMin(*(UnityEngine_Rect_o *)&v7, &v42);
  if ( !v13 )
    goto LABEL_19;
  v17 = (float)HEIGHT * 0.5;
  v43.fields.y = (float)((float)(yMin + v17) * 0.5) - v17;
  v43.fields.x = 0.0;
  v43.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center(v13, v43, 0LL);
  v18 = this->fields.mask1;
  v19 = UnityEngine_Rect__get_yMin(v49, &v42);
  if ( !v18 )
    goto LABEL_19;
  v20 = (float)WIDTH;
  v44.fields.y = v17 + v19;
  v44.fields.z = 0.0;
  v44.fields.x = v20;
  UnityEngine_BoxCollider__set_size(v18, v44, 0LL);
  mask2 = this->fields.mask2;
  yMax = UnityEngine_Rect__get_yMax(v50, &v42);
  if ( !mask2 )
    goto LABEL_19;
  v45.fields.y = v17 + (float)((float)(v17 - yMax) * -0.5);
  v45.fields.x = 0.0;
  v45.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center(mask2, v45, 0LL);
  v23 = this->fields.mask2;
  v24 = UnityEngine_Rect__get_yMax(v51, &v42);
  if ( !v23 )
    goto LABEL_19;
  v46.fields.y = v17 - v24;
  v46.fields.z = 0.0;
  v46.fields.x = v20;
  UnityEngine_BoxCollider__set_size(v23, v46, 0LL);
  mask3 = this->fields.mask3;
  v53.fields.m_XMin = UnityEngine_Rect__get_xMin(v52, &v42);
  m_XMin = v53.fields.m_XMin;
  y = UnityEngine_Rect__get_center(v53, &v42).fields.y;
  if ( !mask3 )
    goto LABEL_19;
  v28 = v20 * 0.5;
  v29 = (float)((float)((float)(v20 * 0.5) + m_XMin) * 0.5) - (float)(v20 * 0.5);
  v30 = 0;
  UnityEngine_BoxCollider__set_center(mask3, *(UnityEngine_Vector3_o *)(&y - 1), 0LL);
  v31 = this->fields.mask3;
  v55.fields.m_XMin = UnityEngine_Rect__get_xMin(v54, &v42);
  v32 = v55.fields.m_XMin;
  v33 = UnityEngine_Rect__get_height(v55, &v42);
  if ( !v31 )
    goto LABEL_19;
  v47.fields.y = v33;
  v47.fields.x = v28 + v32;
  v47.fields.z = 0.0;
  UnityEngine_BoxCollider__set_size(v31, v47, 0LL);
  mask4 = this->fields.mask4;
  v57.fields.m_XMin = UnityEngine_Rect__get_xMax(v56, &v42);
  v35 = v57.fields.m_XMin;
  v36 = UnityEngine_Rect__get_center(v57, &v42).fields.y;
  if ( !mask4
    || (v37 = v28 + (float)((float)(v28 - v35) * -0.5),
        v38 = 0,
        UnityEngine_BoxCollider__set_center(mask4, *(UnityEngine_Vector3_o *)(&v36 - 1), 0LL),
        v39 = this->fields.mask4,
        v59.fields.m_XMin = UnityEngine_Rect__get_xMax(v58, &v42),
        v40 = v59.fields.m_XMin,
        v41 = UnityEngine_Rect__get_height(v59, &v42),
        !v39) )
  {
LABEL_19:
    sub_B0D97C(mask1);
  }
  v48.fields.y = v41;
  v48.fields.x = v28 - v40;
  v48.fields.z = 0.0;
  UnityEngine_BoxCollider__set_size(v39, v48, 0LL);
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
    sub_B0D97C(gameObject);
  }
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v4, 0LL);
}