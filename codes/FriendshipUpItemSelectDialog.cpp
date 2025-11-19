void FriendshipUpItemSelectDialog___ctor(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CB1B0E & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB1B0E = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void FriendshipUpItemSelectDialog__Awake(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  FriendshipUpItemSelectDialog___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_T__o *friendshipUpItemSelectItemArray; // x20
  System_Action_object__o *_9__11_0; // x21
  Il2CppObject *v6; // x22
  struct FriendshipUpItemSelectDialog___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB1B08 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_FriendshipUpItemSelectDialog_SelectItem__TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_FriendshipUpItemSelectDialog_SelectItem___);
    sub_1C6BA08(&Method_FriendshipUpItemSelectDialog___c__Awake_b__11_0__);
    sub_1C6BA08(&FriendshipUpItemSelectDialog___c_TypeInfo);
    byte_4CB1B08 = 1;
  }
  v3 = FriendshipUpItemSelectDialog___c_TypeInfo;
  friendshipUpItemSelectItemArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.friendshipUpItemSelectItemArray;
  if ( !FriendshipUpItemSelectDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemSelectDialog___c_TypeInfo);
    v3 = FriendshipUpItemSelectDialog___c_TypeInfo;
  }
  _9__11_0 = (System_Action_object__o *)v3->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = FriendshipUpItemSelectDialog___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__11_0 = (System_Action_object__o *)sub_1C6BC54(System_Action_FriendshipUpItemSelectDialog_SelectItem__TypeInfo);
    System_Action_object____ctor(_9__11_0, v6, Method_FriendshipUpItemSelectDialog___c__Awake_b__11_0__, 0);
    static_fields = FriendshipUpItemSelectDialog___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Action_FriendshipUpItemSelectDialog_SelectItem__o *)_9__11_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v8, v9);
  }
  BasicHelper__ForEach_object_(
    friendshipUpItemSelectItemArray,
    (System_Action_T__o *)_9__11_0,
    (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_FriendshipUpItemSelectDialog_SelectItem___);
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void FriendshipUpItemSelectDialog__Close(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4CB1B0B & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_FriendshipUpItemSelectDialog__Close_b__14_0__);
    sub_1C6BA08(&FriendshipUpItemSelectDialog_TypeInfo);
    byte_4CB1B0B = 1;
  }
  FriendshipUpItemSelectDialog_TypeInfo->static_fields->state = 4;
  v3 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_FriendshipUpItemSelectDialog__Close_b__14_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


