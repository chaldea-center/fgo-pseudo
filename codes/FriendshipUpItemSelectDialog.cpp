void FriendshipUpItemSelectDialog___ctor(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5933D3D & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5933D3D = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void FriendshipUpItemSelectDialog__Awake(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  FriendshipUpItemSelectDialog___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_T__o *friendshipUpItemSelectItemArray; // x20
  struct FriendshipUpItemSelectDialog___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__11_0; // x21
  Il2CppObject *v8; // x22
  struct FriendshipUpItemSelectDialog___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5933D37 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_FriendshipUpItemSelectDialog_SelectItem__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_FriendshipUpItemSelectDialog_SelectItem___);
    sub_21FFC50(&Method_FriendshipUpItemSelectDialog___c__Awake_b__11_0__);
    sub_21FFC50(&FriendshipUpItemSelectDialog___c_TypeInfo);
    byte_5933D37 = 1;
  }
  v4 = FriendshipUpItemSelectDialog___c_TypeInfo;
  friendshipUpItemSelectItemArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.friendshipUpItemSelectItemArray;
  if ( !*(&FriendshipUpItemSelectDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemSelectDialog___c_TypeInfo, method, v2);
    v4 = FriendshipUpItemSelectDialog___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__11_0 = (System_Action_object__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = FriendshipUpItemSelectDialog___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_FriendshipUpItemSelectDialog_SelectItem__TypeInfo);
    System_Action_object____ctor(_9__11_0, v8, Method_FriendshipUpItemSelectDialog___c__Awake_b__11_0__, 0);
    v9 = FriendshipUpItemSelectDialog___c_TypeInfo->static_fields;
    v9->__9__11_0 = (struct System_Action_FriendshipUpItemSelectDialog_SelectItem__o *)_9__11_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__11_0, (int32_t)_9__11_0, v10, v11, v12, v13, v14, v15);
  }
  BasicHelper__ForEach_object_(
    friendshipUpItemSelectItemArray,
    (System_Action_T__o *)_9__11_0,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_FriendshipUpItemSelectDialog_SelectItem___);
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void FriendshipUpItemSelectDialog__Close(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  System_Action_c *v3; // x0
  System_Action_o *v4; // x20

  if ( (byte_5933D3A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_FriendshipUpItemSelectDialog__Close_b__14_0__);
    sub_21FFC50(&FriendshipUpItemSelectDialog_TypeInfo);
    byte_5933D3A = 1;
  }
  v3 = System_Action_TypeInfo;
  FriendshipUpItemSelectDialog_TypeInfo->static_fields->state = 4;
  v4 = (System_Action_o *)sub_21FFEBC(v3);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendshipUpItemSelectDialog__Close_b__14_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void FriendshipUpItemSelectDialog__Init(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_5933D38 & 1) == 0 )
  {
    sub_21FFC50(&FriendshipUpItemSelectDialog_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5933D38 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.subTitleLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_21FFECC(titleLabel, method);
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

  if ( (byte_5933D3C & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendshipUpItemSelectDialog_OnClickClose__);
    sub_21FFC50(&FriendshipUpItemSelectDialog_TypeInfo);
    byte_5933D3C = 1;
  }
  if ( FriendshipUpItemSelectDialog_TypeInfo->static_fields->state == 2 )
  {
    v3 = Method_FriendshipUpItemSelectDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_FriendshipUpItemSelectDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_FriendshipUpItemSelectDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
  FriendshipUpItemSelectDialog_c *v7; // x8
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 v15; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *closeBtnLabel; // x20
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  FriendshipUpItemSelectDialog___c_c *v22; // x0
  struct FriendshipUpItemSelectDialog___c_StaticFields *static_fields; // x8
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v25; // x21
  struct FriendshipUpItemSelectDialog___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_5933D39 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&FriendshipUpItemSelectDialog_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_FriendshipUpItemSelectDialog___c__Open_b__13_0__);
    sub_21FFC50(&FriendshipUpItemSelectDialog___c_TypeInfo);
    sub_21FFC50(&StringLiteral_10647/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_EXPLANATION"*/);
    sub_21FFC50(&StringLiteral_10648/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    byte_5933D39 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v7 = FriendshipUpItemSelectDialog_TypeInfo;
  this->fields.closeCallback = callback;
  v7->static_fields->state = 1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallback,
    (int32_t)callback,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10648/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_TITLE"*/, 0);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0),
        subTitleLabel = this->fields.subTitleLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10647/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_EXPLANATION"*/, 0),
        !subTitleLabel)
    || (UILabel__set_text(subTitleLabel, (System_String_o *)gameObject, 0),
        closeBtnLabel = this->fields.closeBtnLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0),
        !closeBtnLabel) )
  {
LABEL_16:
    sub_21FFECC(gameObject, v6);
  }
  UILabel__set_text(closeBtnLabel, (System_String_o *)gameObject, 0);
  FriendshipUpItemSelectDialog__SetSelectItem(this, v19);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0);
  AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0);
  v22 = FriendshipUpItemSelectDialog___c_TypeInfo;
  if ( !*(&FriendshipUpItemSelectDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemSelectDialog___c_TypeInfo, v20, v21);
    v22 = FriendshipUpItemSelectDialog___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__13_0 = static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !*(&v22->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v22, v20, v21);
      static_fields = FriendshipUpItemSelectDialog___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__13_0, v25, Method_FriendshipUpItemSelectDialog___c__Open_b__13_0__, 0);
    v26 = FriendshipUpItemSelectDialog___c_TypeInfo->static_fields;
    v26->__9__13_0 = _9__13_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v26->__9__13_0, (int32_t)_9__13_0, v27, v28, v29, v30, v31, v32);
  }
  BaseDialog__Open((BaseDialog_o *)this, _9__13_0, 0, 0, 0);
}


