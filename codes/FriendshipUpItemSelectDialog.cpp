void __fastcall FriendshipUpItemSelectDialog___ctor(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B62722 & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B62722 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog__Awake(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  FriendshipUpItemSelectDialog___c_c *v6; // x0
  System_Collections_Generic_IEnumerable_T__o *friendshipUpItemSelectItemArray; // x20
  System_Action_object__o *_9__9_0; // x21
  Il2CppObject *v9; // x22
  struct FriendshipUpItemSelectDialog___c_StaticFields *static_fields; // x0

  if ( (byte_4B6271C & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_FriendshipUpItemSelectDialog_SelectItem__TypeInfo, method);
    sub_1BE4ACC(&Method_BasicHelper_ForEach_FriendshipUpItemSelectDialog_SelectItem___, v3);
    sub_1BE4ACC(&Method_FriendshipUpItemSelectDialog___c__Awake_b__9_0__, v4);
    sub_1BE4ACC(&FriendshipUpItemSelectDialog___c_TypeInfo, v5);
    byte_4B6271C = 1;
  }
  v6 = FriendshipUpItemSelectDialog___c_TypeInfo;
  friendshipUpItemSelectItemArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.friendshipUpItemSelectItemArray;
  if ( !FriendshipUpItemSelectDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemSelectDialog___c_TypeInfo);
    v6 = FriendshipUpItemSelectDialog___c_TypeInfo;
  }
  _9__9_0 = (System_Action_object__o *)v6->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = FriendshipUpItemSelectDialog___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__9_0 = (System_Action_object__o *)sub_1BE4D18(System_Action_FriendshipUpItemSelectDialog_SelectItem__TypeInfo);
    System_Action_object____ctor(_9__9_0, v9, Method_FriendshipUpItemSelectDialog___c__Awake_b__9_0__, 0LL);
    static_fields = FriendshipUpItemSelectDialog___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Action_FriendshipUpItemSelectDialog_SelectItem__o *)_9__9_0;
    sub_1BE4A70(&static_fields->__9__9_0);
  }
  BasicHelper__ForEach_object_(
    friendshipUpItemSelectItemArray,
    (System_Action_T__o *)_9__9_0,
    (const MethodInfo_2F4606C *)Method_BasicHelper_ForEach_FriendshipUpItemSelectDialog_SelectItem___);
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog__Close(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4B6271F & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_FriendshipUpItemSelectDialog__Close_b__12_0__, v3);
    sub_1BE4ACC(&FriendshipUpItemSelectDialog_TypeInfo, v4);
    byte_4B6271F = 1;
  }
  FriendshipUpItemSelectDialog_TypeInfo->static_fields->state = 4;
  v5 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendshipUpItemSelectDialog__Close_b__12_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog__Init(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0

  if ( (byte_4B6271D & 1) == 0 )
  {
    sub_1BE4ACC(&FriendshipUpItemSelectDialog_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v3);
    byte_4B6271D = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.subTitleLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BE4D28(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  FriendshipUpItemSelectDialog_TypeInfo->static_fields->state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog__OnClickClose(
        FriendshipUpItemSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B62721 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_FriendshipUpItemSelectDialog_OnClickClose__, method);
    sub_1BE4ACC(&FriendshipUpItemSelectDialog_TypeInfo, v3);
    byte_4B62721 = 1;
  }
  if ( FriendshipUpItemSelectDialog_TypeInfo->static_fields->state == 2 )
  {
    v4 = Method_FriendshipUpItemSelectDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_FriendshipUpItemSelectDialog_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BE4AE4(Method_FriendshipUpItemSelectDialog_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    FriendshipUpItemSelectDialog__Close(this, v6);
  }
}


void __fastcall FriendshipUpItemSelectDialog__Open(
        FriendshipUpItemSelectDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *closeBtnLabel; // x20
  const MethodInfo *v17; // x1
  FriendshipUpItemSelectDialog___c_c *v18; // x0
  System_Action_o *_9__11_0; // x20
  Il2CppObject *v20; // x21
  struct FriendshipUpItemSelectDialog___c_StaticFields *static_fields; // x0

  if ( (byte_4B6271E & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, callback);
    sub_1BE4ACC(&FriendshipUpItemSelectDialog_TypeInfo, v5);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v6);
    sub_1BE4ACC(&Method_FriendshipUpItemSelectDialog___c__Open_b__11_0__, v7);
    sub_1BE4ACC(&FriendshipUpItemSelectDialog___c_TypeInfo, v8);
    sub_1BE4ACC(&StringLiteral_10428/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_EXPLANATION"*/, v9);
    sub_1BE4ACC(&StringLiteral_10429/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_TITLE"*/, v10);
    sub_1BE4ACC(&StringLiteral_3796/*"COMMON_CONFIRM_CLOSE"*/, v11);
    byte_4B6271E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  FriendshipUpItemSelectDialog_TypeInfo->static_fields->state = 1;
  this->fields.closeCallback = callback;
  sub_1BE4A70(&this->fields.closeCallback);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10429/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL),
        subTitleLabel = this->fields.subTitleLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10428/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_EXPLANATION"*/, 0LL),
        !subTitleLabel)
    || (UILabel__set_text(subTitleLabel, (System_String_o *)gameObject, 0LL),
        closeBtnLabel = this->fields.closeBtnLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3796/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeBtnLabel) )
  {
LABEL_16:
    sub_1BE4D28(gameObject, v13);
  }
  UILabel__set_text(closeBtnLabel, (System_String_o *)gameObject, 0LL);
  FriendshipUpItemSelectDialog__SetSelectItem(this, v17);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0LL);
  v18 = FriendshipUpItemSelectDialog___c_TypeInfo;
  if ( !FriendshipUpItemSelectDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemSelectDialog___c_TypeInfo);
    v18 = FriendshipUpItemSelectDialog___c_TypeInfo;
  }
  _9__11_0 = v18->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = FriendshipUpItemSelectDialog___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__11_0 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(_9__11_0, v20, Method_FriendshipUpItemSelectDialog___c__Open_b__11_0__, 0LL);
    static_fields = FriendshipUpItemSelectDialog___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = _9__11_0;
    sub_1BE4A70(&static_fields->__9__11_0);
  }
  BaseDialog__Open((BaseDialog_o *)this, _9__11_0, 0, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog__SetSelectItem(
        FriendshipUpItemSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  System_Collections_ICollection_o *klass; // x21
  const MethodInfo *v10; // x2
  System_Collections_Generic_IEnumerable_T__o *friendshipUpItemSelectItemArray; // x20
  FriendshipUpItemSelectDialog___c_c *v12; // x0
  System_Action_object__o *_9__13_0; // x19
  Il2CppObject *v14; // x21
  struct FriendshipUpItemSelectDialog___c_StaticFields *static_fields; // x0
  unsigned __int64 v16; // x22
  __int64 v17; // x23
  unsigned int monitor; // w8
  bool v19; // w9
  struct FriendshipUpItemSelectDialog_SelectItem_array *v20; // x8
  bool v21; // w1

  if ( (byte_4B62720 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_FriendshipUpItemSelectDialog_SelectItem__TypeInfo, method);
    sub_1BE4ACC(&Method_BasicHelper_ForEach_FriendshipUpItemSelectDialog_SelectItem___, v3);
    sub_1BE4ACC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v4);
    sub_1BE4ACC(&Method_FriendshipUpItemSelectDialog___c__SetSelectItem_b__13_0__, v5);
    sub_1BE4ACC(&FriendshipUpItemSelectDialog___c_TypeInfo, v6);
    byte_4B62720 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  klass = (System_Collections_ICollection_o *)Instance[8].klass;
  Instance = (Il2CppObject *)BasicHelper__IsNullOrEmpty(klass, 0LL);
  friendshipUpItemSelectItemArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.friendshipUpItemSelectItemArray;
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( friendshipUpItemSelectItemArray )
    {
      if ( (int)friendshipUpItemSelectItemArray[1].monitor < 1 )
        return;
      if ( klass )
      {
        v16 = 0LL;
        v17 = (unsigned int)friendshipUpItemSelectItemArray[1].monitor - 1LL;
        monitor = (unsigned int)klass[1].monitor;
        v19 = (int)monitor > 0;
        do
        {
          if ( v16 >= LODWORD(friendshipUpItemSelectItemArray[1].monitor) )
LABEL_30:
            sub_1BE4D30(Instance, v8);
          Instance = (Il2CppObject *)*((_QWORD *)&friendshipUpItemSelectItemArray[2].klass + v16);
          if ( v19 )
          {
            if ( v16 >= monitor )
              goto LABEL_30;
            if ( !Instance )
              break;
            FriendshipUpItemSelectDialog_SelectItem__Set(
              (FriendshipUpItemSelectDialog_SelectItem_o *)Instance,
              *((FriendshipUpItemInfo_o **)&klass[2].klass + v16),
              v10);
            v20 = this->fields.friendshipUpItemSelectItemArray;
            if ( !v20 )
              break;
            if ( v16 >= v20->max_length )
              goto LABEL_30;
            Instance = (Il2CppObject *)v20->m_Items[v16];
            if ( !Instance )
              break;
            v21 = 1;
          }
          else
          {
            if ( !Instance )
              break;
            v21 = 0;
          }
          FriendshipUpItemSelectDialog_SelectItem__SetEnable(
            (FriendshipUpItemSelectDialog_SelectItem_o *)Instance,
            v21,
            v10);
          if ( v17 == v16 )
            return;
          monitor = (unsigned int)klass[1].monitor;
          friendshipUpItemSelectItemArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.friendshipUpItemSelectItemArray;
          v19 = (__int64)++v16 < (int)monitor;
        }
        while ( friendshipUpItemSelectItemArray );
      }
    }
LABEL_28:
    sub_1BE4D28(Instance, v8);
  }
  v12 = FriendshipUpItemSelectDialog___c_TypeInfo;
  if ( !FriendshipUpItemSelectDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemSelectDialog___c_TypeInfo);
    v12 = FriendshipUpItemSelectDialog___c_TypeInfo;
  }
  _9__13_0 = (System_Action_object__o *)v12->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = FriendshipUpItemSelectDialog___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__13_0 = (System_Action_object__o *)sub_1BE4D18(System_Action_FriendshipUpItemSelectDialog_SelectItem__TypeInfo);
    System_Action_object____ctor(_9__13_0, v14, Method_FriendshipUpItemSelectDialog___c__SetSelectItem_b__13_0__, 0LL);
    static_fields = FriendshipUpItemSelectDialog___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Action_FriendshipUpItemSelectDialog_SelectItem__o *)_9__13_0;
    sub_1BE4A70(&static_fields->__9__13_0);
  }
  BasicHelper__ForEach_object_(
    friendshipUpItemSelectItemArray,
    (System_Action_T__o *)_9__13_0,
    (const MethodInfo_2F4606C *)Method_BasicHelper_ForEach_FriendshipUpItemSelectDialog_SelectItem___);
}