void FriendshipUpItemSelectDialog__Init(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4CB1B09 & 1) == 0 )
  {
    sub_1C6BA08(&FriendshipUpItemSelectDialog_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1B09 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.subTitleLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C6BC60(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  FriendshipUpItemSelectDialog_TypeInfo->static_fields->state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void FriendshipUpItemSelectDialog__OnClickClose(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4CB1B0D & 1) == 0 )
  {
    sub_1C6BA08(&Method_FriendshipUpItemSelectDialog_OnClickClose__);
    sub_1C6BA08(&FriendshipUpItemSelectDialog_TypeInfo);
    byte_4CB1B0D = 1;
  }
  if ( FriendshipUpItemSelectDialog_TypeInfo->static_fields->state == 2 )
  {
    v3 = Method_FriendshipUpItemSelectDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_FriendshipUpItemSelectDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_FriendshipUpItemSelectDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    FriendshipUpItemSelectDialog__Close(this, v5);
  }
}


void FriendshipUpItemSelectDialog__Open(
        FriendshipUpItemSelectDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *closeBtnLabel; // x20
  const MethodInfo *v12; // x1
  FriendshipUpItemSelectDialog___c_c *v13; // x0
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v15; // x21
  struct FriendshipUpItemSelectDialog___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4CB1B0A & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&FriendshipUpItemSelectDialog_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_FriendshipUpItemSelectDialog___c__Open_b__13_0__);
    sub_1C6BA08(&FriendshipUpItemSelectDialog___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_10248/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_EXPLANATION"*/);
    sub_1C6BA08(&StringLiteral_10249/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_TITLE"*/);
    sub_1C6BA08(&StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4CB1B0A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  FriendshipUpItemSelectDialog_TypeInfo->static_fields->state = 1;
  this->fields.closeCallback = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeCallback, (int32_t)callback, v7, v8);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10249/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_TITLE"*/, 0);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0),
        subTitleLabel = this->fields.subTitleLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10248/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_EXPLANATION"*/, 0),
        !subTitleLabel)
    || (UILabel__set_text(subTitleLabel, (System_String_o *)gameObject, 0),
        closeBtnLabel = this->fields.closeBtnLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/, 0),
        !closeBtnLabel) )
  {
LABEL_16:
    sub_1C6BC60(gameObject, v6);
  }
  UILabel__set_text(closeBtnLabel, (System_String_o *)gameObject, 0);
  FriendshipUpItemSelectDialog__SetSelectItem(this, v12);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0);
  AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0);
  v13 = FriendshipUpItemSelectDialog___c_TypeInfo;
  if ( !FriendshipUpItemSelectDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemSelectDialog___c_TypeInfo);
    v13 = FriendshipUpItemSelectDialog___c_TypeInfo;
  }
  _9__13_0 = v13->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = FriendshipUpItemSelectDialog___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__13_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__13_0, v15, Method_FriendshipUpItemSelectDialog___c__Open_b__13_0__, 0);
    static_fields = FriendshipUpItemSelectDialog___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = _9__13_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v17, v18);
  }
  BaseDialog__Open((BaseDialog_o *)this, _9__13_0, 0, 0, 0);
}


