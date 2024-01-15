void __fastcall NotificationDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct NotificationDialog_StaticFields *static_fields; // x9
  NotificationDialog_c *v3; // x8
  struct NotificationDialog_StaticFields *v4; // x9
  struct NotificationDialog_StaticFields *v5; // x9
  struct NotificationDialog_StaticFields *v6; // x9
  struct NotificationDialog_StaticFields *v7; // x9
  struct NotificationDialog_StaticFields *v8; // x9

  if ( (byte_40F9370 & 1) == 0 )
  {
    sub_B16FFC(&NotificationDialog_TypeInfo, v1);
    byte_40F9370 = 1;
  }
  NotificationDialog_TypeInfo->static_fields->BANNER_RETRY_MAX = 3;
  static_fields = NotificationDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TITLE_BASE_POS.fields.x = 0x4334000000000000LL;
  static_fields->TITLE_BASE_POS.fields.z = 0.0;
  v3 = NotificationDialog_TypeInfo;
  v4 = NotificationDialog_TypeInfo->static_fields;
  *(_QWORD *)&v4->MESSAGE_BASE_POS.fields.x = 0x416B333300000000LL;
  v4->MESSAGE_BASE_POS.fields.z = 0.0;
  v5 = v3->static_fields;
  *(_QWORD *)&v5->MESSAGE_LINE_POS.fields.x = 0x40A0000000000000LL;
  v5->MESSAGE_LINE_POS.fields.z = 0.0;
  v3->static_fields->MESSAGE_BASE_SIZE_X = 700;
  v3->static_fields->MESSAGE_BASE_SIZE_Y = 295;
  v3->static_fields->MESSAGE_LINE_SIZE_Y = 265;
  v6 = v3->static_fields;
  v6->IMAGE_BASE_POS.fields.x = 0.0;
  *(_QWORD *)&v6->IMAGE_BASE_POS.fields.y = 0LL;
  v7 = v3->static_fields;
  *(_QWORD *)&v7->BUTTON_BASE_POS.fields.x = 0xC322000000000000LL;
  v7->BUTTON_BASE_POS.fields.z = 0.0;
  v8 = v3->static_fields;
  *(_QWORD *)&v8->BUTTON_TEXT_POS.fields.x = 0xBF80000000000000LL;
  v8->BUTTON_TEXT_POS.fields.z = 0.0;
  v3->static_fields->BUTTON_BASE_SIZE_X = 218;
  v3->static_fields->BUTTON_BASE_SIZE_Y = 56;
}


void __fastcall NotificationDialog___ctor(NotificationDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40F936F & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F936F = 1;
  }
  this->fields.MESSAGE_FONT_SIZE = 30;
  this->fields.isInitPanelDepth = 1;
  this->fields.onClickOkSeKind = 1;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall NotificationDialog__Close(NotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NotificationDialog__Close_23731908(this, 0LL, v2);
}


void __fastcall NotificationDialog__Close_23731908(
        NotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40F936B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_NotificationDialog_EndClose__, v10);
    byte_40F936B = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_NotificationDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall NotificationDialog__EndClose(NotificationDialog_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeEndFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeEndFunc; // t1

  NotificationDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (BattleServantConfConponent_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_B16F98(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall NotificationDialog__EndOpen(NotificationDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall NotificationDialog__Init(NotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *messageLabel; // x0
  UnityEngine_Object_o *v16; // x20
  UILabel_o *v17; // x0
  UnityEngine_Object_o *v18; // x20
  UILabel_o *v19; // x0
  UnityEngine_Object_o *okBtnLabel; // x20
  UILabel_o *v21; // x0
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Object_o *lnkTexture; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  struct LinkableTexture_o *v34; // x8
  struct UnityEngine_BoxCollider_o *mCollider; // x0
  UnityEngine_Object_o *v36; // x20
  struct LinkableTexture_o *v37; // x8
  struct UnityEngine_BoxCollider_o *v38; // x0
  struct System_Collections_Generic_List_LinkableSprite__o **p_additionalSprites; // x20
  System_Collections_Generic_List_XWeaponTrail_Element__o *additionalSprites; // x21
  __int64 v41; // x23
  int size; // w8
  UnityEngine_Component_o *v43; // x0
  UnityEngine_Object_o *gameObject; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct System_Collections_Generic_List_LinkableTexture__o **p_additionalTextures; // x20
  System_Collections_Generic_List_XWeaponTrail_Element__o *additionalTextures; // x21
  __int64 v58; // x23
  int v59; // w8
  unsigned int v60; // w24
  __int64 v61; // x8
  __int64 v62; // x0
  UnityEngine_Object_o *v63; // x21
  struct System_Collections_Generic_List_LinkableTexture__o *v64; // x21
  UnityEngine_Component_o *v65; // x0
  UnityEngine_Object_o *v66; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v67; // x21
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  UnityEngine_GameObject_o *v74; // x0

  if ( (byte_40F9364 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_LinkableSprite__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_LinkableTexture__Clear__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_LinkableTexture___ctor__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_LinkableSprite___ctor__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_LinkableSprite__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_LinkableTexture__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_LinkableTexture__get_Item__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_LinkableSprite__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_LinkableSprite__TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_List_LinkableTexture__TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_1/*""*/, v13);
    byte_40F9364 = 1;
  }
  if ( !this->fields.refuseInit )
  {
    titleLabel = this->fields.titleLabel;
    if ( !titleLabel )
      goto LABEL_71;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_71;
    UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v16 = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
    {
      v17 = this->fields.titleLabel;
      if ( !v17 )
        goto LABEL_71;
      UILabel__set_text(v17, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    v18 = (UnityEngine_Object_o *)this->fields.messageLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
    {
      v19 = this->fields.messageLabel;
      if ( !v19 )
        goto LABEL_71;
      UILabel__set_text(v19, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
    {
      v21 = this->fields.okBtnLabel;
      if ( !v21 )
        goto LABEL_71;
      UILabel__set_text(v21, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    mBannerWWW = this->fields.mBannerWWW;
    if ( mBannerWWW )
    {
      UnityEngine_Networking_UnityWebRequest__Dispose(mBannerWWW, 0LL);
      this->fields.mBannerWWW = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.mBannerWWW, 0LL, v23, v24, v25, v26, v27, v28);
    }
    lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL) )
    {
      v34 = this->fields.lnkTexture;
      if ( !v34 )
        goto LABEL_71;
      mCollider = v34->fields.mCollider;
      if ( !mCollider )
        goto LABEL_71;
      v36 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UnityEngine_BoxCollider_o *, void *))mCollider->klass[1].vtable._3_ToString.method)(
                                      mCollider,
                                      mCollider->klass[2]._1.image);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v36, 0LL);
      v37 = this->fields.lnkTexture;
      if ( !v37 )
        goto LABEL_71;
      v38 = v37->fields.mCollider;
      if ( !v38 )
        goto LABEL_71;
      ((void (__fastcall *)(struct UnityEngine_BoxCollider_o *, _QWORD, const char *))v38->klass[2]._1.gc_desc)(
        v38,
        0LL,
        v38->klass[2]._1.name);
    }
    p_additionalSprites = &this->fields.additionalSprites;
    additionalSprites = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.additionalSprites;
    if ( additionalSprites )
    {
      v41 = 0LL;
      while ( 1 )
      {
        size = additionalSprites->fields._size;
        if ( (int)v41 >= size )
          break;
        if ( size <= (unsigned int)v41 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v43 = (UnityEngine_Component_o *)additionalSprites->fields._items->m_Items[v41];
        if ( v43 )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v43, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
          additionalSprites = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*p_additionalSprites;
          ++v41;
          if ( *p_additionalSprites )
            continue;
        }
        goto LABEL_71;
      }
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        additionalSprites,
        (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_LinkableSprite__Clear__);
    }
    else
    {
      v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_LinkableSprite__TypeInfo, v30, v31, v32, v33);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v49,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_LinkableSprite___ctor__);
      *p_additionalSprites = (struct System_Collections_Generic_List_LinkableSprite__o *)v49;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.additionalSprites,
        (System_Int32_array **)v49,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
    }
    p_additionalTextures = &this->fields.additionalTextures;
    additionalTextures = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.additionalTextures;
    if ( additionalTextures )
    {
      v58 = 4LL;
      while ( 1 )
      {
        v59 = additionalTextures->fields._size;
        v60 = v58 - 4;
        if ( (int)v58 - 4 >= v59 )
          break;
        if ( v59 <= v60 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v61 = *((_QWORD *)&additionalTextures->fields._items->obj.klass + v58);
        if ( v61 )
        {
          v62 = *(_QWORD *)(v61 + 40);
          if ( v62 )
          {
            v63 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v62 + 728LL))(
                                            v62,
                                            *(_QWORD *)(*(_QWORD *)v62 + 736LL));
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_34809464(v63, 0LL);
            v64 = *p_additionalTextures;
            if ( *p_additionalTextures )
            {
              if ( v64->fields._size <= v60 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              v65 = (UnityEngine_Component_o *)*((_QWORD *)&v64->fields._items->obj.klass + v58);
              if ( v65 )
              {
                v66 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v65, 0LL);
                UnityEngine_Object__Destroy_34809464(v66, 0LL);
                additionalTextures = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*p_additionalTextures;
                ++v58;
                if ( *p_additionalTextures )
                  continue;
              }
            }
          }
        }
        goto LABEL_71;
      }
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        additionalTextures,
        (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_LinkableTexture__Clear__);
    }
    else
    {
      v67 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_LinkableTexture__TypeInfo, v45, v46, v47, v48);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v67,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_LinkableTexture___ctor__);
      *p_additionalTextures = (struct System_Collections_Generic_List_LinkableTexture__o *)v67;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.additionalTextures,
        (System_Int32_array **)v67,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
    }
    v74 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( v74 )
    {
      UnityEngine_GameObject__SetActive(v74, 0, 0LL);
      BaseDialog__Init((BaseDialog_o *)this, 0LL);
      return;
    }