void __fastcall FriendshipUpItemSelectDialog___Close_b__12_0(
        FriendshipUpItemSelectDialog_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *closeCallback; // x8

  closeCallback = this->fields.closeCallback;
  if ( closeCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallback->fields.m_target)(
      closeCallback->fields.original_method_info,
      *(_QWORD *)&closeCallback->fields.extra_arg);
  FriendshipUpItemSelectDialog__Init(this, method);
}


void __fastcall FriendshipUpItemSelectDialog_SelectItem___ctor(
        FriendshipUpItemSelectDialog_SelectItem_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog_SelectItem__ChangeButtonState(
        FriendshipUpItemSelectDialog_SelectItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  FriendshipUpItemInfo_o *info; // x0
  bool UseFlag; // w20
  _QWORD *v13; // x8
  System_Reflection_MethodBase_o *v14; // x0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  bool v17; // w1
  const MethodInfo *v18; // x2
  Il2CppObject *Instance; // x20
  struct FriendshipUpItemInfo_o *v20; // x8
  System_String_o *v21; // x19
  FriendshipUpItemSelectDialog_SelectItem___c_c *v22; // x8
  System_Action_o *_9__5_0; // x22
  System_String_o *v24; // x21
  Il2CppObject *v25; // x23
  struct FriendshipUpItemSelectDialog_SelectItem___c_StaticFields *static_fields; // x0

  if ( (byte_4B62724 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&FriendshipUpItemSelectDialog_TypeInfo, v3);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BE4ACC(&Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__, v7);
    sub_1BE4ACC(&FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo, v8);
    sub_1BE4ACC(&StringLiteral_10424/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v9);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v10);
    byte_4B62724 = 1;
  }
  if ( FriendshipUpItemSelectDialog_TypeInfo->static_fields->state == 2 )
  {
    info = this->fields.info;
    if ( !info )
      goto LABEL_29;
    UseFlag = FriendshipUpItemInfo__GetUseFlag(info, method);
    v13 = Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__;
    if ( (*((_BYTE *)Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1BE4AE4(Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__);
    v14 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v13, v13[4]);
    if ( UseFlag )
    {
      OverwriteAssetSoundName__PlaySystemSe(v14, 1, 0LL);
      info = (FriendshipUpItemInfo_o *)this->fields.component;
      if ( info )
      {
        FriendshipUpItemUseItem__ChangeButtonState((FriendshipUpItemUseItem_o *)info, 0, v15);
        info = this->fields.info;
        if ( info )
        {
          v17 = 0;
LABEL_16:
          FriendshipUpItemInfo__SetUseFlag(info, v17, v16);
          return;
        }
      }
      goto LABEL_29;
    }
    OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
    info = this->fields.info;
    if ( !info )
      goto LABEL_29;
    if ( FriendshipUpItemInfo__IsEventPeriod(info, method) )
    {
      info = (FriendshipUpItemInfo_o *)this->fields.component;
      if ( info )
      {
        FriendshipUpItemUseItem__ChangeButtonState((FriendshipUpItemUseItem_o *)info, 1, v18);
        info = this->fields.info;
        if ( info )
        {
          v17 = 1;
          goto LABEL_16;
        }
      }
LABEL_29:
      sub_1BE4D28(info, method);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    info = (FriendshipUpItemInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10424/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
    v20 = this->fields.info;
    if ( !v20 )
      goto LABEL_29;
    info = (FriendshipUpItemInfo_o *)System_String__Format(
                                       (System_String_o *)info,
                                       (Il2CppObject *)v20->fields._Name_k__BackingField,
                                       0LL);
    v21 = (System_String_o *)info;
    v22 = FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo;
    if ( !FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo);
      v22 = FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo;
    }
    _9__5_0 = v22->static_fields->__9__5_0;
    v24 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__5_0 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo;
      }
      v25 = (Il2CppObject *)v22->static_fields->__9;
      _9__5_0 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(
        _9__5_0,
        v25,
        (intptr_t)Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__,
        0LL);
      static_fields = FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = _9__5_0;
      info = (FriendshipUpItemInfo_o *)sub_1BE4A70(&static_fields->__9__5_0);
    }
    if ( !Instance )
      goto LABEL_29;
    CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v24, v21, _9__5_0, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0.0, 0LL);
  }
}


