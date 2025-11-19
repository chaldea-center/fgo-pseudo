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
  float x; // s9
  float y; // s10
  float z; // s8
  float v16; // s9
  float v17; // s10
  UnityEngine_GameObject_o *cachedGameObject; // x0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CBA944 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C6BA08(&Method_NGUITools_FindInParents_UICenterOnChild___);
    sub_1C6BA08(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C6BA08(&NGUITools_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBA944 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v4 = NGUITools__FindInParents_object_(
         gameObject,
         (const MethodInfo_31C5E70 *)Method_NGUITools_FindInParents_UICenterOnChild___);
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = NGUITools__FindInParents_object_(v5, (const MethodInfo_31C5E70 *)Method_NGUITools_FindInParents_UIPanel___);
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
        UICenterOnChild__CenterOn_49450812((UICenterOnChild_o *)v4, transform, 1, v10);
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
                           (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
      cachedTransform = UIRect__get_cachedTransform((UIRect_o *)v6, 0);
      v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( v7 )
      {
        position = UnityEngine_Transform__get_position(v7, 0);
        if ( cachedTransform )
        {
          v20 = UnityEngine_Transform__InverseTransformPoint(cachedTransform, position, 0);
          if ( Component_object )
          {
            x = v20.fields.x;
            y = v20.fields.y;
            z = v20.fields.z;
            if ( UIScrollView__get_canMoveHorizontally((UIScrollView_o *)Component_object, 0) )
            {
              v16 = -x;
            }
            else
            {
              v7 = UIRect__get_cachedTransform((UIRect_o *)v6, 0);
              if ( !v7 )
                goto LABEL_29;
              LODWORD(v16) = (unsigned int)UnityEngine_Transform__get_localPosition(v7, 0);
            }
            if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)Component_object, 0) )
            {
              v17 = -y;
            }
            else
            {
              v7 = UIRect__get_cachedTransform((UIRect_o *)v6, 0);
              if ( !v7 )
                goto LABEL_29;
              localPosition = UnityEngine_Transform__get_localPosition(v7, 0);
              v17 = localPosition.fields.y;
            }
            cachedGameObject = UIRect__get_cachedGameObject((UIRect_o *)v6, 0);
            v22.fields.x = v16;
            v22.fields.z = -z;
            v22.fields.y = v17;
            SpringPanel__Begin(cachedGameObject, v22, 6.0, 0);
            return;
          }
        }
      }
    }
LABEL_29:
    sub_1C6BC60(v7, v8);
  }
}