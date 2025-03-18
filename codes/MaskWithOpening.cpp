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

  if ( (byte_4C1E552 & 1) == 0 )
  {
    sub_1C3B764(&ManagerConfig_TypeInfo, method);
    byte_4C1E552 = 1;
  }
  mask1 = (UnityEngine_Collider_o *)this->fields.mask1;
  if ( !mask1 )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled(mask1, 1, 0LL);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask1;
  if ( !mask1 )
    goto LABEL_12;
  v6.fields.x = 0.0;
  v6.fields.y = 0.0;
  v6.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)mask1, v6, 0LL);
  mask1 = (UnityEngine_Collider_o *)ManagerConfig_TypeInfo;
  v4 = this->fields.mask1;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    mask1 = (UnityEngine_Collider_o *)ManagerConfig_TypeInfo;
  }
  if ( !v4 )
    goto LABEL_12;
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
LABEL_12:
    sub_1C3B9C0(mask1, method);
  }
  UnityEngine_Collider__set_enabled(mask1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaskWithOpening__SetDepth(MaskWithOpening_o *this, int32_t depth, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_4C1E550 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&depth);
    byte_4C1E550 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !Component_object )
    sub_1C3B9C0(0LL, v6);
  UIPanel__set_depth((UIPanel_o *)Component_object, depth, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaskWithOpening__SetOpening(
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
  ManagerConfig_c *v12; // x8
  struct ManagerConfig_StaticFields *static_fields; // x8
  int WIDTH_21_9; // s12
  float v15; // s14
  float v16; // s12
  float v17; // s13
  float v18; // s12
  float v19; // s11
  float v20; // s9
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  m_Height = hole.fields.m_Height;
  m_Width = hole.fields.m_Width;
  m_YMin = hole.fields.m_YMin;
  m_XMin = hole.fields.m_XMin;
  if ( (byte_4C1E551 & 1) == 0 )
  {
    sub_1C3B764(&ManagerConfig_TypeInfo, *(_QWORD *)&depth);
    byte_4C1E551 = 1;
  }
  MaskWithOpening__SetDepth(this, depth, method);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask1;
  if ( !mask1 )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled(mask1, 1, 0LL);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask2;
  if ( !mask1 )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled(mask1, 1, 0LL);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask3;
  if ( !mask1 )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled(mask1, 1, 0LL);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask4;
  if ( !mask1 )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled(mask1, 1, 0LL);
  v12 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v12 = ManagerConfig_TypeInfo;
  }
  mask1 = (UnityEngine_Collider_o *)this->fields.mask1;
  if ( !mask1 )
    goto LABEL_18;
  static_fields = v12->static_fields;
  v21.fields.z = 0.0;
  WIDTH_21_9 = static_fields->WIDTH_21_9;
  v15 = (float)static_fields->HEIGHT * 0.5;
  v21.fields.y = (float)((float)(m_YMin + v15) * 0.5) - v15;
  v21.fields.x = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)mask1, v21, 0LL);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask1;
  if ( !mask1 )
    goto LABEL_18;
  v16 = (float)WIDTH_21_9;
  v22.fields.z = 0.0;
  v22.fields.x = v16;
  v22.fields.y = m_YMin + v15;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)mask1, v22, 0LL);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask2;
  if ( !mask1 )
    goto LABEL_18;
  v23.fields.y = v15 + (float)((float)(v15 - (float)(m_Height + m_YMin)) * -0.5);
  v23.fields.x = 0.0;
  v23.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)mask1, v23, 0LL);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask2;
  if ( !mask1 )
    goto LABEL_18;
  v24.fields.z = 0.0;
  v24.fields.x = v16;
  v24.fields.y = v15 - (float)(m_Height + m_YMin);
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)mask1, v24, 0LL);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask3;
  if ( !mask1 )
    goto LABEL_18;
  v17 = v16 * 0.5;
  v18 = m_XMin + (float)(v16 * 0.5);
  v19 = m_YMin + (float)(m_Height * 0.5);
  v25.fields.x = (float)(v18 * 0.5) - v17;
  v25.fields.z = 0.0;
  v25.fields.y = v19;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)mask1, v25, 0LL);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask3;
  if ( !mask1 )
    goto LABEL_18;
  v26.fields.z = 0.0;
  v26.fields.x = v18;
  v26.fields.y = m_Height;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)mask1, v26, 0LL);
  mask1 = (UnityEngine_Collider_o *)this->fields.mask4;
  if ( !mask1
    || (v20 = v17 - (float)(m_Width + m_XMin),
        v27.fields.x = v17 + (float)(v20 * -0.5),
        v27.fields.z = 0.0,
        v27.fields.y = v19,
        UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)mask1, v27, 0LL),
        (mask1 = (UnityEngine_Collider_o *)this->fields.mask4) == 0LL) )
  {
LABEL_18:
    sub_1C3B9C0(mask1, v10);
  }
  v28.fields.x = v20;
  v28.fields.y = m_Height;
  v28.fields.z = 0.0;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)mask1, v28, 0LL);
}


void __fastcall MaskWithOpening__Start(MaskWithOpening_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1
  UnityEngine_Transform_o *v4; // x19

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_6;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v4 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4C1C516 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v3);
    byte_4C1C516 = 1;
  }
  if ( !v4 )
LABEL_6:
    sub_1C3B9C0(gameObject, v3);
  UnityEngine_Transform__set_localScale(v4, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
}