void __fastcall FriendshipUpItemSelectDialog_SelectItem__Set(
        FriendshipUpItemSelectDialog_SelectItem_o *this,
        FriendshipUpItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct FriendshipUpItemInfo_o **p_info; // x19
  FriendshipUpItemUseItem_o *component; // x21
  FriendshipUpItemInfo_o *info; // x22
  System_Action_o *v15; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x1
  const MethodInfo *v18; // x3
  struct FriendshipUpItemInfo_o *v19; // x8
  UILabel_o *label; // x20
  System_String_o *EffectExplanation; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  struct FriendshipUpItemInfo_o *v25; // x8
  System_String_o *v26; // x19
  Il2CppObject *v27; // x0
  float v28; // [xsp+4h] [xbp-4Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B62723 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, itemInfo);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    sub_1BE4ACC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v8);
    sub_1BE4ACC(&Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__, v9);
    sub_1BE4ACC(&float_TypeInfo, v10);
    sub_1BE4ACC(&StringLiteral_10430/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_VALUE"*/, v11);
    byte_4B62723 = 1;
  }
  entity = 0LL;
  this->fields.info = itemInfo;
  p_info = &this->fields.info;
  sub_1BE4A70(&this->fields.info);
  component = this->fields.component;
  info = this->fields.info;
  v15 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__,
    0LL);
  if ( !component )
    goto LABEL_19;
  FriendshipUpItemUseItem__SetInit(component, info, v15, v18);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ItemMaster___);
  v19 = this->fields.info;
  if ( !v19 || !Master_object )
    goto LABEL_19;
  label = this->fields.label;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          v19->fields._Id_k__BackingField,
          (const MethodInfo_31FD818 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    goto LABEL_22;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_19;
  EffectExplanation = ItemEntity__GetEffectExplanation((ItemEntity_o *)entity, 0LL);
  if ( System_String__IsNullOrEmpty(EffectExplanation, 0LL) )
  {
LABEL_22:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_10430/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_VALUE"*/,
                                                                    0LL);
    v25 = *p_info;
    if ( *p_info )
    {
      v26 = (System_String_o *)Master_object;
      v28 = (float)v25->fields._Value_k__BackingField / 1000.0;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v28, v22, v23, v24);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(v26, v27, 0LL);
      goto LABEL_17;
    }