LABEL_71:
    sub_B170D4();
  }
}


void __fastcall NotificationDialog__LoadBanners(
        NotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1
  System_Collections_IEnumerator_o *started; // x1

  this->fields.mAfterLoad = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mAfterLoad,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.mLoadingIdx = 0;
  started = NotificationDialog__StartDownloadBanner(this, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


void __fastcall NotificationDialog__LoadNext(NotificationDialog_o *this, const MethodInfo *method)
{
  struct System_Object_array *banners; // x9
  int32_t v3; // w8
  System_Collections_IEnumerator_o *started; // x1

  banners = this->fields.banners;
  v3 = this->fields.mLoadingIdx + 1;
  this->fields.mLoadingIdx = v3;
  if ( !banners )
    sub_B170D4();
  if ( v3 >= (signed int)banners->max_length )
  {
    ActionExtensions__Call(this->fields.mAfterLoad, 0LL);
  }
  else
  {
    started = NotificationDialog__StartDownloadBanner(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
}


void __fastcall NotificationDialog__OnClickOk(NotificationDialog_o *this, const MethodInfo *method)
{
  int32_t onClickOkSeKind; // w20
  NotificationDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_40F936C & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F936C = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    onClickOkSeKind = this->fields.onClickOkSeKind;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(onClickOkSeKind, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      NotificationDialog_ClickDelegate__Invoke(clickFunc, 1, 0LL);
  }
}


void __fastcall NotificationDialog__Open(
        NotificationDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        NotificationDialog_ClickDelegate_o *func,
        int32_t panelDepth,
        int32_t maxLine,
        int32_t titleSize,
        bool isLineDraw,
        bool canMaskTouchClose,
        int32_t messageFontSize,
        int32_t onClickOkSeKind,
        System_Nullable_float__o titlePosY,
        System_Nullable_float__o messagePosY,
        int32_t spacingY,
        System_Nullable_int__o messageWidgetSizeY,
        bool adjustText,
        System_Nullable_int__o buttonWidgetSizeX,
        System_Nullable_int__o buttonWidgetSizeY,
        System_Nullable_float__o buttonPosY,
        const MethodInfo *method)
{
  System_Nullable_float__o v20; // x20
  System_Nullable_int__o v21; // x26
  System_Nullable_int__o v22; // x12
  bool v23; // w9
  System_Nullable_int__o v24; // x23
  int32_t v25; // w14
  System_Nullable_float__o v26; // x25
  int32_t v27; // w16
  int32_t v28; // w17
  __int64 v30; // x1
  __int64 v31; // x1
  float value; // s8
  NotificationDialog_c *v33; // x0
  int32_t v34; // w20
  NotificationDialog_ClickDelegate_o *v35; // x22
  System_String_o *v36; // x24
  bool v37; // w27
  int32_t v38; // w26
  float y; // s1
  NotificationDialog_c *v40; // x0
  int32_t v41; // w20
  NotificationDialog_ClickDelegate_o *v42; // x22
  System_String_o *v43; // x24
  bool v44; // w27
  System_Nullable_int__o v45; // x21
  int32_t v46; // w26
  System_String_o *v47; // [xsp+10h] [xbp-90h]
  int32_t v48; // [xsp+10h] [xbp-90h]
  int32_t v49; // [xsp+10h] [xbp-90h]
  NotificationDialog_ClickDelegate_o *v50; // [xsp+18h] [xbp-88h]
  int32_t v51; // [xsp+18h] [xbp-88h]
  int32_t v52; // [xsp+18h] [xbp-88h]
  int32_t v53; // [xsp+20h] [xbp-80h]
  System_Nullable_int__o v54; // [xsp+20h] [xbp-80h]
  System_Nullable_int__o v55; // [xsp+20h] [xbp-80h]
  System_Nullable_float__o v56; // [xsp+28h] [xbp-78h]
  System_String_o *titlea; // [xsp+30h] [xbp-70h]
  System_String_o *titleb; // [xsp+30h] [xbp-70h]
  System_String_o *titlec; // [xsp+30h] [xbp-70h]
  bool v60; // [xsp+3Ch] [xbp-64h]
  bool v61; // [xsp+3Ch] [xbp-64h]
  bool v62; // [xsp+3Ch] [xbp-64h]
  int32_t v63; // [xsp+48h] [xbp-58h]
  int32_t v64; // [xsp+48h] [xbp-58h]
  int32_t v65; // [xsp+48h] [xbp-58h]
  int32_t v66; // [xsp+4Ch] [xbp-54h]
  int32_t v67; // [xsp+4Ch] [xbp-54h]
  int32_t v68; // [xsp+4Ch] [xbp-54h]

  v21 = buttonWidgetSizeY;
  v20 = buttonPosY;
  v22 = buttonWidgetSizeX;
  v23 = adjustText;
  v24 = messageWidgetSizeY;
  v25 = spacingY;
  v26 = titlePosY;
  v27 = onClickOkSeKind;
  v28 = messageFontSize;
  if ( (byte_40F9365 & 1) == 0 )
  {
    v63 = panelDepth;
    v66 = titleSize;
    v53 = maxLine;
    v47 = message;
    v50 = func;
    v60 = isLineDraw;
    titlea = title;
    sub_B16FFC(&NotificationDialog_TypeInfo, title);
    sub_B16FFC(&Method_System_Nullable_float__GetValueOrDefault__, v30);
    sub_B16FFC(&Method_System_Nullable_float__get_HasValue__, v31);
    v22 = buttonWidgetSizeX;
    v20 = buttonPosY;
    title = titlea;
    v23 = adjustText;
    message = v47;
    func = v50;
    isLineDraw = v60;
    panelDepth = v63;
    titleSize = v66;
    maxLine = v53;
    v28 = messageFontSize;
    v27 = onClickOkSeKind;
    v26 = titlePosY;
    v25 = spacingY;
    v24 = messageWidgetSizeY;
    byte_40F9365 = 1;
  }
  if ( (*(_QWORD *)&messagePosY & 0xFF00000000LL) != 0 )
  {
    value = messagePosY.fields.value;
  }
  else
  {
    v33 = NotificationDialog_TypeInfo;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      v64 = panelDepth;
      v67 = titleSize;
      v56 = v20;
      titleb = title;
      v34 = maxLine;
      v35 = func;
      v61 = isLineDraw;
      v36 = message;
      v37 = v23;
      v54 = v22;
      v51 = v25;
      v48 = v27;
      v38 = v28;
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v27 = v48;
      v25 = v51;
      title = titleb;
      isLineDraw = v61;
      panelDepth = v64;
      titleSize = v67;
      maxLine = v34;
      v22 = v54;
      v20 = v56;
      v33 = NotificationDialog_TypeInfo;
      v28 = v38;
      v21 = buttonWidgetSizeY;
      v23 = v37;
      message = v36;
      func = v35;
    }
    value = v33->static_fields->MESSAGE_BASE_POS.fields.y;
  }
  if ( (*(_QWORD *)&v20 & 0xFF00000000LL) != 0 )
  {
    y = v20.fields.value;
  }
  else
  {
    v40 = NotificationDialog_TypeInfo;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      v65 = panelDepth;
      v68 = titleSize;
      v41 = maxLine;
      v42 = func;
      v62 = isLineDraw;
      v43 = message;
      titlec = title;
      v44 = v23;
      v45 = v21;
      v55 = v22;
      v52 = v25;
      v49 = v27;
      v46 = v28;
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v27 = v49;
      v25 = v52;
      v22 = v55;
      title = titlec;
      isLineDraw = v62;
      panelDepth = v65;
      titleSize = v68;
      v40 = NotificationDialog_TypeInfo;
      v28 = v46;
      v21 = v45;
      v23 = v44;
      message = v43;
      func = v42;
      maxLine = v41;
    }
    y = v40->static_fields->BUTTON_BASE_POS.fields.y;
  }
  NotificationDialog__OpenDialog(
    this,
    title,
    message,
    func,
    panelDepth,
    maxLine,
    titleSize,
    isLineDraw,
    canMaskTouchClose,
    value,
    y,
    v28,
    v27,
    v26,
    v25,
    v24,
    v23,
    v22,
    v21,
    *(const MethodInfo **)&buttonWidgetSizeY);
}


void __fastcall NotificationDialog__OpenDialog(
        NotificationDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        NotificationDialog_ClickDelegate_o *func,
        int32_t panelDepth,
        int32_t maxLine,
        int32_t titleSize,
        bool isLineDraw,
        bool canMaskTouchClose,
        float messagePosY,
        float buttonPosY,
        int32_t messageFontSize,
        int32_t onClickOkSeKind,
        System_Nullable_float__o titlePosY,
        int32_t spacingY,
        System_Nullable_int__o messageWidgetSizeY,
        bool adjustText,
        System_Nullable_int__o buttonWidgetSizeX,
        System_Nullable_int__o buttonWidgetSizeY,
        const MethodInfo *method)
{
  int32_t MESSAGE_BASE_SIZE_Y; // w28
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  UIPanel_o *TargetPanel; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v49; // x23
  UnityEngine_Object_o *titleLabel; // x26
  UILabel_o *v51; // x0
  UILabel_o *v52; // x0
  System_String_o *v53; // x1
  NotificationDialog_c *v54; // x0
  float *p_BANNER_RETRY_MAX; // x8
  float v56; // s11
  float v57; // s10
  float y; // s12
  UnityEngine_Component_o *v59; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  NotificationDialog_c *v61; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  float x; // s10
  float z; // s11
  UnityEngine_Object_o *lineSprite; // x20
  UnityEngine_Component_o *v66; // x0
  UnityEngine_GameObject_o *v67; // x0
  NotificationDialog_c *v68; // x0
  struct NotificationDialog_StaticFields *v69; // x8
  UnityEngine_Object_o *messageLabel; // x20
  UILabel_o *v71; // x0
  UIWidget_o *v72; // x20
  UILabel_o *v73; // x0
  UILabel_o *v74; // x0
  int32_t MESSAGE_FONT_SIZE; // w1
  struct UILabel_o *v76; // x0
  System_String_o *v77; // x1
  UnityEngine_Component_o *v78; // x0
  UnityEngine_GameObject_o *v79; // x0
  UnityEngine_Object_o *lnkSprite; // x20
  UnityEngine_Component_o *v81; // x0
  UnityEngine_GameObject_o *v82; // x0
  UnityEngine_Object_o *lnkTexture; // x20
  UnityEngine_Component_o *v84; // x0
  UnityEngine_GameObject_o *v85; // x0
  UnityEngine_Object_o *okBtnLabel; // x20
  NotificationDialog_c *v87; // x0
  struct NotificationDialog_StaticFields *v88; // x8
  UILabel_o *v89; // x20
  float v90; // s10
  float v91; // s9
  float v92; // s13
  float v93; // s11
  float v94; // s12
  System_String_o *v95; // x0
  UnityEngine_Component_o *v96; // x0
  UnityEngine_GameObject_o *v97; // x0
  UnityEngine_Component_o *v98; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v101; // x0
  UnityEngine_Component_o *v102; // x0
  UnityEngine_Transform_o *v103; // x0
  UnityEngine_Component_o *v104; // x0
  UnityEngine_GameObject_o *v105; // x0
  UnityEngine_GameObject_o *v106; // x20
  UIWidget_o *Component_srcLineSprite; // x21
  UnityEngine_BoxCollider_o *v108; // x20
  int BUTTON_BASE_SIZE_X; // w22
  NotificationDialog_c *v110; // x0
  NotificationDialog_c *v111; // x0
  int32_t keepPanelDepth; // w1
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x4
  System_Action_o *v117; // x19
  int value; // [xsp+8h] [xbp-A8h]
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v122; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v123; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v124; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  value = buttonWidgetSizeY.fields.value;
  MESSAGE_BASE_SIZE_Y = messageWidgetSizeY.fields.value;
  if ( (byte_40F9366 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, title);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v29);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v30);
    sub_B16FFC(&LocalizationManager_TypeInfo, v31);
    sub_B16FFC(&Method_NotificationDialog_EndOpen__, v32);
    sub_B16FFC(&NotificationDialog_TypeInfo, v33);
    sub_B16FFC(&Method_System_Nullable_int__GetValueOrDefault__, v34);
    sub_B16FFC(&Method_System_Nullable_float__GetValueOrDefault__, v35);
    sub_B16FFC(&Method_System_Nullable_int__get_HasValue__, v36);
    sub_B16FFC(&Method_System_Nullable_float__get_HasValue__, v37);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v38);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v39);
    sub_B16FFC(&StringLiteral_1/*""*/, v40);
    byte_40F9366 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v49 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSeKind;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v49, 0LL, 0LL) )
    {
      if ( !v49 )
        goto LABEL_140;
      this->fields.keepPanelDepth = v49->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v51 = this->fields.titleLabel;
    if ( titleSize <= 0 )
      titleSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !v51 )
      goto LABEL_140;
    UILabel__set_fontSize(v51, titleSize, 0LL);
    v52 = this->fields.titleLabel;
    if ( !v52 )
      goto LABEL_140;
    if ( title )
      v53 = title;
    else
      v53 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v52, v53, 0LL);
    v54 = NotificationDialog_TypeInfo;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v54 = NotificationDialog_TypeInfo;
    }
    p_BANNER_RETRY_MAX = (float *)&v54->static_fields->BANNER_RETRY_MAX;
    v56 = p_BANNER_RETRY_MAX[1];
    v57 = p_BANNER_RETRY_MAX[3];
    if ( (*(_QWORD *)&titlePosY & 0xFF00000000LL) != 0 )
    {
      y = titlePosY.fields.value;
    }
    else
    {
      y = p_BANNER_RETRY_MAX[2];
      if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v54);
        y = NotificationDialog_TypeInfo->static_fields->TITLE_BASE_POS.fields.y;
      }
    }
    v59 = (UnityEngine_Component_o *)this->fields.titleLabel;
    if ( !v59 )
      goto LABEL_140;
    gameObject = UnityEngine_Component__get_gameObject(v59, 0LL);
    v121.fields.x = v56;
    v121.fields.y = y;
    v121.fields.z = v57;
    GameObjectExtensions__SetLocalPosition(gameObject, v121, 0LL);
  }
  v61 = NotificationDialog_TypeInfo;
  if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v61 = NotificationDialog_TypeInfo;
  }
  static_fields = v61->static_fields;
  x = static_fields->MESSAGE_BASE_POS.fields.x;
  z = static_fields->MESSAGE_BASE_POS.fields.z;
  if ( static_fields->MESSAGE_BASE_POS.fields.y == messagePosY )
    messagePosY = static_fields->MESSAGE_BASE_POS.fields.y;
  if ( (*(_QWORD *)&messageWidgetSizeY & 0xFF00000000LL) == 0 )
  {
    if ( (BYTE3(v61->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v61);
      static_fields = NotificationDialog_TypeInfo->static_fields;
    }
    MESSAGE_BASE_SIZE_Y = static_fields->MESSAGE_BASE_SIZE_Y;
  }
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lineSprite, 0LL, 0LL) )
  {
    v66 = (UnityEngine_Component_o *)this->fields.lineSprite;
    if ( !v66 )
      goto LABEL_140;
    v67 = UnityEngine_Component__get_gameObject(v66, 0LL);
    if ( !v67 )
      goto LABEL_140;
    UnityEngine_GameObject__SetActive(v67, isLineDraw, 0LL);
    if ( isLineDraw )
    {
      v68 = NotificationDialog_TypeInfo;
      if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v68 = NotificationDialog_TypeInfo;
      }
      v69 = v68->static_fields;
      x = v69->MESSAGE_LINE_POS.fields.x;
      messagePosY = v69->MESSAGE_LINE_POS.fields.y;
      z = v69->MESSAGE_LINE_POS.fields.z;
      MESSAGE_BASE_SIZE_Y = v69->MESSAGE_LINE_SIZE_Y;
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v71 = this->fields.messageLabel;
    if ( !v71 )
      goto LABEL_140;
    UILabel__set_spacingY(v71, spacingY, 0LL);
    v72 = (UIWidget_o *)this->fields.messageLabel;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    }
    if ( !v72 )
      goto LABEL_140;
    UIWidget__SetDimensions(
      v72,
      NotificationDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_X,
      MESSAGE_BASE_SIZE_Y,
      0LL);
    v73 = this->fields.messageLabel;
    if ( !v73 )
      goto LABEL_140;
    UILabel__set_maxLineCount(v73, maxLine, 0LL);
    v74 = this->fields.messageLabel;
    MESSAGE_FONT_SIZE = messageFontSize;
    if ( !messageFontSize )
      MESSAGE_FONT_SIZE = this->fields.MESSAGE_FONT_SIZE;
    if ( !v74 )
      goto LABEL_140;
    UILabel__set_fontSize(v74, MESSAGE_FONT_SIZE, 0LL);
    v76 = this->fields.messageLabel;
    v77 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
    if ( adjustText )
    {
      if ( !v76 )
        goto LABEL_140;
      WrapControlText__textAdjust(v76, v77, v76->fields.mFontSize, 0, 0, 0LL);
    }
    else
    {
      if ( !v76 )
        goto LABEL_140;
      UILabel__set_text(v76, v77, 0LL);
    }
    v78 = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !v78 )
