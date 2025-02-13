void __fastcall FriendshipUpItemSelectDialog___ctor(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BD805B & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BD805B = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog__Awake(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  FriendshipUpItemSelectDialog___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_T__o *friendshipUpItemSelectItemArray; // x20
  System_Action_object__o *_9__11_0; // x21
  Il2CppObject *v6; // x22
  struct FriendshipUpItemSelectDialog___c_StaticFields *static_fields; // x0

  if ( (byte_4BD8055 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_FriendshipUpItemSelectDialog_SelectItem__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_FriendshipUpItemSelectDialog_SelectItem___);
    sub_1C21E38(&Method_FriendshipUpItemSelectDialog___c__Awake_b__11_0__);
    sub_1C21E38(&FriendshipUpItemSelectDialog___c_TypeInfo);
    byte_4BD8055 = 1;
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
    _9__11_0 = (System_Action_object__o *)sub_1C22084(System_Action_FriendshipUpItemSelectDialog_SelectItem__TypeInfo);
    System_Action_object____ctor(_9__11_0, v6, Method_FriendshipUpItemSelectDialog___c__Awake_b__11_0__, 0LL);
    static_fields = FriendshipUpItemSelectDialog___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Action_FriendshipUpItemSelectDialog_SelectItem__o *)_9__11_0;
    sub_1C21DDC(&static_fields->__9__11_0, _9__11_0);
  }
  BasicHelper__ForEach_object_(
    friendshipUpItemSelectItemArray,
    (System_Action_T__o *)_9__11_0,
    (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_FriendshipUpItemSelectDialog_SelectItem___);
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog__Close(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4BD8058 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_FriendshipUpItemSelectDialog__Close_b__14_0__);
    sub_1C21E38(&FriendshipUpItemSelectDialog_TypeInfo);
    byte_4BD8058 = 1;
  }
  FriendshipUpItemSelectDialog_TypeInfo->static_fields->state = 4;
  v3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_FriendshipUpItemSelectDialog__Close_b__14_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog__Init(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4BD8056 & 1) == 0 )
  {
    sub_1C21E38(&FriendshipUpItemSelectDialog_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8056 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.subTitleLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C22094(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  FriendshipUpItemSelectDialog_TypeInfo->static_fields->state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog__OnClickClose(
        FriendshipUpItemSelectDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4BD805A & 1) == 0 )
  {
    sub_1C21E38(&Method_FriendshipUpItemSelectDialog_OnClickClose__);
    sub_1C21E38(&FriendshipUpItemSelectDialog_TypeInfo);
    byte_4BD805A = 1;
  }
  if ( FriendshipUpItemSelectDialog_TypeInfo->static_fields->state == 2 )
  {
    v3 = Method_FriendshipUpItemSelectDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_FriendshipUpItemSelectDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_FriendshipUpItemSelectDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    FriendshipUpItemSelectDialog__Close(this, v5);
  }
}


void __fastcall FriendshipUpItemSelectDialog__Open(
        FriendshipUpItemSelectDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *closeBtnLabel; // x20
  const MethodInfo *v10; // x1
  FriendshipUpItemSelectDialog___c_c *v11; // x0
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v13; // x21
  struct FriendshipUpItemSelectDialog___c_StaticFields *static_fields; // x0

  if ( (byte_4BD8057 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&FriendshipUpItemSelectDialog_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_FriendshipUpItemSelectDialog___c__Open_b__13_0__);
    sub_1C21E38(&FriendshipUpItemSelectDialog___c_TypeInfo);
    sub_1C21E38(&StringLiteral_10471/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_10472/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_TITLE"*/);
    sub_1C21E38(&StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4BD8057 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  FriendshipUpItemSelectDialog_TypeInfo->static_fields->state = 1;
  this->fields.closeCallback = callback;
  sub_1C21DDC(&this->fields.closeCallback, callback);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10472/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL),
        subTitleLabel = this->fields.subTitleLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10471/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_EXPLANATION"*/, 0LL),
        !subTitleLabel)
    || (UILabel__set_text(subTitleLabel, (System_String_o *)gameObject, 0LL),
        closeBtnLabel = this->fields.closeBtnLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeBtnLabel) )
  {
LABEL_16:
    sub_1C22094(gameObject, v6);
  }
  UILabel__set_text(closeBtnLabel, (System_String_o *)gameObject, 0LL);
  FriendshipUpItemSelectDialog__SetSelectItem(this, v10);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0LL);
  v11 = FriendshipUpItemSelectDialog___c_TypeInfo;
  if ( !FriendshipUpItemSelectDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemSelectDialog___c_TypeInfo);
    v11 = FriendshipUpItemSelectDialog___c_TypeInfo;
  }
  _9__13_0 = v11->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = FriendshipUpItemSelectDialog___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__13_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(_9__13_0, v13, Method_FriendshipUpItemSelectDialog___c__Open_b__13_0__, 0LL);
    static_fields = FriendshipUpItemSelectDialog___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = _9__13_0;
    sub_1C21DDC(&static_fields->__9__13_0, _9__13_0);
  }
  BaseDialog__Open((BaseDialog_o *)this, _9__13_0, 0, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog__SetSelectItem(
        FriendshipUpItemSelectDialog_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  FriendshipUpItemInfo_array *AvailableQuestUseItems; // x20
  const MethodInfo *v6; // x2
  System_Collections_Generic_IEnumerable_T__o *friendshipUpItemSelectItemArray; // x21
  FriendshipUpItemSelectDialog___c_c *v8; // x0
  System_Action_object__o *_9__15_0; // x19
  Il2CppObject *v10; // x20
  struct FriendshipUpItemSelectDialog___c_StaticFields *static_fields; // x0
  unsigned __int64 v12; // x22
  __int64 v13; // x23
  signed int max_length; // w8
  bool v15; // w9
  struct FriendshipUpItemSelectDialog_SelectItem_array *v16; // x8
  bool v17; // w1
  UnityEngine_Object_o *grid; // x21
  struct System_Single_array *gridCellWidths; // x21
  struct System_Single_array *v20; // x9
  struct UIGrid_o *v21; // x8
  float v22; // s0
  UIGrid_c *klass; // x9

  if ( (byte_4BD8059 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_FriendshipUpItemSelectDialog_SelectItem__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_FriendshipUpItemSelectDialog_SelectItem___);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&Method_FriendshipUpItemSelectDialog___c__SetSelectItem_b__15_0__);
    sub_1C21E38(&FriendshipUpItemSelectDialog___c_TypeInfo);
    byte_4BD8059 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  AvailableQuestUseItems = PartyOrganizationUtility__GetAvailableQuestUseItems(
                             (PartyOrganizationUtility_o *)Instance,
                             0LL);
  Instance = (Il2CppObject *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)AvailableQuestUseItems, 0LL);
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
      _9__15_0 = (System_Action_object__o *)sub_1C22084(System_Action_FriendshipUpItemSelectDialog_SelectItem__TypeInfo);
      System_Action_object____ctor(_9__15_0, v10, Method_FriendshipUpItemSelectDialog___c__SetSelectItem_b__15_0__, 0LL);
      static_fields = FriendshipUpItemSelectDialog___c_TypeInfo->static_fields;
      static_fields->__9__15_0 = (struct System_Action_FriendshipUpItemSelectDialog_SelectItem__o *)_9__15_0;
      sub_1C21DDC(&static_fields->__9__15_0, _9__15_0);
    }
    BasicHelper__ForEach_object_(
      friendshipUpItemSelectItemArray,
      (System_Action_T__o *)_9__15_0,
      (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_FriendshipUpItemSelectDialog_SelectItem___);
    return;
  }
  if ( !friendshipUpItemSelectItemArray )
    goto LABEL_41;
  if ( (int)friendshipUpItemSelectItemArray[1].monitor >= 1 )
  {
    if ( AvailableQuestUseItems )
    {
      v12 = 0LL;
      v13 = (unsigned int)friendshipUpItemSelectItemArray[1].monitor - 1LL;
      max_length = *(_QWORD *)&AvailableQuestUseItems->max_length;
      v15 = max_length > 0;
      while ( v12 < LODWORD(friendshipUpItemSelectItemArray[1].monitor) )
      {
        Instance = (Il2CppObject *)*((_QWORD *)&friendshipUpItemSelectItemArray[2].klass + v12);
        if ( v15 )
        {
          if ( v12 >= (unsigned int)max_length )
            break;
          if ( !Instance )
            goto LABEL_41;
          FriendshipUpItemSelectDialog_SelectItem__Set(
            (FriendshipUpItemSelectDialog_SelectItem_o *)Instance,
            AvailableQuestUseItems->m_Items[v12],
            v6);
          v16 = this->fields.friendshipUpItemSelectItemArray;
          if ( !v16 )
            goto LABEL_41;
          if ( v12 >= v16->max_length )
            break;
          Instance = (Il2CppObject *)v16->m_Items[v12];
          if ( !Instance )
            goto LABEL_41;
          v17 = 1;
        }
        else
        {
          if ( !Instance )
            goto LABEL_41;
          v17 = 0;
        }
        FriendshipUpItemSelectDialog_SelectItem__SetEnable(
          (FriendshipUpItemSelectDialog_SelectItem_o *)Instance,
          v17,
          v6);
        if ( v13 == v12 )
          goto LABEL_29;
        max_length = AvailableQuestUseItems->max_length;
        friendshipUpItemSelectItemArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.friendshipUpItemSelectItemArray;
        v15 = (__int64)++v12 < max_length;
        if ( !friendshipUpItemSelectItemArray )
          goto LABEL_41;
      }
LABEL_42:
      sub_1C2209C(Instance, v4);
    }
    goto LABEL_41;
  }