LABEL_19:
    sub_1BE4D28(Master_object, v17);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_19;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ItemEntity__GetEffectExplanation(
                                                                  (ItemEntity_o *)entity,
                                                                  0LL);
LABEL_17:
  v17 = Master_object;
  if ( !label )
    goto LABEL_19;
  UILabel__set_text(label, (System_String_o *)Master_object, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipUpItemSelectDialog_SelectItem__SetEnable(
        FriendshipUpItemSelectDialog_SelectItem_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Component_o *component; // x0

  component = (UnityEngine_Component_o *)this->fields.component;
  if ( !component
    || (component = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(component, 0LL)) == 0LL )
  {
    sub_1BE4D28(component, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)component, flag, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog_SelectItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B62725 & 1) == 0 )
  {
    sub_1BE4ACC(&FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo, v1);
    byte_4B62725 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo->static_fields->__9 = (struct FriendshipUpItemSelectDialog_SelectItem___c_o *)v2;
  sub_1BE4A70(FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo->static_fields);
}


void __fastcall FriendshipUpItemSelectDialog_SelectItem___c___ctor(
        FriendshipUpItemSelectDialog_SelectItem___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog_SelectItem___c___ChangeButtonState_b__5_0(
        FriendshipUpItemSelectDialog_SelectItem___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B62726 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BE4ACC(&Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__, v2);
    byte_4B62726 = 1;
  }
  v3 = Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__;
  if ( (*((_BYTE *)Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BE4AE4(Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v6);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B62727 & 1) == 0 )
  {
    sub_1BE4ACC(&FriendshipUpItemSelectDialog___c_TypeInfo, v1);
    byte_4B62727 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(FriendshipUpItemSelectDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FriendshipUpItemSelectDialog___c_TypeInfo->static_fields->__9 = (struct FriendshipUpItemSelectDialog___c_o *)v2;
  sub_1BE4A70(FriendshipUpItemSelectDialog___c_TypeInfo->static_fields);
}


void __fastcall FriendshipUpItemSelectDialog___c___ctor(
        FriendshipUpItemSelectDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog___c___Awake_b__9_0(
        FriendshipUpItemSelectDialog___c_o *this,
        FriendshipUpItemSelectDialog_SelectItem_o *item,
        const MethodInfo *method)
{
  ;
}


void __fastcall FriendshipUpItemSelectDialog___c___Open_b__11_0(
        FriendshipUpItemSelectDialog___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B62728 & 1) == 0 )
  {
    sub_1BE4ACC(&FriendshipUpItemSelectDialog_TypeInfo, method);
    byte_4B62728 = 1;
  }
  FriendshipUpItemSelectDialog_TypeInfo->static_fields->state = 2;
}


void __fastcall FriendshipUpItemSelectDialog___c___SetSelectItem_b__13_0(
        FriendshipUpItemSelectDialog___c_o *this,
        FriendshipUpItemSelectDialog_SelectItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1BE4D28(this, 0LL);
  FriendshipUpItemSelectDialog_SelectItem__SetEnable(item, 0, method);
}