LABEL_140:
      sub_B170D4();
    v79 = UnityEngine_Component__get_gameObject(v78, 0LL);
    v122.fields.x = x;
    v122.fields.y = messagePosY;
    v122.fields.z = z;
    GameObjectExtensions__SetLocalPosition(v79, v122, 0LL);
  }
  lnkSprite = (UnityEngine_Object_o *)this->fields.lnkSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lnkSprite, 0LL, 0LL) )
  {
    v81 = (UnityEngine_Component_o *)this->fields.lnkSprite;
    if ( !v81 )
      goto LABEL_140;
    v82 = UnityEngine_Component__get_gameObject(v81, 0LL);
    if ( !v82 )
      goto LABEL_140;
    UnityEngine_GameObject__SetActive(v82, 0, 0LL);
  }
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL) )
  {
    v84 = (UnityEngine_Component_o *)this->fields.lnkTexture;
    if ( !v84 )
      goto LABEL_140;
    v85 = UnityEngine_Component__get_gameObject(v84, 0LL);
    if ( !v85 )
      goto LABEL_140;
    UnityEngine_GameObject__SetActive(v85, 0, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v87 = NotificationDialog_TypeInfo;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v87 = NotificationDialog_TypeInfo;
    }
    v88 = v87->static_fields;
    v89 = this->fields.okBtnLabel;
    v90 = v88->BUTTON_BASE_POS.fields.x;
    v91 = v88->BUTTON_BASE_POS.fields.z;
    v92 = v88->BUTTON_TEXT_POS.fields.x;
    v94 = v88->BUTTON_TEXT_POS.fields.y;
    v93 = v88->BUTTON_TEXT_POS.fields.z;
    if ( v88->BUTTON_BASE_POS.fields.y == buttonPosY )
      buttonPosY = v88->BUTTON_BASE_POS.fields.y;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v95 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v89 )
      goto LABEL_140;
    UILabel__set_text(v89, v95, 0LL);
    v96 = (UnityEngine_Component_o *)this->fields.okBtnLabel;
    if ( !v96 )
      goto LABEL_140;
    v97 = UnityEngine_Component__get_gameObject(v96, 0LL);
    v123.fields.x = v92;
    v123.fields.y = v94;
    v123.fields.z = v93;
    GameObjectExtensions__SetLocalPosition(v97, v123, 0LL);
    v98 = (UnityEngine_Component_o *)this->fields.okBtnLabel;
    if ( !v98 )
      goto LABEL_140;
    transform = UnityEngine_Component__get_transform(v98, 0LL);
    if ( !transform )
      goto LABEL_140;
    parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
    if ( !parent )
      goto LABEL_140;
    v101 = UnityEngine_Component__get_gameObject(parent, 0LL);
    v124.fields.x = v90;
    v124.fields.y = buttonPosY;
    v124.fields.z = v91;
    GameObjectExtensions__SetLocalPosition(v101, v124, 0LL);
    v102 = (UnityEngine_Component_o *)this->fields.okBtnLabel;
    if ( !v102 )
      goto LABEL_140;
    v103 = UnityEngine_Component__get_transform(v102, 0LL);
    if ( !v103 )
      goto LABEL_140;
    v104 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v103, 0LL);
    if ( !v104 )
      goto LABEL_140;
    v105 = UnityEngine_Component__get_gameObject(v104, 0LL);
    if ( !v105 )
      goto LABEL_140;
    v106 = v105;
    Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v105,
                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v108 = (UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          v106,
                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v108, 0LL, 0LL) )
      {
        BUTTON_BASE_SIZE_X = buttonWidgetSizeX.fields.value;
        if ( (*(_QWORD *)&buttonWidgetSizeX & 0xFF00000000LL) == 0 )
        {
          v110 = NotificationDialog_TypeInfo;
          if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            v110 = NotificationDialog_TypeInfo;
          }
          BUTTON_BASE_SIZE_X = v110->static_fields->BUTTON_BASE_SIZE_X;
        }
        if ( (*(_QWORD *)&buttonWidgetSizeY & 0xFF00000000LL) == 0 )
        {
          v111 = NotificationDialog_TypeInfo;
          if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            v111 = NotificationDialog_TypeInfo;
          }
          value = v111->static_fields->BUTTON_BASE_SIZE_Y;
        }
        if ( !Component_srcLineSprite )
          goto LABEL_140;
        UIWidget__set_width(Component_srcLineSprite, BUTTON_BASE_SIZE_X, 0LL);
        UIWidget__set_height(Component_srcLineSprite, value, 0LL);
        if ( !v108 )
          goto LABEL_140;
        size = UnityEngine_BoxCollider__get_size(v108, 0LL);
        size.fields.x = (float)BUTTON_BASE_SIZE_X;
        size.fields.y = (float)value;
        UnityEngine_BoxCollider__set_size(v108, size, 0LL);
      }
    }
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v49, 0LL, 0LL) )
  {
    keepPanelDepth = panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = this->fields.keepPanelDepth;
    if ( v49 )
    {
      UIPanel__set_depth(v49, keepPanelDepth, 0LL);
      goto LABEL_139;
    }
    goto LABEL_140;
  }