void FriendshipUpItemSelectDialog__SetSelectItem(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  QuestUseItemInfo_array *CachedAvailableQuestUseItems; // x20
  const MethodInfo *v6; // x2
  System_Collections_Generic_IEnumerable_T__o *friendshipUpItemSelectItemArray; // x21
  FriendshipUpItemSelectDialog___c_c *v8; // x0
  System_Action_object__o *_9__15_0; // x19
  Il2CppObject *v10; // x20
  struct FriendshipUpItemSelectDialog___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  unsigned __int64 v14; // x22
  __int64 v15; // x23
  unsigned int max_length; // w8
  bool v17; // w9
  struct FriendshipUpItemSelectDialog_SelectItem_array *v18; // x8
  bool v19; // w1
  UnityEngine_Object_o *grid; // x21
  struct System_Single_array *gridCellWidths; // x21
  struct System_Single_array *v22; // x9
  struct UIGrid_o *v23; // x8
  float v24; // s0
  UIGrid_c *klass; // x9

  if ( (byte_4CB1B0C & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_FriendshipUpItemSelectDialog_SelectItem__TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_FriendshipUpItemSelectDialog_SelectItem___);
    sub_1C6BA08(&System_Math_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C6BA08(&Method_FriendshipUpItemSelectDialog___c__SetSelectItem_b__15_0__);
    sub_1C6BA08(&FriendshipUpItemSelectDialog___c_TypeInfo);
    byte_4CB1B0C = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  CachedAvailableQuestUseItems = PartyOrganizationUtility__GetCachedAvailableQuestUseItems(
                                   (PartyOrganizationUtility_o *)Instance,
                                   0);
  Instance = (Il2CppObject *)BasicHelper__IsNullOrEmpty(
                               (System_Collections_ICollection_o *)CachedAvailableQuestUseItems,
                               0);
  friendshipUpItemSelectItemArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.friendshipUpItemSelectItemArray;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v8 = FriendshipUpItemSelectDialog___c_TypeInfo;
    if ( !FriendshipUpItemSelectDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemSelectDialog___c_TypeInfo);
      v8 = FriendshipUpItemSelectDialog___c_TypeInfo;
    }
    _9__15_0 = (System_Action_object__o *)v8->static_fields->__9__15_0;
    if ( !_9__15_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = FriendshipUpItemSelectDialog___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v8->static_fields->__9;
      _9__15_0 = (System_Action_object__o *)sub_1C6BC54(System_Action_FriendshipUpItemSelectDialog_SelectItem__TypeInfo);
      System_Action_object____ctor(_9__15_0, v10, Method_FriendshipUpItemSelectDialog___c__SetSelectItem_b__15_0__, 0);
      static_fields = FriendshipUpItemSelectDialog___c_TypeInfo->static_fields;
      static_fields->__9__15_0 = (struct System_Action_FriendshipUpItemSelectDialog_SelectItem__o *)_9__15_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__15_0, (int32_t)_9__15_0, v12, v13);
    }
    BasicHelper__ForEach_object_(
      friendshipUpItemSelectItemArray,
      (System_Action_T__o *)_9__15_0,
      (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_FriendshipUpItemSelectDialog_SelectItem___);
    return;
  }
  if ( !friendshipUpItemSelectItemArray )
    goto LABEL_41;
  if ( (int)friendshipUpItemSelectItemArray[1].monitor >= 1 )
  {
    if ( CachedAvailableQuestUseItems )
    {
      v14 = 0;
      v15 = (unsigned int)friendshipUpItemSelectItemArray[1].monitor - 1LL;
      max_length = CachedAvailableQuestUseItems->max_length;
      v17 = (int)max_length > 0;
      while ( v14 < LODWORD(friendshipUpItemSelectItemArray[1].monitor) )
      {
        Instance = (Il2CppObject *)*((_QWORD *)&friendshipUpItemSelectItemArray[2].klass + v14);
        if ( v17 )
        {
          if ( v14 >= max_length )
            break;
          if ( !Instance )
            goto LABEL_41;
          FriendshipUpItemSelectDialog_SelectItem__Set(
            (FriendshipUpItemSelectDialog_SelectItem_o *)Instance,
            CachedAvailableQuestUseItems->m_Items[v14],
            v6);
          v18 = this->fields.friendshipUpItemSelectItemArray;
          if ( !v18 )
            goto LABEL_41;
          if ( v14 >= LODWORD(v18->max_length) )
            break;
          Instance = (Il2CppObject *)v18->m_Items[v14];
          if ( !Instance )
            goto LABEL_41;
          v19 = 1;
        }
        else
        {
          if ( !Instance )
            goto LABEL_41;
          v19 = 0;
        }
        FriendshipUpItemSelectDialog_SelectItem__SetEnable(
          (FriendshipUpItemSelectDialog_SelectItem_o *)Instance,
          v19,
          v6);
        if ( v15 == v14 )
          goto LABEL_29;
        max_length = CachedAvailableQuestUseItems->max_length;
        friendshipUpItemSelectItemArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.friendshipUpItemSelectItemArray;
        v17 = (__int64)++v14 < (int)max_length;
        if ( !friendshipUpItemSelectItemArray )
          goto LABEL_41;
      }
LABEL_42:
      sub_1C6BC68(Instance);
    }
    goto LABEL_41;
  }
LABEL_29:
  grid = (UnityEngine_Object_o *)this->fields.grid;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Inequality(grid, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( CachedAvailableQuestUseItems )
    {
      gridCellWidths = this->fields.gridCellWidths;
      if ( gridCellWidths )
      {
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        Instance = (Il2CppObject *)System_Math__Min_65488940(
                                     CachedAvailableQuestUseItems->max_length,
                                     gridCellWidths->max_length,
                                     0);
        v22 = this->fields.gridCellWidths;
        if ( v22 )
        {
          if ( (unsigned int)((_DWORD)Instance - 1) >= LODWORD(v22->max_length) )
            goto LABEL_42;
          v23 = this->fields.grid;
          if ( v23 )
          {
            v24 = v22->m_Items[(int)Instance - 1];
            klass = v23->klass;
            v23->fields.maxPerLine = (int)Instance;
            v23->fields.cellWidth = v24;
            ((void (__fastcall *)(struct UIGrid_o *, const MethodInfo *))klass->vtable._8_Reposition.methodPtr)(
              v23,
              klass->vtable._8_Reposition.method);
            return;
          }
        }
      }
    }
LABEL_41:
    sub_1C6BC60(Instance, v4);
  }
}


