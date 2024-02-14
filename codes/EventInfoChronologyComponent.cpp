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
  UnityEngine_Component_o *v8; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x23
  UnityEngine_Object_o *widget; // x21
  UnityEngine_BoxCollider_o *collider; // x21
  unsigned int size; // s0
  int mFSM_high; // w22
  float v14; // s8
  UnityEngine_Object_o *spriteLineH; // x21
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4216229 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EnableCommonReleaseComponent___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_4216229 = 1;
  }
  objHistory = this->fields.objHistory;
  if ( !objHistory )
    goto LABEL_44;
  v6 = 0LL;
  v7 = 0;
  while ( 1 )
  {
    objHistory = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(objHistory, 0LL);
    if ( !objHistory )
      goto LABEL_44;
    if ( v7 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)objHistory, 0LL) )
      break;
    objHistory = this->fields.objHistory;
    if ( objHistory )
    {
      objHistory = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(objHistory, 0LL);
      if ( objHistory )
      {
        objHistory = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                   (UnityEngine_Transform_o *)objHistory,
                                                   v7,
                                                   0LL);
        if ( objHistory )
        {
          v8 = (UnityEngine_Component_o *)objHistory;
          objHistory = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)objHistory, 0LL);
          if ( objHistory )
          {
            Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                objHistory,
                                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EnableCommonReleaseComponent___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            objHistory = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                       Component_srcLineSprite,
                                                       0LL,
                                                       0LL);
            if ( ((unsigned __int8)objHistory & 1) != 0 )
            {
              if ( !Component_srcLineSprite )
                goto LABEL_44;
              EnableCommonReleaseComponent__Refresh((EnableCommonReleaseComponent_o *)Component_srcLineSprite, 0LL);
            }
            objHistory = UnityEngine_Component__get_gameObject(v8, 0LL);
            if ( objHistory )
            {
              if ( UnityEngine_GameObject__get_activeSelf(objHistory, 0LL) )
              {
                objHistory = UnityEngine_Component__get_gameObject(v8, 0LL);
                if ( !objHistory )
                  goto LABEL_44;
                v6 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                       objHistory,
                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
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
    objHistory = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(widget, 0LL, 0LL);
    if ( ((unsigned __int8)objHistory & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_44;
      objHistory = (UnityEngine_GameObject_o *)this->fields.widget;
      if ( !objHistory )
        goto LABEL_44;
      UIWidget__set_height((UIWidget_o *)objHistory, HIDWORD(v6[1].fields.mFSM) + 7, 0LL);
      collider = this->fields.collider;
      if ( !collider )
        goto LABEL_44;
      size = (unsigned int)UnityEngine_BoxCollider__get_size(this->fields.collider, 0LL);
      objHistory = (UnityEngine_GameObject_o *)this->fields.collider;
      if ( !objHistory )
        goto LABEL_44;
      mFSM_high = HIDWORD(v6[1].fields.mFSM);
      v14 = *(float *)&size;
      v16 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)objHistory, 0LL);
      v16.fields.y = (float)(mFSM_high + 7);
      v16.fields.x = v14;
      UnityEngine_BoxCollider__set_size(collider, v16, 0LL);
    }
    spriteLineH = (UnityEngine_Object_o *)this->fields.spriteLineH;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    objHistory = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(spriteLineH, 0LL, 0LL);
    if ( ((unsigned __int8)objHistory & 1) != 0 )
    {
      if ( v6 )
      {
        objHistory = (UnityEngine_GameObject_o *)this->fields.spriteLineH;
        if ( objHistory )
        {
          UIWidget__set_width((UIWidget_o *)objHistory, HIDWORD(v6[1].fields.mFSM) + 10, 0LL);
          return;
        }
      }
LABEL_44:
      sub_B0D97C(objHistory);
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
    sub_B0D97C(this);
  UISprite__set_atlas(dest, src->fields.mAtlas, 0LL);
  UISprite__set_spriteName(dest, src->fields.mSpriteName, 0LL);
}