LABEL_139:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v117 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v113, v114, v115, v116);
  System_Action___ctor(v117, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v117, 0, 0LL);
}


void __fastcall NotificationDialog__Open_23727776(
        NotificationDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        NotificationDialog_ClickDelegate_o *func,
        float messagePosY,
        float buttonPosY,
        int32_t panelDepth,
        int32_t maxLine,
        int32_t titleSize,
        bool isLineDraw,
        bool canMaskTouchClose,
        int32_t messageFontSize,
        int32_t onClickOkSeKind,
        System_Nullable_float__o titlePosY,
        int32_t spacingY,
        const MethodInfo *method)
{
  const MethodInfo *v16; // [xsp+48h] [xbp-8h]

  NotificationDialog__OpenDialog(
    this,
    title,
    message,
    func,
    panelDepth,
    maxLine,
    titleSize,
    isLineDraw,
    canMaskTouchClose,
    messagePosY,
    buttonPosY,
    messageFontSize,
    onClickOkSeKind,
    titlePosY,
    spacingY,
    0LL,
    1,
    0LL,
    0LL,
    v16);
}


void __fastcall NotificationDialog__Open_23727868(
        NotificationDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        NotificationDialog_ClickDelegate_o *func,
        System_Collections_Generic_Dictionary_string__object__o *script,
        int32_t panelDepth,
        int32_t maxLine,
        int32_t titleSize,
        bool isLineDraw,
        bool canMaskTouchClose,
        int32_t onClickOkSe,
        const MethodInfo *method)
{
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  UIPanel_o *TargetPanel; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  _BOOL4 isInitPanelDepth; // w8
  UnityEngine_Object_o *titleLabel; // x27
  UILabel_o *v53; // x0
  UILabel_o *v54; // x0
  System_String_o *v55; // x1
  UnityEngine_Component_o *v56; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v58; // x3
  UnityEngine_GameObject_o *v59; // x25
  NotificationDialog_c *v60; // x8
  float *p_BANNER_RETRY_MAX; // x8
  float v62; // s8
  float v63; // s9
  float v64; // s10
  NotificationDialog_c *v65; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  UnityEngine_Object_o *lineSprite; // x26
  float v68; // s8
  float y; // s9
  float z; // s10
  int32_t MESSAGE_BASE_SIZE_Y; // w25
  UnityEngine_Component_o *v72; // x0
  UnityEngine_GameObject_o *v73; // x0
  NotificationDialog_c *v74; // x0
  struct NotificationDialog_StaticFields *v75; // x8
  UnityEngine_Object_o *messageLabel; // x26
  UIWidget_o *v77; // x26
  UILabel_o *v78; // x0
  UILabel_o *v79; // x0
  struct UILabel_o *v80; // x0
  System_String_o *v81; // x1
  UnityEngine_Component_o *v82; // x0
  UnityEngine_GameObject_o *v83; // x23
  const MethodInfo *v84; // x3
  UnityEngine_Object_o *lnkSprite; // x23
  __int64 v86; // x11
  __int64 v87; // x11
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v88; // x0
  struct System_Object_array *v89; // x0
  struct System_Object_array **p_sprites; // x23
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  __int64 v97; // x0
  __int64 v98; // x1
  __int64 v99; // x2
  struct System_Object_array *sprites; // x8
  __int64 v101; // x9
  struct LinkableSprite_o *v102; // x24
  unsigned __int64 v103; // x21
  UnityEngine_Component_o *v104; // x0
  UnityEngine_GameObject_o *v105; // x24
  UnityEngine_UI_Dropdown_DropdownItem_o *v106; // x0
  UnityEngine_GameObject_o *v107; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_Dictionary_string__object__o *v111; // x8
  __int64 v112; // x11
  System_Collections_Generic_Dictionary_string__object__o *v113; // x25
  UnityEngine_GameObject_o *v114; // x0
  UISprite_o *mCollider; // x22
  UnityEngine_GameObject_o *v116; // x26
  const MethodInfo *v117; // x3
  System_String_o *StringFromScript; // x28
  bool v119; // w0
  UnityEngine_GameObject_o *v120; // x0
  const MethodInfo *v121; // x3
  NotificationDialog_c *v122; // x8
  UnityEngine_GameObject_o *v123; // x26
  float *v124; // x8
  float v125; // s9
  float v126; // s10
  float v127; // s11
  NotificationDialog_o *v128; // x0
  const MethodInfo *v129; // x3
  NotificationDialog_o *v130; // x0
  const MethodInfo *v131; // x3
  double v132; // d2
  double v133; // d0
  NotificationDialog_o *IntFromScript; // x0
  int32_t v135; // w26
  const MethodInfo *v136; // x3
  System_String_o *v137; // x0
  UnityEngine_Component_o *v138; // x0
  UnityEngine_GameObject_o *v139; // x0
  UnityEngine_Object_o *lnkTexture; // x23
  __int64 v141; // x11
  __int64 v142; // x11
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v143; // x0
  struct System_Object_array *v144; // x0
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  struct System_Object_array *banners; // x8
  int v152; // w21
  UnityEngine_Component_o *v153; // x0
  UnityEngine_GameObject_o *v154; // x0
  UnityEngine_Object_o *okBtnLabel; // x23
  UILabel_o *v156; // x23
  System_String_o *v157; // x0
  UnityEngine_Component_o *v158; // x0
  UnityEngine_Transform_o *v159; // x0
  UnityEngine_Component_o *v160; // x0
  UnityEngine_GameObject_o *v161; // x0
  const MethodInfo *v162; // x3
  NotificationDialog_c *v163; // x8
  UnityEngine_GameObject_o *v164; // x23
  float *v165; // x8
  float v166; // s8
  float v167; // s9
  float v168; // s10
  int32_t keepPanelDepth; // w1
  __int64 v170; // x1
  __int64 v171; // x2
  __int64 v172; // x3
  __int64 v173; // x4
  System_Action_o *v174; // x20
  CommonUI_o *Instance; // x0
  UnityEngine_GameObject_o *v176; // x0
  UnityEngine_GameObject_o *baseWindow; // x0
  __int64 v178; // x1
  __int64 v179; // x2
  __int64 v180; // x3
  __int64 v181; // x4
  System_Action_o *v182; // x20
  const MethodInfo *v183; // x2
  UnityEngine_Object_o *x; // [xsp+8h] [xbp-98h]
  MethodInfo v187; // [xsp+18h] [xbp-88h] BYREF
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v189; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v191; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v192; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v194; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v195; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40F9367 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, title);
    sub_B16FFC(&AtlasManager_TypeInfo, v18);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v19);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v20);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_LinkableSprite___, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_LinkableSprite__Add__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ToArray__, v23);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v24);
    sub_B16FFC(&LocalizationManager_TypeInfo, v25);
    sub_B16FFC(&Method_NotificationDialog_EndOpen__, v26);
    sub_B16FFC(&Method_NotificationDialog__Open_b__38_0__, v27);
    sub_B16FFC(&NotificationDialog_TypeInfo, v28);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v29);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v30);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v31);
    sub_B16FFC(&StringLiteral_16543/*"banners"*/, v32);
    sub_B16FFC(&StringLiteral_22042/*"size"*/, v33);
    sub_B16FFC(&StringLiteral_22872/*"urlOpenType"*/, v34);
    sub_B16FFC(&StringLiteral_21110/*"offset"*/, v35);
    sub_B16FFC(&StringLiteral_22612/*"titleOffset"*/, v36);
    sub_B16FFC(&StringLiteral_20398/*"messageOffset"*/, v37);
    sub_B16FFC(&StringLiteral_22140/*"spriteName"*/, v38);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v39);
    sub_B16FFC(&StringLiteral_22871/*"urlLink"*/, v40);
    sub_B16FFC(&StringLiteral_17056/*"buttonOffset"*/, v41);
    sub_B16FFC(&StringLiteral_1/*""*/, v42);
    sub_B16FFC(&StringLiteral_22141/*"sprites"*/, v43);
    byte_40F9367 = 1;
  }
  v187.name = 0LL;
  LODWORD(v187.invoker_method) = 0;
  v187.methodPointer = 0LL;
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  x = (UnityEngine_Object_o *)TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(x, 0LL, 0LL) )
    {
      if ( !x )
        goto LABEL_163;
      this->fields.keepPanelDepth = (int32_t)x[13].klass;
    }
  }
  this->fields.clickFunc = func;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v53 = this->fields.titleLabel;
    if ( titleSize <= 0 )
      titleSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !v53 )
      goto LABEL_163;
    UILabel__set_fontSize(v53, titleSize, 0LL);
    v54 = this->fields.titleLabel;
    if ( !v54 )
      goto LABEL_163;
    v55 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v54, v55, 0LL);
    v56 = (UnityEngine_Component_o *)this->fields.titleLabel;
    if ( !v56 )
      goto LABEL_163;
    gameObject = UnityEngine_Component__get_gameObject(v56, 0LL);
    v59 = gameObject;
    v60 = NotificationDialog_TypeInfo;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v60 = NotificationDialog_TypeInfo;
    }
    p_BANNER_RETRY_MAX = (float *)&v60->static_fields->BANNER_RETRY_MAX;
    v62 = p_BANNER_RETRY_MAX[1];
    v63 = p_BANNER_RETRY_MAX[2];
    v64 = p_BANNER_RETRY_MAX[3];
    VectFromScript = NotificationDialog__getVectFromScript(
                       (NotificationDialog_o *)gameObject,
                       script,
                       (System_String_o *)StringLiteral_22612/*"titleOffset"*/,
                       v58);
    VectFromScript.fields.x = v62 + VectFromScript.fields.x;
    VectFromScript.fields.y = v63 + VectFromScript.fields.y;
    VectFromScript.fields.z = v64 + VectFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition(v59, VectFromScript, 0LL);
  }
  v65 = NotificationDialog_TypeInfo;
  if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v65 = NotificationDialog_TypeInfo;
  }
  static_fields = v65->static_fields;
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  v68 = static_fields->MESSAGE_BASE_POS.fields.x;
  y = static_fields->MESSAGE_BASE_POS.fields.y;
  z = static_fields->MESSAGE_BASE_POS.fields.z;
  MESSAGE_BASE_SIZE_Y = static_fields->MESSAGE_BASE_SIZE_Y;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lineSprite, 0LL, 0LL) )
  {
    v72 = (UnityEngine_Component_o *)this->fields.lineSprite;
    if ( !v72 )
      goto LABEL_163;
    v73 = UnityEngine_Component__get_gameObject(v72, 0LL);
    if ( !v73 )
      goto LABEL_163;
    UnityEngine_GameObject__SetActive(v73, isLineDraw, 0LL);
    if ( isLineDraw )
    {
      v74 = NotificationDialog_TypeInfo;
      if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v74 = NotificationDialog_TypeInfo;
      }
      v75 = v74->static_fields;
      v68 = v75->MESSAGE_LINE_POS.fields.x;
      y = v75->MESSAGE_LINE_POS.fields.y;
      z = v75->MESSAGE_LINE_POS.fields.z;
      MESSAGE_BASE_SIZE_Y = v75->MESSAGE_LINE_SIZE_Y;
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v77 = (UIWidget_o *)this->fields.messageLabel;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    }
    if ( !v77 )
      goto LABEL_163;
    UIWidget__SetDimensions(
      v77,
      NotificationDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_X,
      MESSAGE_BASE_SIZE_Y,
      0LL);
    v78 = this->fields.messageLabel;
    if ( !v78 )
      goto LABEL_163;
    UILabel__set_maxLineCount(v78, maxLine, 0LL);
    v79 = this->fields.messageLabel;
    if ( !v79 )
      goto LABEL_163;
    UILabel__set_fontSize(v79, this->fields.MESSAGE_FONT_SIZE, 0LL);
    v80 = this->fields.messageLabel;
    if ( !v80 )
      goto LABEL_163;
    v81 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(v80, v81, v80->fields.mFontSize, 0, 0, 0LL);
    v82 = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !v82 )
      goto LABEL_163;
    v83 = UnityEngine_Component__get_gameObject(v82, 0LL);
    v189 = NotificationDialog__getVectFromScript(
             (NotificationDialog_o *)v83,
             script,
             (System_String_o *)StringLiteral_20398/*"messageOffset"*/,
             v84);
    v189.fields.x = v68 + v189.fields.x;
    v189.fields.y = y + v189.fields.y;
    v189.fields.z = z + v189.fields.z;
    GameObjectExtensions__SetLocalPosition(v83, v189, 0LL);
  }
  lnkSprite = (UnityEngine_Object_o *)this->fields.lnkSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lnkSprite, 0LL, 0LL) )
  {
    if ( !script )
      goto LABEL_163;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_22141/*"sprites"*/,
            (System_Xml_Schema_XmlSchemaObject_o **)&v187.name,
            (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      goto LABEL_110;
    if ( !v187.name )
      goto LABEL_163;
    v86 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v187.name + 300LL) < (unsigned int)v86
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)v187.name + 200LL) + 8 * v86 - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_163;
    }
    v87 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v187.name + 300LL) >= (unsigned int)v87 )
      v88 = *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)v187.name + 200LL) + 8 * v87 - 8) == System_Collections_Generic_List_object__TypeInfo
          ? (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v187.name
          : 0LL;
    else
      v88 = 0LL;
    v89 = (struct System_Object_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          v88,
                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_object__ToArray__);
    this->fields.sprites = v89;
    p_sprites = &this->fields.sprites;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.sprites,
      (System_Int32_array **)v89,
      v91,
      v92,
      v93,
      v94,
      v95,
      v96);
    sprites = this->fields.sprites;
    if ( sprites && (v101 = *(_QWORD *)&sprites->max_length) != 0 )
    {
      if ( (int)v101 >= 1 )
      {
        v102 = this->fields.lnkSprite;
        v103 = 0LL;
        while ( 1 )
        {
          if ( v103 )
          {
            v104 = (UnityEngine_Component_o *)this->fields.lnkSprite;
            if ( !v104 )
              break;
            v105 = UnityEngine_Component__get_gameObject(v104, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v106 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                     (UnityEngine_UI_Dropdown_DropdownItem_o *)v105,
                     (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !this->fields.lnkSprite )
              break;
            v107 = (UnityEngine_GameObject_o *)v106;
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.lnkSprite, 0LL);
            if ( !transform )
              break;
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
            GameObjectExtensions__SetParent(v107, parent, 0LL);
            one = UnityEngine_Vector3__get_one(0LL);
            GameObjectExtensions__SetLocalScale(v107, one, 0LL);
            if ( !v107 )
              break;
            Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                               v107,
                                                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_LinkableSprite___);
            if ( !this->fields.additionalSprites )
              break;
            v102 = (struct LinkableSprite_o *)Component_srcLineSprite;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.additionalSprites,
              Component_srcLineSprite,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_LinkableSprite__Add__);
            sprites = *p_sprites;
            if ( !*p_sprites )
              break;
          }
          if ( v103 >= sprites->max_length )
          {
            sub_B17100(v97, v98, v99);
            sub_B170A0();
          }
          v111 = (System_Collections_Generic_Dictionary_string__object__o *)sprites->m_Items[v103];
          if ( v111
            && (v112 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
                *(&v111->klass->_2.bitflags2 + 1) >= (unsigned int)v112) )
          {
            if ( (System_Collections_Generic_Dictionary_string__object__c *)v111->klass->_2.typeHierarchy[v112 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
              v113 = v111;
            else
              v113 = 0LL;
            if ( !v102 )
              break;
          }
          else
          {
            v113 = 0LL;
            if ( !v102 )
              break;
          }
          v114 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v102, 0LL);
          mCollider = (UISprite_o *)v102->fields.mCollider;
          v116 = v114;
          StringFromScript = NotificationDialog__getStringFromScript(
                               (NotificationDialog_o *)v114,
                               v113,
                               (System_String_o *)StringLiteral_22140/*"spriteName"*/,
                               v117);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          v119 = AtlasManager__SetEventUI(mCollider, StringFromScript, 0LL);
          if ( !v116 )
            break;
          UnityEngine_GameObject__SetActive(v116, v119, 0LL);
          v120 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v102, 0LL);
          v122 = NotificationDialog_TypeInfo;
          v123 = v120;
          if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            v122 = NotificationDialog_TypeInfo;
          }
          v124 = (float *)&v122->static_fields->BANNER_RETRY_MAX;
          v125 = v124[13];
          v126 = v124[14];
          v127 = v124[15];
          v191 = NotificationDialog__getVectFromScript(
                   (NotificationDialog_o *)v120,
                   v113,
                   (System_String_o *)StringLiteral_21110/*"offset"*/,
                   v121);
          v191.fields.x = v125 + v191.fields.x;
          v191.fields.y = v126 + v191.fields.y;
          v191.fields.z = v127 + v191.fields.z;
          GameObjectExtensions__SetLocalPosition(v123, v191, 0LL);
          v192 = NotificationDialog__getVectFromScript(v128, v113, (System_String_o *)StringLiteral_22042/*"size"*/, v129);
          v187.methodPointer = *(Il2CppMethodPointer *)&v192.fields.x;
          *(float *)&v187.invoker_method = v192.fields.z;
          zero = UnityEngine_Vector3__get_zero(0LL);
          if ( UnityEngine_Vector3__Equals_49541752(zero, v195, &v187) )
          {
            LinkableSprite__MakePixelPerfect(v102, 0LL);
          }
          else
          {
            v132 = *(float *)&v187.methodPointer;
            v133 = *((float *)&v187.methodPointer + 1);
            if ( *(float *)&v187.methodPointer == INFINITY )
              v132 = -INFINITY;
            if ( *((float *)&v187.methodPointer + 1) == INFINITY )
              v133 = -INFINITY;
            LinkableSprite__SetSize(v102, (int)v132, (int)v133, 0LL);
          }
          IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                    v130,
                                                    v113,
                                                    (System_String_o *)StringLiteral_22872/*"urlOpenType"*/,
                                                    v131);
          v135 = (int)IntFromScript;
          v137 = NotificationDialog__getStringFromScript(
                   IntFromScript,
                   v113,
                   (System_String_o *)StringLiteral_22871/*"urlLink"*/,
                   v136);
          LinkableSprite__SetUp(v102, v135, v137, 0LL);
          sprites = *p_sprites;
          if ( !*p_sprites )
            break;
          if ( (__int64)++v103 >= (int)sprites->max_length )
            goto LABEL_113;
        }
