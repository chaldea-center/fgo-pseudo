void MaskWithOpening___ctor(MaskWithOpening_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MaskWithOpening__SetBlock(MaskWithOpening_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *mask1; // x0
  UnityEngine_BoxCollider_o *v4; // x20
  intptr_t m_CachedPtr; // x8
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C33DC9 & 1) == 0 )
  {
    sub_1C32C20(&ManagerConfig_TypeInfo);
    byte_4C33DC9 = 1;
  }
  mask1 = (UnityEngine_Collider_o *)this->fields.mask1;
  if ( !mask1 )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled(mask1, 1, 0);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask1;
  if ( !mask1 )
    goto LABEL_12;
  v6.fields.x = 0.0;
  v6.fields.y = 0.0;
  v6.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)mask1, v6, 0);
  mask1 = (UnityEngine_Collider_o *)ManagerConfig_TypeInfo;
  v4 = this->fields.mask1;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    mask1 = (UnityEngine_Collider_o *)ManagerConfig_TypeInfo;
  }
  if ( !v4 )
    goto LABEL_12;
  m_CachedPtr = mask1[7].fields.m_CachedPtr;
  v7.fields.y = (float)*(int *)(m_CachedPtr + 88);
  v7.fields.x = (float)*(int *)(m_CachedPtr + 80);
  v7.fields.z = 0.0;
  UnityEngine_BoxCollider__set_size(v4, v7, 0);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask2;
  if ( !mask1
    || (UnityEngine_Collider__set_enabled(mask1, 0, 0), (mask1 = (UnityEngine_Collider_o *)this->fields.mask3) == 0)
    || (UnityEngine_Collider__set_enabled(mask1, 0, 0), (mask1 = (UnityEngine_Collider_o *)this->fields.mask4) == 0) )
  {
LABEL_12:
    sub_1C32E7C(mask1);
  }
  UnityEngine_Collider__set_enabled(mask1, 0, 0);
}


void MaskWithOpening__SetDepth(MaskWithOpening_o *this, int32_t depth, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0

  if ( (byte_4C33DC7 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4C33DC7 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !Component_object )
    sub_1C32E7C(0);
  UIPanel__set_depth((UIPanel_o *)Component_object, depth, 0);
}


void MaskWithOpening__SetOpening(
        MaskWithOpening_o *this,
        UnityEngine_Rect_o hole,
        int32_t depth,
        const MethodInfo *method)
{
  float m_Height; // s8
  float m_Width; // s9
  float m_YMin; // s11
  float m_XMin; // s10
  UnityEngine_Collider_o *mask1; // x0
  ManagerConfig_c *v11; // x8
  struct ManagerConfig_StaticFields *static_fields; // x8
  int WIDTH_21_9; // s12
  float v14; // s14
  float v15; // s12
  float v16; // s13
  float v17; // s12
  float v18; // s11
  float v19; // s9
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  m_Height = hole.fields.m_Height;
  m_Width = hole.fields.m_Width;
  m_YMin = hole.fields.m_YMin;
  m_XMin = hole.fields.m_XMin;
  if ( (byte_4C33DC8 & 1) == 0 )
  {
    sub_1C32C20(&ManagerConfig_TypeInfo);
    byte_4C33DC8 = 1;
  }
  MaskWithOpening__SetDepth(this, depth, method);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask1;
  if ( !mask1 )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled(mask1, 1, 0);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask2;
  if ( !mask1 )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled(mask1, 1, 0);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask3;
  if ( !mask1 )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled(mask1, 1, 0);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask4;
  if ( !mask1 )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled(mask1, 1, 0);
  v11 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v11 = ManagerConfig_TypeInfo;
  }
  mask1 = (UnityEngine_Collider_o *)this->fields.mask1;
  if ( !mask1 )
    goto LABEL_18;
  static_fields = v11->static_fields;
  v20.fields.z = 0.0;
  WIDTH_21_9 = static_fields->WIDTH_21_9;
  v14 = (float)static_fields->HEIGHT * 0.5;
  v20.fields.y = (float)((float)(m_YMin + v14) * 0.5) - v14;
  v20.fields.x = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)mask1, v20, 0);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask1;
  if ( !mask1 )
    goto LABEL_18;
  v15 = (float)WIDTH_21_9;
  v21.fields.z = 0.0;
  v21.fields.x = v15;
  v21.fields.y = m_YMin + v14;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)mask1, v21, 0);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask2;
  if ( !mask1 )
    goto LABEL_18;
  v22.fields.y = v14 + (float)((float)(v14 - (float)(m_Height + m_YMin)) * -0.5);
  v22.fields.x = 0.0;
  v22.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)mask1, v22, 0);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask2;
  if ( !mask1 )
    goto LABEL_18;
  v23.fields.z = 0.0;
  v23.fields.x = v15;
  v23.fields.y = v14 - (float)(m_Height + m_YMin);
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)mask1, v23, 0);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask3;
  if ( !mask1 )
    goto LABEL_18;
  v16 = v15 * 0.5;
  v17 = m_XMin + (float)(v15 * 0.5);
  v18 = m_YMin + (float)(m_Height * 0.5);
  v24.fields.x = (float)(v17 * 0.5) - v16;
  v24.fields.z = 0.0;
  v24.fields.y = v18;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)mask1, v24, 0);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask3;
  if ( !mask1 )
    goto LABEL_18;
  v25.fields.z = 0.0;
  v25.fields.x = v17;
  v25.fields.y = m_Height;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)mask1, v25, 0);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask4;
  if ( !mask1
    || (v19 = v16 - (float)(m_Width + m_XMin),
        v26.fields.x = v16 + (float)(v19 * -0.5),
        v26.fields.z = 0.0,
        v26.fields.y = v18,
        UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)mask1, v26, 0),
        (mask1 = (UnityEngine_Collider_o *)this->fields.mask4) == 0) )
  {
LABEL_18:
    sub_1C32E7C(mask1);
  }
  v27.fields.x = v19;
  v27.fields.y = m_Height;
  v27.fields.z = 0.0;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)mask1, v27, 0);
}


void MaskWithOpening__Start(MaskWithOpening_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v3; // x19

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_6;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  v3 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4C313D6 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  if ( !v3 )
LABEL_6:
    sub_1C32E7C(gameObject);
  UnityEngine_Transform__set_localScale(v3, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
}