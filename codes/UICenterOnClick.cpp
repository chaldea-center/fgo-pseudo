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
  float v15; // s9
  float y; // s10
  UnityEngine_GameObject_o *cachedGameObject; // x0
  UnityEngine_Vector3_o v18; // 0:kr14_12.12
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974FAC & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_2213A60(&Method_NGUITools_FindInParents_UICenterOnChild___);
    sub_2213A60(&Method_NGUITools_FindInParents_UIPanel___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974FAC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v3);
  v5 = NGUITools__FindInParents_object_(
         gameObject,
         (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UICenterOnChild___);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8 = NGUITools__FindInParents_object_(v6, (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIPanel___);
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
        UICenterOnChild__CenterOn_56214248((UICenterOnChild_o *)v5, transform, 1, 0, v12);
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
                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
      cachedTransform = UIRect__get_cachedTransform((UIRect_o *)v8, 0);
      v9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( v9 )
      {
        position = UnityEngine_Transform__get_position(v9, 0);
        if ( cachedTransform )
        {
          v18 = UnityEngine_Transform__InverseTransformPoint(cachedTransform, position, 0);
          if ( Component_object )
          {
            if ( UIScrollView__get_canMoveHorizontally((UIScrollView_o *)Component_object, 0) )
            {
              v15 = -v18.fields.x;
            }
            else
            {
              v9 = UIRect__get_cachedTransform((UIRect_o *)v8, 0);
              if ( !v9 )
                goto LABEL_29;
              LODWORD(v15) = (unsigned int)UnityEngine_Transform__get_localPosition(v9, 0);
            }
            if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)Component_object, 0) )
            {
              y = -v18.fields.y;
            }
            else
            {
              v9 = UIRect__get_cachedTransform((UIRect_o *)v8, 0);
              if ( !v9 )
                goto LABEL_29;
              y = UnityEngine_Transform__get_localPosition(v9, 0).fields.y;
            }
            cachedGameObject = UIRect__get_cachedGameObject((UIRect_o *)v8, 0);
            v19.fields.x = v15;
            v19.fields.z = -v18.fields.z;
            v19.fields.y = y;
            SpringPanel__Begin(cachedGameObject, v19, 6.0, 0);
            return;
          }
        }
      }
    }
LABEL_29:
    sub_2213CDC(v9, v10);
  }
}