LABEL_29:
  grid = (UnityEngine_Object_o *)this->fields.grid;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Inequality(grid, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( AvailableQuestUseItems )
    {
      gridCellWidths = this->fields.gridCellWidths;
      if ( gridCellWidths )
      {
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        Instance = (Il2CppObject *)System_Math__Min_63934948(
                                     AvailableQuestUseItems->max_length,
                                     gridCellWidths->max_length,
                                     0LL);
        v20 = this->fields.gridCellWidths;
        if ( v20 )
        {
          if ( (int)Instance - 1 >= v20->max_length )
            goto LABEL_42;
          v21 = this->fields.grid;
          if ( v21 )
          {
            v22 = v20->m_Items[(int)Instance];
            klass = v21->klass;
            v21->fields.maxPerLine = (int)Instance;
            v21->fields.cellWidth = v22;
            ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))klass->vtable._8_Reposition.method)(
              v21,
              klass->vtable._9_ResetPosition.methodPtr);
            return;
          }
        }
      }
    }
LABEL_41:
    sub_1C22094(Instance, v4);
  }
}


void __fastcall FriendshipUpItemSelectDialog___Close_b__14_0(
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
  FriendshipUpItemSelectDialog_SelectItem_o *v2; // x19
  struct FriendshipUpItemInfo_o *info; // x8
  _BOOL4 UseFlag_k__BackingField; // w20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  struct FriendshipUpItemInfo_o *v8; // x8
  const MethodInfo *v9; // x2
  struct FriendshipUpItemInfo_o *v10; // x8
  Il2CppObject *Instance; // x20
  struct FriendshipUpItemInfo_o *v12; // x8
  FriendshipUpItemSelectDialog_SelectItem_o *v13; // x19
  FriendshipUpItemSelectDialog_SelectItem___c_c *v14; // x8
  System_Action_o *_9__5_0; // x22
  System_String_o *v16; // x21
  Il2CppObject *v17; // x23
  struct FriendshipUpItemSelectDialog_SelectItem___c_StaticFields *static_fields; // x0

  v2 = this;
  if ( (byte_4BD805D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&FriendshipUpItemSelectDialog_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__);
    sub_1C21E38(&FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo);
    sub_1C21E38(&StringLiteral_10465/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/);
    this = (FriendshipUpItemSelectDialog_SelectItem_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD805D = 1;
  }
  if ( FriendshipUpItemSelectDialog_TypeInfo->static_fields->state == 2 )
  {
    info = v2->fields.info;
    if ( !info )
      goto LABEL_30;
    UseFlag_k__BackingField = info->fields._UseFlag_k__BackingField;
    v5 = Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__;
    if ( (*((_BYTE *)Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C21E50(Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
    if ( UseFlag_k__BackingField )
    {
      OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
      this = (FriendshipUpItemSelectDialog_SelectItem_o *)v2->fields.component;
      if ( !this )
        goto LABEL_30;
      FriendshipUpItemUseItem__ChangeButtonState((FriendshipUpItemUseItem_o *)this, 0, v7);
      v8 = v2->fields.info;
      if ( !v8 )
        goto LABEL_30;
      v8->fields._UseFlag_k__BackingField = 0;
LABEL_16:
      this = (FriendshipUpItemSelectDialog_SelectItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( this )
      {
        PartyOrganizationUtility__SaveQuestUseItemUseState((PartyOrganizationUtility_o *)this, 0LL);
        return;
      }
LABEL_30:
      sub_1C22094(this, method);
    }
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    this = (FriendshipUpItemSelectDialog_SelectItem_o *)v2->fields.info;
    if ( !this )
      goto LABEL_30;
    if ( FriendshipUpItemInfo__IsEventPeriod((FriendshipUpItemInfo_o *)this, method) )
    {
      this = (FriendshipUpItemSelectDialog_SelectItem_o *)v2->fields.component;
      if ( !this )
        goto LABEL_30;
      FriendshipUpItemUseItem__ChangeButtonState((FriendshipUpItemUseItem_o *)this, 1, v9);
      v10 = v2->fields.info;
      if ( !v10 )
        goto LABEL_30;
      v10->fields._UseFlag_k__BackingField = 1;
      goto LABEL_16;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (FriendshipUpItemSelectDialog_SelectItem_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_10465/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/,
                                                          0LL);
    v12 = v2->fields.info;
    if ( !v12 )
      goto LABEL_30;
    this = (FriendshipUpItemSelectDialog_SelectItem_o *)System_String__Format(
                                                          (System_String_o *)this,
                                                          (Il2CppObject *)v12->fields._Name_k__BackingField,
                                                          0LL);
    v13 = this;
    v14 = FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo;
    if ( !FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo);
      v14 = FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo;
    }
    _9__5_0 = v14->static_fields->__9__5_0;
    v16 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__5_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v14->static_fields->__9;
      _9__5_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        _9__5_0,
        v17,
        (intptr_t)Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__,
        0LL);
      static_fields = FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = _9__5_0;
      this = (FriendshipUpItemSelectDialog_SelectItem_o *)sub_1C21DDC(&static_fields->__9__5_0, _9__5_0);
    }
    if ( !Instance )
      goto LABEL_30;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      v16,
      (System_String_o *)v13,
      _9__5_0,
      -1,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0LL,
      0.0,
      0LL);
  }
}


void __fastcall FriendshipUpItemSelectDialog_SelectItem__Set(
        FriendshipUpItemSelectDialog_SelectItem_o *this,
        FriendshipUpItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  FriendshipUpItemUseItem_o *component; // x21
  FriendshipUpItemInfo_o *info; // x22
  System_Action_o *v7; // x23
  UILabel_o *label; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4BD805C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__);
    byte_4BD805C = 1;
  }
  this->fields.info = itemInfo;
  sub_1C21DDC(&this->fields.info, itemInfo);
  component = this->fields.component;
  info = this->fields.info;
  v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__,
    0LL);
  if ( !component
    || (FriendshipUpItemUseItem__SetInit(component, info, 0, v7, v10), !itemInfo)
    || (label = this->fields.label) == 0LL )
  {
    sub_1C22094(label, v9);
  }
  UILabel__set_text(label, itemInfo->fields._Explanation_k__BackingField, 0LL);
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
    sub_1C22094(component, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)component, flag, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog_SelectItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4BD805E & 1) == 0 )
  {
    sub_1C21E38(&FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo);
    byte_4BD805E = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo->static_fields->__9 = (struct FriendshipUpItemSelectDialog_SelectItem___c_o *)v1;
  sub_1C21DDC(FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo->static_fields, v1);
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
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BD805F & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__);
    byte_4BD805F = 1;
  }
  v2 = Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__;
  if ( (*((_BYTE *)Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C21E50(Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4BD8060 & 1) == 0 )
  {
    sub_1C21E38(&FriendshipUpItemSelectDialog___c_TypeInfo);
    byte_4BD8060 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(FriendshipUpItemSelectDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  FriendshipUpItemSelectDialog___c_TypeInfo->static_fields->__9 = (struct FriendshipUpItemSelectDialog___c_o *)v1;
  sub_1C21DDC(FriendshipUpItemSelectDialog___c_TypeInfo->static_fields, v1);
}


void __fastcall FriendshipUpItemSelectDialog___c___ctor(
        FriendshipUpItemSelectDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FriendshipUpItemSelectDialog___c___Awake_b__11_0(
        FriendshipUpItemSelectDialog___c_o *this,
        FriendshipUpItemSelectDialog_SelectItem_o *item,
        const MethodInfo *method)
{
  ;
}


void __fastcall FriendshipUpItemSelectDialog___c___Open_b__13_0(
        FriendshipUpItemSelectDialog___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BD8061 & 1) == 0 )
  {
    sub_1C21E38(&FriendshipUpItemSelectDialog_TypeInfo);
    byte_4BD8061 = 1;
  }
  FriendshipUpItemSelectDialog_TypeInfo->static_fields->state = 2;
}


void __fastcall FriendshipUpItemSelectDialog___c___SetSelectItem_b__15_0(
        FriendshipUpItemSelectDialog___c_o *this,
        FriendshipUpItemSelectDialog_SelectItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C22094(this, 0LL);
  FriendshipUpItemSelectDialog_SelectItem__SetEnable(item, 0, method);
}