void MaskWithOpening___ctor(MaskWithOpening_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MaskWithOpening__SetBlock(MaskWithOpening_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *mask1; // x0
  __int64 v4; // x2
  UnityEngine_BoxCollider_o *v5; // x20
  struct ManagerConfig_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596C9D2 & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_596C9D2 = 1;
  }
  mask1 = (UnityEngine_Collider_o *)this->fields.mask1;
  if ( !mask1 )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled(mask1, 1, 0);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask1;
  if ( !mask1 )
    goto LABEL_12;
  v7.fields.x = 0.0;
  v7.fields.y = 0.0;
  v7.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)mask1, v7, 0);
  mask1 = (UnityEngine_Collider_o *)ManagerConfig_TypeInfo;
  v5 = this->fields.mask1;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v4);
  if ( !v5 )
    goto LABEL_12;
  static_fields = ManagerConfig_TypeInfo->static_fields;
  v8.fields.y = (float)static_fields->HEIGHT;
  v8.fields.x = (float)static_fields->WIDTH;
  v8.fields.z = 0.0;
  UnityEngine_BoxCollider__set_size(v5, v8, 0);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask2;
  if ( !mask1
    || (UnityEngine_Collider__set_enabled(mask1, 0, 0), (mask1 = (UnityEngine_Collider_o *)this->fields.mask3) == 0)
    || (UnityEngine_Collider__set_enabled(mask1, 0, 0), (mask1 = (UnityEngine_Collider_o *)this->fields.mask4) == 0) )
  {
LABEL_12:
    sub_2213CDC(mask1, method);
  }
  UnityEngine_Collider__set_enabled(mask1, 0, 0);
}


void MaskWithOpening__SetDepth(MaskWithOpening_o *this, int32_t depth, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_596C9D0 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_596C9D0 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !Component_object )
    sub_2213CDC(0, v6);
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
  __int64 v10; // x1
  UnityEngine_Collider_o *mask1; // x0
  __int64 v12; // x2
  ManagerConfig_c *v13; // x8
  struct ManagerConfig_StaticFields *static_fields; // x8
  int WIDTH_21_9; // s12
  float v16; // s14
  float v17; // s12
  float v18; // s13
  float v19; // s12
  float v20; // s11
  float v21; // s9
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  m_Height = hole.fields.m_Height;
  m_Width = hole.fields.m_Width;
  m_YMin = hole.fields.m_YMin;
  m_XMin = hole.fields.m_XMin;
  if ( (byte_596C9D1 & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_596C9D1 = 1;
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
  v13 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v10, v12);
    v13 = ManagerConfig_TypeInfo;
  }
  mask1 = (UnityEngine_Collider_o *)this->fields.mask1;
  if ( !mask1 )
    goto LABEL_18;
  static_fields = v13->static_fields;
  v22.fields.z = 0.0;
  WIDTH_21_9 = static_fields->WIDTH_21_9;
  v16 = (float)static_fields->HEIGHT * 0.5;
  v22.fields.y = (float)((float)(m_YMin + v16) * 0.5) - v16;
  v22.fields.x = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)mask1, v22, 0);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask1;
  if ( !mask1 )
    goto LABEL_18;
  v17 = (float)WIDTH_21_9;
  v23.fields.z = 0.0;
  v23.fields.y = m_YMin + v16;
  v23.fields.x = v17;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)mask1, v23, 0);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask2;
  if ( !mask1 )
    goto LABEL_18;
  v24.fields.z = 0.0;
  v24.fields.y = v16 + (float)((float)(v16 - (float)(m_Height + m_YMin)) * -0.5);
  v24.fields.x = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)mask1, v24, 0);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask2;
  if ( !mask1 )
    goto LABEL_18;
  v25.fields.z = 0.0;
  v25.fields.x = v17;
  v25.fields.y = v16 - (float)(m_Height + m_YMin);
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)mask1, v25, 0);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask3;
  if ( !mask1 )
    goto LABEL_18;
  v26.fields.z = 0.0;
  v18 = v17 * 0.5;
  v19 = m_XMin + (float)(v17 * 0.5);
  v20 = m_YMin + (float)(m_Height * 0.5);
  v26.fields.y = v20;
  v26.fields.x = (float)(v19 * 0.5) - v18;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)mask1, v26, 0);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask3;
  if ( !mask1 )
    goto LABEL_18;
  v27.fields.z = 0.0;
  v27.fields.x = v19;
  v27.fields.y = m_Height;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)mask1, v27, 0);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask4;
  if ( !mask1
    || (v28.fields.z = 0.0,
        v28.fields.y = v20,
        v21 = v18 - (float)(m_Width + m_XMin),
        v28.fields.x = v18 + (float)(v21 * -0.5),
        UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)mask1, v28, 0),
        (mask1 = (UnityEngine_Collider_o *)this->fields.mask4) == 0) )
  {
LABEL_18:
    sub_2213CDC(mask1, v10);
  }
  v29.fields.x = v21;
  v29.fields.y = m_Height;
  v29.fields.z = 0.0;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)mask1, v29, 0);
}


void MaskWithOpening__Start(MaskWithOpening_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1
  UnityEngine_Transform_o *v4; // x19

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_6;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  v4 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_5969AE5 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v4 )
LABEL_6:
    sub_2213CDC(gameObject, v3);
  UnityEngine_Transform__set_localScale(v4, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
}