void FriendshipUpItemSelectDialog__SetSelectItem(FriendshipUpItemSelectDialog_o *this, const MethodInfo *method)
{
  FriendshipUpItemSelectDialog_SelectItem_o *Instance; // x0
  __int64 v4; // x1
  QuestUseItemInfo_array *CachedAvailableQuestUseItems; // x20
  __int64 v6; // x2
  System_Collections_Generic_IEnumerable_T__o *friendshipUpItemSelectItemArray; // x21
  FriendshipUpItemSelectDialog___c_c *v8; // x0
  struct FriendshipUpItemSelectDialog___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__15_0; // x19
  Il2CppObject *v11; // x20
  struct FriendshipUpItemSelectDialog___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  void *monitor; // x8
  unsigned __int64 v20; // x21
  __int64 v21; // x22
  unsigned __int64 max_length_low; // x9
  struct FriendshipUpItemSelectDialog_SelectItem_array *v23; // x8
  struct FriendshipUpItemSelectDialog_SelectItem_array *v24; // x8
  bool v25; // w1
  UnityEngine_Object_o *grid; // x21
  __int64 v27; // x2
  struct System_Single_array *gridCellWidths; // x21
  struct System_Single_array *v29; // x9
  int v30; // w10
  int v31; // w8
  char *v32; // x9
  FriendshipUpItemSelectDialog_SelectItem_c *klass; // x10
  Il2CppClass *castClass; // x1
  Il2CppClass *element_class; // x2

  if ( (byte_5933D3B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_FriendshipUpItemSelectDialog_SelectItem__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_FriendshipUpItemSelectDialog_SelectItem___);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&Method_FriendshipUpItemSelectDialog___c__SetSelectItem_b__15_0__);
    sub_21FFC50(&FriendshipUpItemSelectDialog___c_TypeInfo);
    byte_5933D3B = 1;
  }
  Instance = (FriendshipUpItemSelectDialog_SelectItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  CachedAvailableQuestUseItems = PartyOrganizationUtility__GetCachedAvailableQuestUseItems(
                                   (PartyOrganizationUtility_o *)Instance,
                                   0);
  Instance = (FriendshipUpItemSelectDialog_SelectItem_o *)BasicHelper__IsNullOrEmpty(
                                                            (System_Collections_ICollection_o *)CachedAvailableQuestUseItems,
                                                            0);
  friendshipUpItemSelectItemArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.friendshipUpItemSelectItemArray;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v8 = FriendshipUpItemSelectDialog___c_TypeInfo;
    if ( !*(&FriendshipUpItemSelectDialog___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemSelectDialog___c_TypeInfo, v4, v6);
      v8 = FriendshipUpItemSelectDialog___c_TypeInfo;
    }
    static_fields = v8->static_fields;
    _9__15_0 = (System_Action_object__o *)static_fields->__9__15_0;
    if ( !_9__15_0 )
    {
      if ( !*(&v8->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v8, v4, v6);
        static_fields = FriendshipUpItemSelectDialog___c_TypeInfo->static_fields;
      }
      v11 = (Il2CppObject *)static_fields->__9;
      _9__15_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_FriendshipUpItemSelectDialog_SelectItem__TypeInfo);
      System_Action_object____ctor(_9__15_0, v11, Method_FriendshipUpItemSelectDialog___c__SetSelectItem_b__15_0__, 0);
      v12 = FriendshipUpItemSelectDialog___c_TypeInfo->static_fields;
      v12->__9__15_0 = (struct System_Action_FriendshipUpItemSelectDialog_SelectItem__o *)_9__15_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->__9__15_0, (int32_t)_9__15_0, v13, v14, v15, v16, v17, v18);
    }
    BasicHelper__ForEach_object_(
      friendshipUpItemSelectItemArray,
      (System_Action_T__o *)_9__15_0,
      (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_FriendshipUpItemSelectDialog_SelectItem___);
    return;
  }
  if ( !friendshipUpItemSelectItemArray )
