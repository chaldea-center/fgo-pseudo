void UICenterOnClick___ctor(UICenterOnClick_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UICenterOnClick__OnClick(UICenterOnClick_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x19
  Il2CppObject *v4; // x21
  UnityEngine_GameObject_o *v5; // x0
  Il2CppObject *v6; // x19
  UnityEngine_Transform_o *v7; // x0
  __int64 v8; // x1
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v10; // x3
  Il2CppObject *Component_object; // x21
  UnityEngine_Transform_o *cachedTransform; // x22
  float v13; // s9
  float y; // s10
  UnityEngine_GameObject_o *cachedGameObject; // x0
  UnityEngine_Vector3_o v16; // 0:kr14_12.12
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D35071 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C93AD4(&Method_NGUITools_FindInParents_UICenterOnChild___);
    sub_1C93AD4(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35071 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v4 = NGUITools__FindInParents_object_(
         gameObject,
         (const MethodInfo_322EDC8 *)Method_NGUITools_FindInParents_UICenterOnChild___);
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = NGUITools__FindInParents_object_(v5, (const MethodInfo_322EDC8 *)Method_NGUITools_FindInParents_UIPanel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v4, 0, 0);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    if ( v4 )
    {
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v4, 0) )
      {
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        UICenterOnChild__CenterOn_49871820((UICenterOnChild_o *)v4, transform, 1, v10);
      }
      return;
    }
    goto LABEL_29;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    if ( v6 )
    {
      if ( !HIDWORD(v6[18].klass) )
        return;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)v6,
                           (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
      cachedTransform = UIRect__get_cachedTransform((UIRect_o *)v6, 0);
      v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( v7 )
      {
        position = UnityEngine_Transform__get_position(v7, 0);
        if ( cachedTransform )
        {
          v16 = UnityEngine_Transform__InverseTransformPoint(cachedTransform, position, 0);
          if ( Component_object )
          {
            if ( UIScrollView__get_canMoveHorizontally((UIScrollView_o *)Component_object, 0) )
            {
              v13 = -v16.fields.x;
            }
            else
            {
              v7 = UIRect__get_cachedTransform((UIRect_o *)v6, 0);
              if ( !v7 )
                goto LABEL_29;
              LODWORD(v13) = (unsigned int)UnityEngine_Transform__get_localPosition(v7, 0);
            }
            if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)Component_object, 0) )
            {
              y = -v16.fields.y;
            }
            else
            {
              v7 = UIRect__get_cachedTransform((UIRect_o *)v6, 0);
              if ( !v7 )
                goto LABEL_29;
              y = UnityEngine_Transform__get_localPosition(v7, 0).fields.y;
            }
            cachedGameObject = UIRect__get_cachedGameObject((UIRect_o *)v6, 0);
            v17.fields.x = v13;
            v17.fields.z = -v16.fields.z;
            v17.fields.y = y;
            SpringPanel__Begin(cachedGameObject, v17, 6.0, 0);
            return;
          }
        }
      }
    }
LABEL_29:
    sub_1C93D2C(v7, v8);
  }
}