LABEL_163:
        sub_B170D4();
      }
    }
    else
    {
LABEL_110:
      v138 = (UnityEngine_Component_o *)this->fields.lnkSprite;
      if ( !v138 )
        goto LABEL_163;
      v139 = UnityEngine_Component__get_gameObject(v138, 0LL);
      if ( !v139 )
        goto LABEL_163;
      UnityEngine_GameObject__SetActive(v139, 0, 0LL);
    }
  }
LABEL_113:
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL) )
    goto LABEL_133;
  if ( !script )
    goto LABEL_163;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_16543/*"banners"*/,
          (System_Xml_Schema_XmlSchemaObject_o **)&v187.name,
          (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    goto LABEL_130;
  if ( !v187.name )
    goto LABEL_163;
  v141 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)v187.name + 300LL) < (unsigned int)v141
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)v187.name + 200LL) + 8 * v141 - 8) != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_163;
  }
  v142 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)v187.name + 300LL) >= (unsigned int)v142 )
    v143 = *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)v187.name + 200LL) + 8 * v142 - 8) == System_Collections_Generic_List_object__TypeInfo
         ? (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v187.name
         : 0LL;
  else
    v143 = 0LL;
  v144 = (struct System_Object_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         v143,
                                         (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_object__ToArray__);
  this->fields.banners = v144;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.banners,
    (System_Int32_array **)v144,
    v145,
    v146,
    v147,
    v148,
    v149,
    v150);
  banners = this->fields.banners;
  if ( !banners || !*(_QWORD *)&banners->max_length )
  {
LABEL_130:
    v153 = (UnityEngine_Component_o *)this->fields.lnkTexture;
    if ( !v153 )
      goto LABEL_163;
    v154 = UnityEngine_Component__get_gameObject(v153, 0LL);
    if ( !v154 )
      goto LABEL_163;
    UnityEngine_GameObject__SetActive(v154, 0, 0LL);
LABEL_133:
    v152 = 1;
    goto LABEL_134;
  }
  v152 = 0;
LABEL_134:
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v156 = this->fields.okBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v157 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v156 )
      goto LABEL_163;
    UILabel__set_text(v156, v157, 0LL);
    v158 = (UnityEngine_Component_o *)this->fields.okBtnLabel;
    if ( !v158 )
      goto LABEL_163;
    v159 = UnityEngine_Component__get_transform(v158, 0LL);
    if ( !v159 )
      goto LABEL_163;
    v160 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v159, 0LL);
    if ( !v160 )
      goto LABEL_163;
    v161 = UnityEngine_Component__get_gameObject(v160, 0LL);
    v163 = NotificationDialog_TypeInfo;
    v164 = v161;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v163 = NotificationDialog_TypeInfo;
    }
    v165 = (float *)&v163->static_fields->BANNER_RETRY_MAX;
    v166 = v165[16];
    v167 = v165[17];
    v168 = v165[18];
    v194 = NotificationDialog__getVectFromScript(
             (NotificationDialog_o *)v161,
             script,
             (System_String_o *)StringLiteral_17056/*"buttonOffset"*/,
             v162);
    v194.fields.x = v166 + v194.fields.x;
    v194.fields.y = v167 + v194.fields.y;
    v194.fields.z = v168 + v194.fields.z;
    GameObjectExtensions__SetLocalPosition(v164, v194, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(x, 0LL, 0LL) )
  {
    keepPanelDepth = panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = this->fields.keepPanelDepth;
    if ( !x )
      goto LABEL_163;
    UIPanel__set_depth((UIPanel_o *)x, keepPanelDepth, 0LL);
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  if ( v152 )
  {
    v174 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v170, v171, v172, v173);
    System_Action___ctor(v174, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v174, 0, 0LL);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_163;
    CommonUI__SetLoadMode(Instance, 1, 0LL);
    v176 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v176 )
      goto LABEL_163;
    UnityEngine_GameObject__SetActive(v176, 1, 0LL);
    baseWindow = this->fields.baseWindow;
    if ( !baseWindow )
      goto LABEL_163;
    UnityEngine_GameObject__SetActive(baseWindow, 0, 0LL);
    v182 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v178, v179, v180, v181);
    System_Action___ctor(v182, (Il2CppObject *)this, Method_NotificationDialog__Open_b__38_0__, 0LL);
    NotificationDialog__LoadBanners(this, v182, v183);
  }
}


