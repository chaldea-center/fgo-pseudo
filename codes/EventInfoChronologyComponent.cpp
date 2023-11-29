void __fastcall EventInfoChronologyComponent___ctor(EventInfoChronologyComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoChronologyComponent__Initialize(
        EventInfoChronologyComponent_o *this,
        UISprite_o *srcSprite,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EventInfoChronologyComponent_o *v6; // x0
  const MethodInfo *v7; // x3

  EventInfoChronologyComponent__SetSprite(this, srcSprite, this->fields.spriteLineW, v3);
  EventInfoChronologyComponent__SetSprite(v6, srcSprite, this->fields.spriteLineH, v7);
}


void __fastcall EventInfoChronologyComponent__Refresh(EventInfoChronologyComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *objHistory; // x0
  srcLineSprite_o *v6; // x20
  int32_t v7; // w21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Transform_o *v10; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Component_o *v12; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  EnableCommonReleaseComponent_o *Component_srcLineSprite; // x23
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Object_o *widget; // x21
  UIWidget_o *v18; // x0
  UnityEngine_BoxCollider_o *collider; // x21
  unsigned int size; // s0
  UnityEngine_BoxCollider_o *v21; // x0
  int mFSM_high; // w22
  float v23; // s8
  UnityEngine_Object_o *spriteLineH; // x21
  UIWidget_o *v25; // x0
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB6FD & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EnableCommonReleaseComponent___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FB6FD = 1;
  }
  objHistory = this->fields.objHistory;
  if ( !objHistory )
    goto LABEL_44;
  v6 = 0LL;
  v7 = 0;
  while ( 1 )
  {
    transform = UnityEngine_GameObject__get_transform(objHistory, 0LL);
    if ( !transform )
      goto LABEL_44;
    if ( v7 >= UnityEngine_Transform__get_childCount(transform, 0LL) )
      break;
    v9 = this->fields.objHistory;
    if ( v9 )
    {
      v10 = UnityEngine_GameObject__get_transform(v9, 0LL);
      if ( v10 )
      {
        Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v10, v7, 0LL);
        if ( Child )
        {
          v12 = Child;
          gameObject = UnityEngine_Component__get_gameObject(Child, 0LL);
          if ( gameObject )
          {
            Component_srcLineSprite = (EnableCommonReleaseComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          gameObject,
                                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EnableCommonReleaseComponent___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
            {
              if ( !Component_srcLineSprite )
                goto LABEL_44;
              EnableCommonReleaseComponent__Refresh(Component_srcLineSprite, 0LL);
            }
            v15 = UnityEngine_Component__get_gameObject(v12, 0LL);
            if ( v15 )
            {
              if ( UnityEngine_GameObject__get_activeSelf(v15, 0LL) )
              {
                v16 = UnityEngine_Component__get_gameObject(v12, 0LL);
                if ( !v16 )
                  goto LABEL_44;
                v6 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                       v16,
                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
              }
              objHistory = this->fields.objHistory;
              ++v7;
              if ( objHistory )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_44;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL) )
  {
    widget = (UnityEngine_Object_o *)this->fields.widget;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(widget, 0LL, 0LL) )
    {
      if ( !v6 )
        goto LABEL_44;
      v18 = this->fields.widget;
      if ( !v18 )
        goto LABEL_44;
      UIWidget__set_height(v18, HIDWORD(v6[1].fields.mFSM) + 7, 0LL);
      collider = this->fields.collider;
      if ( !collider )
        goto LABEL_44;
      size = (unsigned int)UnityEngine_BoxCollider__get_size(this->fields.collider, 0LL);
      v21 = this->fields.collider;
      if ( !v21 )
        goto LABEL_44;
      mFSM_high = HIDWORD(v6[1].fields.mFSM);
      v23 = *(float *)&size;
      v26 = UnityEngine_BoxCollider__get_size(v21, 0LL);
      v26.fields.y = (float)(mFSM_high + 7);
      v26.fields.x = v23;
      UnityEngine_BoxCollider__set_size(collider, v26, 0LL);
    }
    spriteLineH = (UnityEngine_Object_o *)this->fields.spriteLineH;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(spriteLineH, 0LL, 0LL) )
    {
      if ( v6 )
      {
        v25 = (UIWidget_o *)this->fields.spriteLineH;
        if ( v25 )
        {
          UIWidget__set_width(v25, HIDWORD(v6[1].fields.mFSM) + 10, 0LL);
          return;
        }
      }
LABEL_44:
      sub_B170D4();
    }
  }
}


void __fastcall EventInfoChronologyComponent__SetSprite(
        EventInfoChronologyComponent_o *this,
        UISprite_o *src,
        UISprite_o *dest,
        const MethodInfo *method)
{
  if ( !src || !dest )
    sub_B170D4();
  UISprite__set_atlas(dest, src->fields.mAtlas, 0LL);
  UISprite__set_spriteName(dest, src->fields.mSpriteName, 0LL);
}