void FriendshipUpItemSelectDialog___Close_b__14_0(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o *closeCallback; // x8

  closeCallback = this->fields.closeCallback;
  if ( closeCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallback->fields.invoke_impl)(
      closeCallback->fields.method_code,
      closeCallback->fields.method);
  FriendshipUpItemSelectDialog__Init(this, method);
}


void FriendshipUpItemSelectDialog_SelectItem___ctor(
        FriendshipUpItemSelectDialog_SelectItem_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FriendshipUpItemSelectDialog_SelectItem__ChangeButtonState(
        FriendshipUpItemSelectDialog_SelectItem_o *this,
        const MethodInfo *method)
{
  QuestUseItemInfo_o *info; // x0
  bool UseFlag; // w20
  _QWORD *v5; // x8
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  bool v8; // w1
  const MethodInfo *v9; // x2
  Il2CppObject *Instance; // x20
  struct QuestUseItemInfo_o *v11; // x8
  System_String_o *v12; // x19
  FriendshipUpItemSelectDialog_SelectItem___c_c *v13; // x8
  System_Action_o *_9__5_0; // x22
  System_String_o *v15; // x21
  Il2CppObject *v16; // x23
  struct FriendshipUpItemSelectDialog_SelectItem___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4CB1B10 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&FriendshipUpItemSelectDialog_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C6BA08(&Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__);
    sub_1C6BA08(&FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_10242/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1B10 = 1;
  }
  if ( FriendshipUpItemSelectDialog_TypeInfo->static_fields->state == 2 )
  {
    info = this->fields.info;
    if ( !info )
      goto LABEL_30;
    UseFlag = QuestUseItemInfo__GetUseFlag(info, 0);
    v5 = Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__;
    if ( (*((_BYTE *)Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C6BA20(Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v5, v5[4]);
    if ( UseFlag )
    {
      OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0);
      info = (QuestUseItemInfo_o *)this->fields.component;
      if ( !info )
        goto LABEL_30;
      FriendshipUpItemUseItem__ChangeButtonState((FriendshipUpItemUseItem_o *)info, 0, v7);
      info = this->fields.info;
      if ( !info )
        goto LABEL_30;
      v8 = 0;
LABEL_16:
      QuestUseItemInfo__SetUseFlag(info, v8, 0);
      info = (QuestUseItemInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( info )
      {
        PartyOrganizationUtility__SaveQuestUseItemUseState((PartyOrganizationUtility_o *)info, 0);
        return;
      }
LABEL_30:
      sub_1C6BC60(info, method);
    }
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    info = this->fields.info;
    if ( !info )
      goto LABEL_30;
    if ( QuestUseItemInfo__IsEventPeriod(info, 0) )
    {
      info = (QuestUseItemInfo_o *)this->fields.component;
      if ( !info )
        goto LABEL_30;
      FriendshipUpItemUseItem__ChangeButtonState((FriendshipUpItemUseItem_o *)info, 1, v9);
      info = this->fields.info;
      if ( !info )
        goto LABEL_30;
      v8 = 1;
      goto LABEL_16;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    info = (QuestUseItemInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10242/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0);
    v11 = this->fields.info;
    if ( !v11 )
      goto LABEL_30;
    info = (QuestUseItemInfo_o *)System_String__Format(
                                   (System_String_o *)info,
                                   (Il2CppObject *)v11->fields._Name_k__BackingField,
                                   0);
    v12 = (System_String_o *)info;
    v13 = FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo;
    if ( !FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo);
      v13 = FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo;
    }
    _9__5_0 = v13->static_fields->__9__5_0;
    v15 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__5_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v13->static_fields->__9;
      _9__5_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(
        _9__5_0,
        v16,
        (intptr_t)Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__,
        0);
      static_fields = FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = _9__5_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v18, v19);
    }
    if ( !Instance )
      goto LABEL_30;
    CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v15, v12, _9__5_0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0.0, 0, 0);
  }
}


void FriendshipUpItemSelectDialog_SelectItem__Set(
        FriendshipUpItemSelectDialog_SelectItem_o *this,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  FriendshipUpItemUseItem_o *component; // x21
  QuestUseItemInfo_o *info; // x22
  System_Action_o *v8; // x23
  UILabel_o *label; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_4CB1B0F & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__);
    byte_4CB1B0F = 1;
  }
  this->fields.info = itemInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.info, (int32_t)itemInfo, (int32_t)method, v3);
  component = this->fields.component;
  info = this->fields.info;
  v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__,
    0);
  if ( !component
    || (FriendshipUpItemUseItem__SetInit(component, info, 0, v8, v11), !itemInfo)
    || (label = this->fields.label) == 0 )
  {
    sub_1C6BC60(label, v10);
  }
  UILabel__set_text(label, itemInfo->fields._Explanation_k__BackingField, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendshipUpItemSelectDialog_SelectItem__SetEnable(
        FriendshipUpItemSelectDialog_SelectItem_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Component_o *component; // x0

  component = (UnityEngine_Component_o *)this->fields.component;
  if ( !component || (component = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(component, 0)) == 0 )
    sub_1C6BC60(component, flag);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)component, flag, 0);
}