System_Collections_IEnumerator_o *__fastcall NotificationDialog__StartDownloadBanner(
        NotificationDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F936D & 1) == 0 )
  {
    sub_B16FFC(&NotificationDialog__StartDownloadBanner_d__48_TypeInfo, method);
    byte_40F936D = 1;
  }
  v6 = sub_B170CC(NotificationDialog__StartDownloadBanner_d__48_TypeInfo, method, v2, v3, v4);
  NotificationDialog__StartDownloadBanner_d__48___ctor((NotificationDialog__StartDownloadBanner_d__48_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall NotificationDialog___Open_b__38_0(NotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x20

  if ( (byte_40F9371 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_NotificationDialog_EndOpen__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_40F9371 = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow
    || (UnityEngine_GameObject__SetActive(baseWindow, 1, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v11, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationDialog___StartDownloadBanner_b__48_0(
        NotificationDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1
  ManagementManager_o *Instance; // x0

  if ( (byte_40F9372 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide);
    byte_40F9372 = 1;
  }
  if ( isDecide )
  {
    started = NotificationDialog__StartDownloadBanner(this, (const MethodInfo *)isDecide);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
  else
  {
    Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    ManagementManager__reboot(Instance, 0, 0LL);
  }
}


int32_t __fastcall NotificationDialog__getIntFromScript(
        NotificationDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *v7; // x19
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F936A & 1) == 0 )
  {
    sub_B16FFC(&System_Convert_TypeInfo, script);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v6);
    byte_40F936A = 1;
  }
  value = 0LL;
  if ( !script )
    sub_B170D4();
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v7 = (Il2CppObject *)value;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToInt32(v7, 0LL);
}


System_String_o *__fastcall NotificationDialog__getStringFromScript(
        NotificationDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F9369 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, script);
    sub_B16FFC(&string_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_1/*""*/, v7);
    byte_40F9369 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_B170D4();
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !value )
    return 0LL;
  if ( (System_String_c *)value->klass == string_TypeInfo )
    return (System_String_o *)value;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall NotificationDialog__getVectFromScript(
        NotificationDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Xml_Schema_XmlSchemaObject_o *v10; // x20
  __int64 v11; // x10
  float v12; // s0
  float v13; // s1
  float v14; // s2
  Il2CppObject *v15; // x19
  double v16; // d8
  double v17; // d1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F9368 & 1) == 0 )
  {
    sub_B16FFC(&System_Convert_TypeInfo, script);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__get_Item__, v8);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v9);
    byte_40F9368 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_B170D4();
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)key,
         &value,
         (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    && (v10 = value) != 0LL
    && (v11 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
        *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v11)
    && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v11 - 1] == System_Collections_Generic_List_object__TypeInfo
    && SLODWORD(value->fields.sourceUri) >= 2 )
  {
    v15 = *(Il2CppObject **)(*(_QWORD *)&value->fields.lineNum + 32LL);
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v16 = System_Convert__ToDouble(v15, 0LL);
    if ( LODWORD(v10->fields.sourceUri) <= 1 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v17 = System_Convert__ToDouble(*(Il2CppObject **)(*(_QWORD *)&v10->fields.lineNum + 40LL), 0LL);
    v12 = v16;
    v13 = v17;
    v14 = 0.0;
  }
  else
  {
    *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL);
  }
  result.fields.z = v14;
  result.fields.y = v13;
  result.fields.x = v12;
  return result;
}


System_String_o *__fastcall NotificationDialog__get_closeBtnPath(NotificationDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40F936E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15425/*"Window/OkBtn"*/, method);
    byte_40F936E = 1;
  }
  return (System_String_o *)StringLiteral_15425/*"Window/OkBtn"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationDialog_ClickDelegate___ctor(
        NotificationDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall NotificationDialog_ClickDelegate__BeginInvoke(
        NotificationDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isOk;
  if ( (byte_40F835B & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isOk);
    byte_40F835B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall NotificationDialog_ClickDelegate__EndInvoke(
        NotificationDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationDialog_ClickDelegate__Invoke(
        NotificationDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  NotificationDialog_ClickDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  NotificationDialog_ClickDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  NotificationDialog_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (NotificationDialog_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isOk, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isOk, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, isOk, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isOk, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isOk,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isOk, v20);
    goto LABEL_37;
  }
}


void __fastcall NotificationDialog__StartDownloadBanner_d__48___ctor(
        NotificationDialog__StartDownloadBanner_d__48_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall NotificationDialog__StartDownloadBanner_d__48__MoveNext(
        NotificationDialog__StartDownloadBanner_d__48_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  NotificationDialog__StartDownloadBanner_d__48_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  int32_t _1__state; // w8
  struct NotificationDialog_o *_4__this; // x19
  bool v30; // w21
  struct System_Object_array *banners; // x8
  __int64 mLoadingIdx; // x9
  Il2CppObject *v33; // x8
  __int64 v34; // x11
  System_Int32_array **v35; // x1
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  UnityEngine_Networking_UnityWebRequest_o **p_mBannerWWW; // x21
  System_String_o *error; // x0
  UnityEngine_Networking_DownloadHandler_o *texDl_5__3; // x0
  System_Byte_array *data; // x0
  System_Byte_array *v41; // x22
  UnityEngine_Object_o *texture; // x23
  System_String_o *v43; // x0
  bool IsNullOrEmpty; // w0
  int v45; // w20
  NotificationDialog_c *v46; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v48; // x22
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  ErrorDialog_ClickDelegate_o *v53; // x23
  System_Collections_IEnumerator_o *started; // x0
  UnityEngine_Networking_UnityWebRequest_o *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_o *v62; // x21
  System_String_o *WebViewFullAddress; // x21
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  UnityEngine_Networking_UnityWebRequest_o *v68; // x22
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  UnityEngine_Networking_DownloadHandlerTexture_o *v79; // x22
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  UnityEngine_Networking_UnityWebRequest_o *v86; // x0
  UnityEngine_Networking_UnityWebRequest_o *v87; // x0
  System_Int32_array **v88; // x0
  BattleServantConfConponent_o *p__2__current; // x20
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  EventMissionProgressRequest_Argument_ProgressData_o *lnkTexture; // x22
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v99; // x0
  UnityEngine_GameObject_o *v100; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x0
  UnityEngine_GameObject_o *v105; // x0
  UnityEngine_GameObject_o *v106; // x23
  NotificationDialog_c *v107; // x8
  float *p_BANNER_RETRY_MAX; // x8
  float v109; // s8
  float v110; // s9
  float v111; // s10
  double v112; // d3
  double v113; // d0
  int32_t IntFromScript; // w0
  System_Collections_Generic_Dictionary_string__object__o *banner_5__2; // x1
  int32_t v116; // w20
  System_String_o *StringFromScript; // x0
  MethodInfo v118; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v123; // 0:s3.4,4:s4.4,8:s5.4

  v8 = this;
  if ( (byte_40F835A & 1) == 0 )
  {
    sub_B16FFC(&ErrorDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_LinkableTexture___, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_LinkableTexture__Add__, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&NetworkManager_TypeInfo, v14);
    sub_B16FFC(&Method_NotificationDialog__StartDownloadBanner_b__48_0__, v15);
    sub_B16FFC(&NotificationDialog_TypeInfo, v16);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_B16FFC(&UnityEngine_Networking_UnityWebRequest_TypeInfo, v20);
    sub_B16FFC(&StringLiteral_16536/*"bannerUrl"*/, v21);
    sub_B16FFC(&StringLiteral_22042/*"size"*/, v22);
    sub_B16FFC(&StringLiteral_22872/*"urlOpenType"*/, v23);
    sub_B16FFC(&StringLiteral_21110/*"offset"*/, v24);
    sub_B16FFC(&StringLiteral_22871/*"urlLink"*/, v25);
    sub_B16FFC(&StringLiteral_1/*""*/, v26);
    this = (NotificationDialog__StartDownloadBanner_d__48_o *)sub_B16FFC(&StringLiteral_9264/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v27);
    byte_40F835A = 1;
  }
  LODWORD(v118.invoker_method) = 0;
  v118.methodPointer = 0LL;
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_77;
    p_mBannerWWW = &_4__this->fields.mBannerWWW;
    mBannerWWW = _4__this->fields.mBannerWWW;
    if ( !mBannerWWW )
      goto LABEL_30;
    if ( !UnityEngine_Networking_UnityWebRequest__get_isDone(mBannerWWW, 0LL) )
      goto LABEL_19;
    if ( !*p_mBannerWWW )
      goto LABEL_77;
    error = UnityEngine_Networking_UnityWebRequest__get_error(*p_mBannerWWW, 0LL);
    if ( System_String__IsNullOrEmpty(error, 0LL) )
    {
      texDl_5__3 = (UnityEngine_Networking_DownloadHandler_o *)v8->fields._texDl_5__3;
      if ( !texDl_5__3 )
        goto LABEL_77;
      data = UnityEngine_Networking_DownloadHandler__get_data(texDl_5__3, 0LL);
      if ( !v8->fields._texDl_5__3 )
        goto LABEL_77;
      v41 = data;
      texture = (UnityEngine_Object_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                          v8->fields._texDl_5__3,
                                          0LL);
    }
    else
    {
LABEL_19:
      texture = 0LL;
      v41 = 0LL;
    }
    if ( !*p_mBannerWWW || !UnityEngine_Networking_UnityWebRequest__get_isDone(*p_mBannerWWW, 0LL) )
      goto LABEL_30;
    if ( !*p_mBannerWWW )
      goto LABEL_77;
    v43 = UnityEngine_Networking_UnityWebRequest__get_error(*p_mBannerWWW, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v43, 0LL);
    if ( !v41 || !IsNullOrEmpty || !*(_QWORD *)&v41->max_length )
      goto LABEL_30;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(texture, 0LL, 0LL) )
    {
      lnkTexture = (EventMissionProgressRequest_Argument_ProgressData_o *)_4__this->fields.lnkTexture;
      if ( _4__this->fields.mLoadingIdx >= 1 )
      {
        if ( !lnkTexture )
          goto LABEL_77;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this->fields.lnkTexture, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v99 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                (UnityEngine_UI_Dropdown_DropdownItem_o *)gameObject,
                (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !_4__this->fields.lnkSprite )
          goto LABEL_77;
        v100 = (UnityEngine_GameObject_o *)v99;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)_4__this->fields.lnkSprite, 0LL);
        if ( !transform )
          goto LABEL_77;
        parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
        GameObjectExtensions__SetParent(v100, parent, 0LL);
        one = UnityEngine_Vector3__get_one(0LL);
        GameObjectExtensions__SetLocalScale(v100, one, 0LL);
        if ( !v100 )
          goto LABEL_77;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           v100,
                                                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_LinkableTexture___);
        if ( !_4__this->fields.additionalTextures )
          goto LABEL_77;
        lnkTexture = Component_srcLineSprite;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.additionalTextures,
          Component_srcLineSprite,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_LinkableTexture__Add__);
      }
      if ( !lnkTexture )
        goto LABEL_77;
      klass = lnkTexture[1].klass;
      if ( !klass )
        goto LABEL_77;
      (*((void (__fastcall **)(EventMissionProgressRequest_Argument_ProgressData_c *, UnityEngine_Object_o *, _QWORD))klass->_1.image
       + 93))(
        klass,
        texture,
        *((_QWORD *)klass->_1.image + 94));
      v105 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lnkTexture, 0LL);
      if ( !v105 )
        goto LABEL_77;
      UnityEngine_GameObject__SetActive(v105, 1, 0LL);
      v106 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lnkTexture, 0LL);
      v107 = NotificationDialog_TypeInfo;
      if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v107 = NotificationDialog_TypeInfo;
      }
      p_BANNER_RETRY_MAX = (float *)&v107->static_fields->BANNER_RETRY_MAX;
      v109 = p_BANNER_RETRY_MAX[13];
      v110 = p_BANNER_RETRY_MAX[14];
      v111 = p_BANNER_RETRY_MAX[15];
      VectFromScript = NotificationDialog__getVectFromScript(
                         _4__this,
                         v8->fields._banner_5__2,
                         (System_String_o *)StringLiteral_21110/*"offset"*/,
                         0LL);
      VectFromScript.fields.x = v109 + VectFromScript.fields.x;
      VectFromScript.fields.y = v110 + VectFromScript.fields.y;
      VectFromScript.fields.z = v111 + VectFromScript.fields.z;
      GameObjectExtensions__SetLocalPosition(v106, VectFromScript, 0LL);
      v121 = NotificationDialog__getVectFromScript(
               _4__this,
               v8->fields._banner_5__2,
               (System_String_o *)StringLiteral_22042/*"size"*/,
               0LL);
      v118.methodPointer = *(Il2CppMethodPointer *)&v121.fields.x;
      *(float *)&v118.invoker_method = v121.fields.z;
      zero = UnityEngine_Vector3__get_zero(0LL);
      if ( UnityEngine_Vector3__Equals_49541752(zero, v123, &v118) )
      {
        LinkableTexture__MakePixelPerfect((LinkableTexture_o *)lnkTexture, 0LL);
      }
      else
      {
        v112 = *(float *)&v118.methodPointer;
        v113 = -*((float *)&v118.methodPointer + 1);
        if ( *(float *)&v118.methodPointer == INFINITY )
          v112 = -*(float *)&v118.methodPointer;
        if ( *((float *)&v118.methodPointer + 1) != INFINITY )
          v113 = *((float *)&v118.methodPointer + 1);
        LinkableTexture__SetSize((LinkableTexture_o *)lnkTexture, (int)v112, (int)v113, 0LL);
      }
      IntFromScript = NotificationDialog__getIntFromScript(
                        _4__this,
                        v8->fields._banner_5__2,
                        (System_String_o *)StringLiteral_22872/*"urlOpenType"*/,
                        0LL);
      banner_5__2 = v8->fields._banner_5__2;
      v116 = IntFromScript;
      StringFromScript = NotificationDialog__getStringFromScript(
                           _4__this,
                           banner_5__2,
                           (System_String_o *)StringLiteral_22871/*"urlLink"*/,
                           0LL);
      LinkableTexture__SetUp((LinkableTexture_o *)lnkTexture, v116, StringFromScript, 0LL);
      NotificationDialog__LoadNext(_4__this, 0LL);
    }
    else
    {
LABEL_30:
      v45 = _4__this->fields.mBannerRetryCount + 1;
      _4__this->fields.mBannerRetryCount = v45;
      v46 = NotificationDialog_TypeInfo;
      if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v46 = NotificationDialog_TypeInfo;
      }
      if ( v45 <= v46->static_fields->BANNER_RETRY_MAX )
      {
        started = NotificationDialog__StartDownloadBanner(_4__this, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
      }
      else
      {
        _4__this->fields.mBannerRetryCount = 0;
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v48 = LocalizationManager__Get((System_String_o *)StringLiteral_9264/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v53 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v49, v50, v51, v52);
        ErrorDialog_ClickDelegate___ctor(
          v53,
          (Il2CppObject *)_4__this,
          Method_NotificationDialog__StartDownloadBanner_b__48_0__,
          0LL);
        if ( !Instance )
          goto LABEL_77;
        CommonUI__OpenRetryDialog(Instance, (System_String_o *)StringLiteral_1/*""*/, v48, v53, 0, 0LL);
      }
    }
    v55 = _4__this->fields.mBannerWWW;
    _4__this->fields.refuseInit = 0;
    if ( v55 )
    {
      UnityEngine_Networking_UnityWebRequest__Dispose(v55, 0LL);
      *p_mBannerWWW = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.mBannerWWW, 0LL, v56, v57, v58, v59, v60, v61);
    }
    return 0;
  }
  else
  {
    v30 = 0;
    if ( !_1__state )
    {
      v8->fields.__1__state = -1;
      if ( _4__this )
      {
        banners = _4__this->fields.banners;
        if ( banners )
        {
          mLoadingIdx = _4__this->fields.mLoadingIdx;
          if ( (unsigned int)mLoadingIdx >= banners->max_length )
          {
            sub_B17100(this, method, v2);
            sub_B170A0();
          }
          v33 = banners->m_Items[mLoadingIdx];
          if ( v33
            && (v34 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
                *(&v33->klass->_2.bitflags2 + 1) >= (unsigned int)v34) )
          {
            v35 = (System_Collections_Generic_Dictionary_string__object__c *)v33->klass->_2.typeHierarchy[v34 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo
                ? (System_Int32_array **)v33
                : 0LL;
          }
          else
          {
            v35 = 0LL;
          }
          v8->fields._banner_5__2 = (struct System_Collections_Generic_Dictionary_string__object__o *)v35;
          sub_B16F98((BattleServantConfConponent_o *)&v8->fields._banner_5__2, v35, v2, v3, v4, v5, v6, v7);
          v62 = NotificationDialog__getStringFromScript(
                  _4__this,
                  v8->fields._banner_5__2,
                  (System_String_o *)StringLiteral_16536/*"bannerUrl"*/,
                  0LL);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          WebViewFullAddress = NetworkManager__getWebViewFullAddress(v62, 0LL);
          v68 = (UnityEngine_Networking_UnityWebRequest_o *)sub_B170CC(
                                                              UnityEngine_Networking_UnityWebRequest_TypeInfo,
                                                              v64,
                                                              v65,
                                                              v66,
                                                              v67);
          UnityEngine_Networking_UnityWebRequest___ctor(v68, WebViewFullAddress, 0LL);
          _4__this->fields.mBannerWWW = v68;
          sub_B16F98(
            (BattleServantConfConponent_o *)&_4__this->fields.mBannerWWW,
            (System_Int32_array **)v68,
            v69,
            v70,
            v71,
            v72,
            v73,
            v74);
          v79 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_B170CC(
                                                                     UnityEngine_Networking_DownloadHandlerTexture_TypeInfo,
                                                                     v75,
                                                                     v76,
                                                                     v77,
                                                                     v78);
          UnityEngine_Networking_DownloadHandlerTexture___ctor(v79, 0, 0LL);
          v8->fields._texDl_5__3 = v79;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v8->fields._texDl_5__3,
            (System_Int32_array **)v79,
            v80,
            v81,
            v82,
            v83,
            v84,
            v85);
          v86 = _4__this->fields.mBannerWWW;
          if ( v86 )
          {
            UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
              v86,
              (UnityEngine_Networking_DownloadHandler_o *)v8->fields._texDl_5__3,
              0LL);
            v87 = _4__this->fields.mBannerWWW;
            v30 = 1;
            _4__this->fields.refuseInit = 1;
            if ( v87 )
            {
              v88 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__SendWebRequest(v87, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v88;
              p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
              sub_B16F98(p__2__current, v88, v90, v91, v92, v93, v94, v95);
              *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
              return v30;
            }
          }
        }
      }
LABEL_77:
      sub_B170D4();
    }
  }
  return v30;
}


Il2CppObject *__fastcall NotificationDialog__StartDownloadBanner_d__48__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NotificationDialog__StartDownloadBanner_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn NotificationDialog__StartDownloadBanner_d__48__System_Collections_IEnumerator_Reset(
        NotificationDialog__StartDownloadBanner_d__48_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_NotificationDialog__StartDownloadBanner_d__48_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall NotificationDialog__StartDownloadBanner_d__48__System_Collections_IEnumerator_get_Current(
        NotificationDialog__StartDownloadBanner_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall NotificationDialog__StartDownloadBanner_d__48__System_IDisposable_Dispose(
        NotificationDialog__StartDownloadBanner_d__48_o *this,
        const MethodInfo *method)
{
  ;
}