LABEL_42:
    sub_21FFECC(Instance, v4);
  monitor = friendshipUpItemSelectItemArray[1].monitor;
  if ( (int)monitor >= 1 )
  {
    if ( CachedAvailableQuestUseItems )
    {
      v20 = 0;
      v21 = (unsigned int)monitor;
      while ( 1 )
      {
        max_length_low = LODWORD(CachedAvailableQuestUseItems->max_length);
        v23 = this->fields.friendshipUpItemSelectItemArray;
        if ( (__int64)v20 >= (int)max_length_low )
        {
          if ( !v23 )
            goto LABEL_42;
          if ( v20 >= LODWORD(v23->max_length) )
            goto LABEL_43;
          Instance = v23->m_Items[v20];
          if ( !Instance )
            goto LABEL_42;
          v25 = 0;
        }
        else
        {
          if ( !v23 )
            goto LABEL_42;
          if ( v20 >= LODWORD(v23->max_length) || v20 >= max_length_low )
            goto LABEL_43;
          Instance = v23->m_Items[v20];
          if ( !Instance )
            goto LABEL_42;
          FriendshipUpItemSelectDialog_SelectItem__Set(Instance, CachedAvailableQuestUseItems->m_Items[v20], 0);
          v24 = this->fields.friendshipUpItemSelectItemArray;
          if ( !v24 )
            goto LABEL_42;
          if ( v20 >= LODWORD(v24->max_length) )
            goto LABEL_43;
          Instance = v24->m_Items[v20];
          if ( !Instance )
            goto LABEL_42;
          v25 = 1;
        }
        FriendshipUpItemSelectDialog_SelectItem__SetEnable(Instance, v25, 0);
        if ( v21 == ++v20 )
          goto LABEL_30;
      }
    }
    goto LABEL_42;
  }
