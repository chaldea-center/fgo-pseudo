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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *objHistory; // x0
  Il2CppObject *v9; // x20
  int32_t v10; // w21
  UnityEngine_Component_o *v11; // x22
  __int64 v12; // x1
  Il2CppObject *Component_object; // x23
  __int64 v14; // x1
  UnityEngine_Object_o *widget; // x21
  UnityEngine_BoxCollider_o *collider; // x21
  unsigned int size; // s0
  int monitor_high; // w22
  float v19; // s8
  UnityEngine_Object_o *spriteLineH; // x21
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B169DA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EnableCommonReleaseComponent___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B169DA = 1;
  }
  objHistory = this->fields.objHistory;
  if ( !objHistory )
    goto LABEL_40;
  v9 = 0LL;
  v10 = 0;
  while ( 1 )
  {
    objHistory = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(objHistory, 0LL);
    if ( !objHistory )
      goto LABEL_40;
    if ( v10 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)objHistory, 0LL) )
      break;
    objHistory = this->fields.objHistory;
    if ( objHistory )
    {
      objHistory = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(objHistory, 0LL);
      if ( objHistory )
      {
        objHistory = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                   (UnityEngine_Transform_o *)objHistory,
                                                   v10,
                                                   0LL);
        if ( objHistory )
        {
          v11 = (UnityEngine_Component_o *)objHistory;
          objHistory = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)objHistory, 0LL);
          if ( objHistory )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 objHistory,
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EnableCommonReleaseComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
            objHistory = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)Component_object,
                                                       0LL,
                                                       0LL);
            if ( ((unsigned __int8)objHistory & 1) != 0 )
            {
              if ( !Component_object )
                goto LABEL_40;
              EnableCommonReleaseComponent__Refresh((EnableCommonReleaseComponent_o *)Component_object, 0LL);
            }
            objHistory = UnityEngine_Component__get_gameObject(v11, 0LL);
            if ( objHistory )
            {
              if ( UnityEngine_GameObject__get_activeSelf(objHistory, 0LL) )
              {
                objHistory = UnityEngine_Component__get_gameObject(v11, 0LL);
                if ( !objHistory )
                  goto LABEL_40;
                v9 = UnityEngine_GameObject__GetComponent_object_(
                       objHistory,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
              }
              objHistory = this->fields.objHistory;
              ++v10;
              if ( objHistory )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_40;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL) )
  {
    widget = (UnityEngine_Object_o *)this->fields.widget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    objHistory = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(widget, 0LL, 0LL);
    if ( ((unsigned __int8)objHistory & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_40;
      objHistory = (UnityEngine_GameObject_o *)this->fields.widget;
      if ( !objHistory )
        goto LABEL_40;
      UIWidget__set_height((UIWidget_o *)objHistory, HIDWORD(v9[10].monitor) + 7, 0LL);
      collider = this->fields.collider;
      if ( !collider )
        goto LABEL_40;
      size = (unsigned int)UnityEngine_BoxCollider__get_size(this->fields.collider, 0LL);
      objHistory = (UnityEngine_GameObject_o *)this->fields.collider;
      if ( !objHistory )
        goto LABEL_40;
      monitor_high = HIDWORD(v9[10].monitor);
      v19 = *(float *)&size;
      v21 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)objHistory, 0LL);
      v21.fields.y = (float)(monitor_high + 7);
      v21.fields.x = v19;
      UnityEngine_BoxCollider__set_size(collider, v21, 0LL);
    }
    spriteLineH = (UnityEngine_Object_o *)this->fields.spriteLineH;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    objHistory = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(spriteLineH, 0LL, 0LL);
    if ( ((unsigned __int8)objHistory & 1) != 0 )
    {
      if ( v9 )
      {
        objHistory = (UnityEngine_GameObject_o *)this->fields.spriteLineH;
        if ( objHistory )
        {
          UIWidget__set_width((UIWidget_o *)objHistory, HIDWORD(v9[10].monitor) + 10, 0LL);
          return;
        }
      }
LABEL_40:
      sub_1BCAA3C(objHistory, method);
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
    sub_1BCAA3C(this, src);
  UISprite__set_atlas(dest, src->fields.mAtlas, 0LL);
  UISprite__set_spriteName(dest, src->fields.mSpriteName, 0LL);
}