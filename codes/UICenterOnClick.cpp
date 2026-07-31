void UICenterOnClick___ctor(UICenterOnClick_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UICenterOnClick__OnClick(UICenterOnClick_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  Il2CppObject *v5; // x21
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x19
  UnityEngine_Transform_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v12; // x4
  Il2CppObject *Component_object; // x21
  UnityEngine_Transform_o *cachedTransform; // x22
  float x; // s9
  float y; // s10
  float z; // s8
  float v18; // s9
  float v19; // s10
  UnityEngine_GameObject_o *cachedGameObject; // x0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593CCD5 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_21FFC50(&Method_NGUITools_FindInParents_UICenterOnChild___);
    sub_21FFC50(&Method_NGUITools_FindInParents_UIPanel___);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CCD5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v3);
  v5 = NGUITools__FindInParents_object_(
         gameObject,
         (const MethodInfo_38BD680 *)Method_NGUITools_FindInParents_UICenterOnChild___);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8 = NGUITools__FindInParents_object_(v6, (const MethodInfo_38BD680 *)Method_NGUITools_FindInParents_UIPanel___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0, 0);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    if ( v5 )
    {
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v5, 0) )
      {
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        UICenterOnChild__CenterOn_56009592((UICenterOnChild_o *)v5, transform, 1, 0, v12);
      }
      return;
    }
    goto LABEL_29;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  v9 = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    if ( v8 )
    {
      if ( !HIDWORD(v8[18].klass) )
        return;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)v8,
                           (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
      cachedTransform = UIRect__get_cachedTransform((UIRect_o *)v8, 0);
      v9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( v9 )
      {
        position = UnityEngine_Transform__get_position(v9, 0);
        if ( cachedTransform )
        {
          v22 = UnityEngine_Transform__InverseTransformPoint(cachedTransform, position, 0);
          if ( Component_object )
          {
            x = v22.fields.x;
            y = v22.fields.y;
            z = v22.fields.z;
            if ( UIScrollView__get_canMoveHorizontally((UIScrollView_o *)Component_object, 0) )
            {
              v18 = -x;
            }
            else
            {
              v9 = UIRect__get_cachedTransform((UIRect_o *)v8, 0);
              if ( !v9 )
                goto LABEL_29;
              LODWORD(v18) = (unsigned int)UnityEngine_Transform__get_localPosition(v9, 0);
            }
            if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)Component_object, 0) )
            {
              v19 = -y;
            }
            else
            {
              v9 = UIRect__get_cachedTransform((UIRect_o *)v8, 0);
              if ( !v9 )
                goto LABEL_29;
              localPosition = UnityEngine_Transform__get_localPosition(v9, 0);
              v19 = localPosition.fields.y;
            }
            cachedGameObject = UIRect__get_cachedGameObject((UIRect_o *)v8, 0);
            v24.fields.x = v18;
            v24.fields.z = -z;
            v24.fields.y = v19;
            SpringPanel__Begin(cachedGameObject, v24, 6.0, 0);
            return;
          }
        }
      }
    }
LABEL_29:
    sub_21FFECC(v9, v10);
  }
}