LABEL_30:
  grid = (UnityEngine_Object_o *)this->fields.grid;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v6);
  Instance = (FriendshipUpItemSelectDialog_SelectItem_o *)UnityEngine_Object__op_Inequality(grid, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( CachedAvailableQuestUseItems )
    {
      gridCellWidths = this->fields.gridCellWidths;
      if ( gridCellWidths )
      {
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4, v27);
        Instance = (FriendshipUpItemSelectDialog_SelectItem_o *)System_Math__Min_76940292(
                                                                  CachedAvailableQuestUseItems->max_length,
                                                                  gridCellWidths->max_length,
                                                                  0);
        v29 = this->fields.gridCellWidths;
        if ( v29 )
        {
          v30 = (_DWORD)Instance - 1;
          v31 = (int)Instance;
          if ( (unsigned int)((_DWORD)Instance - 1) >= LODWORD(v29->max_length) )
LABEL_43:
            sub_21FFED4(Instance);
          Instance = (FriendshipUpItemSelectDialog_SelectItem_o *)this->fields.grid;
          if ( Instance )
          {
            v32 = (char *)v29 + 4 * v30;
            klass = Instance->klass;
            HIDWORD(Instance[1].klass) = v31;
            element_class = klass[1]._1.element_class;
            castClass = klass[1]._1.castClass;
            LODWORD(Instance[1].monitor) = *((_DWORD *)v32 + 8);
            ((void (__fastcall *)(FriendshipUpItemSelectDialog_SelectItem_o *, Il2CppClass *))element_class)(
              Instance,
              castClass);
            return;
          }
        }
      }
    }
    goto LABEL_42;
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
  bool UseFlag; // w8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  bool v8; // w1
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x20
  struct QuestUseItemInfo_o *v14; // x8
  __int64 v15; // x2
  System_String_o *v16; // x19
  FriendshipUpItemSelectDialog_SelectItem___c_c *v17; // x8
  struct FriendshipUpItemSelectDialog_SelectItem___c_StaticFields *static_fields; // x9
  System_Action_o *_9__5_0; // x22
  System_String_o *v20; // x21
  Il2CppObject *v21; // x23
  struct FriendshipUpItemSelectDialog_SelectItem___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_5933D45 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&FriendshipUpItemSelectDialog_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__);
    sub_21FFC50(&FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo);
    sub_21FFC50(&StringLiteral_10641/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5933D45 = 1;
  }
  if ( FriendshipUpItemSelectDialog_TypeInfo->static_fields->state == 2 )
  {
    info = this->fields.info;
    if ( !info )
      goto LABEL_32;
    UseFlag = QuestUseItemInfo__GetUseFlag(info, 0);
    v5 = Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__;
    if ( UseFlag )
    {
      if ( (*((_BYTE *)Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_21FFC68(Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__);
      v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0);
      info = (QuestUseItemInfo_o *)this->fields.component;
      if ( !info )
        goto LABEL_32;
      FriendshipUpItemUseItem__ChangeButtonState((FriendshipUpItemUseItem_o *)info, 0, v7);
      info = this->fields.info;
      if ( !info )
        goto LABEL_32;
      v8 = 0;
      goto LABEL_18;
    }
    if ( (*((_BYTE *)Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__);
    v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
    info = this->fields.info;
    if ( !info )
      goto LABEL_32;
    if ( QuestUseItemInfo__IsEventPeriod(info, 0) )
    {
      info = (QuestUseItemInfo_o *)this->fields.component;
      if ( !info )
        goto LABEL_32;
      FriendshipUpItemUseItem__ChangeButtonState((FriendshipUpItemUseItem_o *)info, 1, v10);
      info = this->fields.info;
      if ( !info )
        goto LABEL_32;
      v8 = 1;
LABEL_18:
      QuestUseItemInfo__SetUseFlag(info, v8, 0);
      info = (QuestUseItemInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( info )
      {
        PartyOrganizationUtility__SaveQuestUseItemUseState((PartyOrganizationUtility_o *)info, 0);
        return;
      }
LABEL_32:
      sub_21FFECC(info, method);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
    info = (QuestUseItemInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10641/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0);
    v14 = this->fields.info;
    if ( !v14 )
      goto LABEL_32;
    info = (QuestUseItemInfo_o *)System_String__Format(
                                   (System_String_o *)info,
                                   (Il2CppObject *)v14->fields._Name_k__BackingField,
                                   0);
    v16 = (System_String_o *)info;
    v17 = FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo;
    if ( !*(&FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo, method, v15);
      v17 = FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo;
    }
    static_fields = v17->static_fields;
    _9__5_0 = static_fields->__9__5_0;
    v20 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__5_0 )
    {
      if ( !*(&v17->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v17, method, v15);
        static_fields = FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__5_0,
        v21,
        (intptr_t)Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__,
        0);
      v22 = FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo->static_fields;
      v22->__9__5_0 = _9__5_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v22->__9__5_0, (int32_t)_9__5_0, v23, v24, v25, v26, v27, v28);
    }
    if ( !Instance )
      goto LABEL_32;
    CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v20, v16, _9__5_0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0.0, 0, 0);
  }
}


void FriendshipUpItemSelectDialog_SelectItem__Set(
        FriendshipUpItemSelectDialog_SelectItem_o *this,
        QuestUseItemInfo_o *itemInfo,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  FriendshipUpItemUseItem_o *component; // x21
  QuestUseItemInfo_o *info; // x22
  System_Action_o *v12; // x23
  UILabel_o *label; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x4

  if ( (byte_5933D44 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__);
    byte_5933D44 = 1;
  }
  this->fields.info = itemInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.info,
    (int32_t)itemInfo,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  component = this->fields.component;
  info = this->fields.info;
  v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendshipUpItemSelectDialog_SelectItem_ChangeButtonState__,
    0);
  if ( !component
    || (FriendshipUpItemUseItem__SetInit(component, info, 0, v12, v15), !itemInfo)
    || (label = this->fields.label) == 0 )
  {
    sub_21FFECC(label, v14);
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
    sub_21FFECC(component, flag);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)component, flag, 0);
}