void FriendshipUpItemSelectDialog_SelectItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB1B11 & 1) == 0 )
  {
    sub_1C6BA08(&FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo);
    byte_4CB1B11 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo->static_fields->__9 = (struct FriendshipUpItemSelectDialog_SelectItem___c_o *)v1;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void FriendshipUpItemSelectDialog_SelectItem___c___ctor(
        FriendshipUpItemSelectDialog_SelectItem___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FriendshipUpItemSelectDialog_SelectItem___c___ChangeButtonState_b__5_0(
        FriendshipUpItemSelectDialog_SelectItem___c_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4CB1B12 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__);
    byte_4CB1B12 = 1;
  }
  v2 = Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__;
  if ( (*((_BYTE *)Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C6BA20(Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void FriendshipUpItemSelectDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB1B13 & 1) == 0 )
  {
    sub_1C6BA08(&FriendshipUpItemSelectDialog___c_TypeInfo);
    byte_4CB1B13 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(FriendshipUpItemSelectDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FriendshipUpItemSelectDialog___c_TypeInfo->static_fields->__9 = (struct FriendshipUpItemSelectDialog___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)FriendshipUpItemSelectDialog___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void FriendshipUpItemSelectDialog___c___ctor(FriendshipUpItemSelectDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FriendshipUpItemSelectDialog___c___Awake_b__11_0(
        FriendshipUpItemSelectDialog___c_o *this,
        FriendshipUpItemSelectDialog_SelectItem_o *item,
        const MethodInfo *method)
{
  ;
}


void FriendshipUpItemSelectDialog___c___Open_b__13_0(
        FriendshipUpItemSelectDialog___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB1B14 & 1) == 0 )
  {
    sub_1C6BA08(&FriendshipUpItemSelectDialog_TypeInfo);
    byte_4CB1B14 = 1;
  }
  FriendshipUpItemSelectDialog_TypeInfo->static_fields->state = 2;
}


void FriendshipUpItemSelectDialog___c___SetSelectItem_b__15_0(
        FriendshipUpItemSelectDialog___c_o *this,
        FriendshipUpItemSelectDialog_SelectItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C6BC60(this, 0);
  FriendshipUpItemSelectDialog_SelectItem__SetEnable(item, 0, method);
}