void FriendshipUpItemSelectDialog_SelectItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5933D46 & 1) == 0 )
  {
    sub_21FFC50(&FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo);
    byte_5933D46 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo->static_fields->__9 = (struct FriendshipUpItemSelectDialog_SelectItem___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)FriendshipUpItemSelectDialog_SelectItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_5933D47 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__);
    byte_5933D47 = 1;
  }
  v2 = Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__;
  if ( (*((_BYTE *)Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_21FFC68(Method_FriendshipUpItemSelectDialog_SelectItem___c__ChangeButtonState_b__5_0__);
  v3 = (System_Reflection_MethodBase_o *)sub_21FFC34(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void FriendshipUpItemSelectDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5933D48 & 1) == 0 )
  {
    sub_21FFC50(&FriendshipUpItemSelectDialog___c_TypeInfo);
    byte_5933D48 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(FriendshipUpItemSelectDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FriendshipUpItemSelectDialog___c_TypeInfo->static_fields->__9 = (struct FriendshipUpItemSelectDialog___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)FriendshipUpItemSelectDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_5933D49 & 1) == 0 )
  {
    sub_21FFC50(&FriendshipUpItemSelectDialog_TypeInfo);
    byte_5933D49 = 1;
  }
  FriendshipUpItemSelectDialog_TypeInfo->static_fields->state = 2;
}


void FriendshipUpItemSelectDialog___c___SetSelectItem_b__15_0(
        FriendshipUpItemSelectDialog___c_o *this,
        FriendshipUpItemSelectDialog_SelectItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_21FFECC(this, 0);
  FriendshipUpItemSelectDialog_SelectItem__SetEnable(item, 0, method);
}