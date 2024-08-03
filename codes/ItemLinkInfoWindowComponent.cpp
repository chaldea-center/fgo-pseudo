void __fastcall ItemLinkInfoWindowComponent___ctor(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_49FE642 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49FE642 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent__Callback(
        ItemLinkInfoWindowComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct ItemLinkInfoWindowComponent_CallbackFunc_o *v5; // x20
  struct ItemLinkInfoWindowComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ItemLinkInfoWindowComponent__CheckRecommendBoard(
        ItemLinkInfoWindowComponent_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewItem__o **viewList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  char v7; // w22
  _BOOL8 v8; // x0
  Il2CppObject *current; // x8
  int klass; // w9
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FE63C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__Dispose__, viewList);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__GetEnumerator__, v6);
    byte_49FE63C = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !*viewList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)*viewList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__GetEnumerator__);
  v7 = 0;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__MoveNext__);
    if ( !v8 )
      break;
    current = v11.fields._current;
    if ( (v7 & 1) != 0 )
    {
      if ( !v11.fields._current )
        sub_1B64324(v8);
      v7 = 1;
    }
    else
    {
      if ( !v11.fields._current )
        sub_1B64324(v8);
      klass = (int)v11.fields._current[11].klass;
      if ( klass == 2 || klass == 4 )
      {
        v7 = 1;
        BYTE1(v11.fields._current[9].monitor) = 1;
      }
      else
      {
        v7 = 0;
      }
    }
    if ( LODWORD(current[11].klass) == 3 )
      BYTE1(current[9].monitor) = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__Dispose__);
}


void __fastcall ItemLinkInfoWindowComponent__Close(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemLinkInfoWindowComponent__Close_42039124(this, 0LL, v2);
}


void __fastcall ItemLinkInfoWindowComponent__Close_42039124(
        ItemLinkInfoWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_49FE640 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_ItemLinkInfoWindowComponent_EndClose__, v6);
    byte_49FE640 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    this->fields.closeCallbackFunc = callback;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
      (int32_t)callback,
      (int32_t)method,
      v3);
    v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_ItemLinkInfoWindowComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall ItemLinkInfoWindowComponent__CoCreateItemTransitionList(
        ItemLinkInfoWindowComponent_o *this,
        System_Int32_array *itemIdList,
        System_Int32_array *needNumList,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FE637 & 1) == 0 )
  {
    sub_1B640C8(&ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_TypeInfo, itemIdList);
    byte_49FE637 = 1;
  }
  v7 = sub_1B64314(ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_TypeInfo, itemIdList, needNumList);
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21___ctor(
    (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_1B64324(v8);
  *(_QWORD *)(v7 + 48) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 32) = itemIdList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)itemIdList, v11, v12);
  *(_QWORD *)(v7 + 40) = needNumList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)needNumList, v13, v14);
  return (System_Collections_IEnumerator_o *)v7;
}


ItemLinkInfoDetailObject_o *__fastcall ItemLinkInfoWindowComponent__CreateItemLinkInfoDetailObject(
        ItemLinkInfoWindowComponent_o *this,
        ItemEntity_o *itemEnt,
        UnityEngine_GameObject_o *parentObject,
        bool isDispStoneDetail,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v8; // x22
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x8
  Il2CppObject *v12; // x22
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v14; // x21
  ItemLinkInfoDetailObject_o *v15; // x22
  const MethodInfo *v16; // x3

  v8 = this;
  if ( (byte_49FE638 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoDetailObject___, itemEnt);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v9);
    this = (ItemLinkInfoWindowComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    byte_49FE638 = 1;
  }
  v11 = 120LL;
  if ( isDispStoneDetail )
    v11 = 144LL;
  if ( !parentObject )
    goto LABEL_13;
  v12 = *(Il2CppObject **)((char *)&v8->klass + v11);
  transform = UnityEngine_GameObject__get_transform(parentObject, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__Instantiate_object__49003980(
          v12,
          transform,
          (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v14, 0LL, 0LL);
  v15 = 0LL;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v14 )
    {
      this = (ItemLinkInfoWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                (UnityEngine_GameObject_o *)v14,
                                                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoDetailObject___);
      if ( this )
      {
        v15 = (ItemLinkInfoDetailObject_o *)this;
        ItemLinkInfoDetailObject__Setup((ItemLinkInfoDetailObject_o *)this, itemEnt, isDispStoneDetail, v16);
        return v15;
      }
    }
LABEL_13:
    sub_1B64324(this);
  }
  return v15;
}


ItemLinkInfoTextObject_o *__fastcall ItemLinkInfoWindowComponent__CreateListDescriptionObject(
        ItemLinkInfoWindowComponent_o *this,
        UnityEngine_GameObject_o *parentObject,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *listDescriptionObject; // x20
  UnityEngine_Transform_o *transform; // x19
  Il2CppObject *v9; // x19

  v4 = this;
  if ( (byte_49FE63A & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoTextObject___, parentObject);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v5);
    this = (ItemLinkInfoWindowComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49FE63A = 1;
  }
  if ( !parentObject )
    goto LABEL_10;
  listDescriptionObject = (Il2CppObject *)v4->fields.listDescriptionObject;
  transform = UnityEngine_GameObject__get_transform(parentObject, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object__49003980(
         listDescriptionObject,
         transform,
         (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !v9 )
LABEL_10:
    sub_1B64324(this);
  return (ItemLinkInfoTextObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)v9,
                                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoTextObject___);
}


ItemLinkInfoSubHeaderObject_o *__fastcall ItemLinkInfoWindowComponent__CreateSubHeaderObject(
        ItemLinkInfoWindowComponent_o *this,
        UnityEngine_GameObject_o *parentObject,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *subHeaderObject; // x20
  UnityEngine_Transform_o *transform; // x19
  Il2CppObject *v9; // x19

  v4 = this;
  if ( (byte_49FE639 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoSubHeaderObject___, parentObject);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v5);
    this = (ItemLinkInfoWindowComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49FE639 = 1;
  }
  if ( !parentObject )
    goto LABEL_10;
  subHeaderObject = (Il2CppObject *)v4->fields.subHeaderObject;
  transform = UnityEngine_GameObject__get_transform(parentObject, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object__49003980(
         subHeaderObject,
         transform,
         (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !v9 )
LABEL_10:
    sub_1B64324(this);
  return (ItemLinkInfoSubHeaderObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                            (UnityEngine_GameObject_o *)v9,
                                            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoSubHeaderObject___);
}


void __fastcall ItemLinkInfoWindowComponent__EndClose(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ItemLinkInfoWindowComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B6406C(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall ItemLinkInfoWindowComponent__EndOpen(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


int32_t __fastcall ItemLinkInfoWindowComponent__GetTargetId(
        ItemLinkInfoWindowComponent_o *this,
        ItemDropEfficiencyEntity_o *ent,
        const MethodInfo *method)
{
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
  ItemLinkInfoWindowComponent_o *v14; // x20
  System_String_o *basePanel; // x21
  int m_CancellationTokenSource; // w8
  bool v17; // w0
  int32_t v18; // w8
  int32_t v20[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49FE63D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Enum_TryParse_SceneList_Type___, ent);
    sub_1B640C8(&System_Enum_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_8864/*"MasterMission"*/, v6);
    sub_1B640C8(&StringLiteral_8801/*"ManaPrism"*/, v7);
    sub_1B640C8(&StringLiteral_6490/*"FRIEND_POINT"*/, v8);
    sub_1B640C8(&StringLiteral_15502/*"War"*/, v9);
    sub_1B640C8(&StringLiteral_21173/*"mainScenario"*/, v10);
    sub_1B640C8(&StringLiteral_10756/*"PurePrismExchange"*/, v11);
    this = (ItemLinkInfoWindowComponent_o *)sub_1B640C8(&StringLiteral_11097/*"RarePrism"*/, v12);
    byte_49FE63D = 1;
  }
  *(_QWORD *)result = 0LL;
  *(_QWORD *)v20 = 0LL;
  if ( !ent
    || (this = (ItemLinkInfoWindowComponent_o *)ent->fields.transitionParam) == 0LL
    || (this = (ItemLinkInfoWindowComponent_o *)System_String__Split((System_String_o *)this, 0x2Fu, 0, 0LL)) == 0LL )
  {
LABEL_43:
    sub_1B64324(this);
  }
  v14 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_44;
  basePanel = (System_String_o *)this->fields.basePanel;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( !System_Enum__TryParse_Int32Enum__48506184(
          basePanel,
          1,
          &result[1],
          (const MethodInfo_2E42548 *)Method_System_Enum_TryParse_SceneList_Type___) )
    goto LABEL_35;
  if ( result[1] <= 22 )
  {
    if ( result[1] == 20 )
    {
      if ( SLODWORD(v14->fields.m_CancellationTokenSource) >= 2 )
      {
        this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61380516(
                                                  (System_String_o *)v14->fields.basePanelList,
                                                  (System_String_o *)StringLiteral_6490/*"FRIEND_POINT"*/,
                                                  1,
                                                  0LL);
        if ( !(_DWORD)this )
          return (int)this;
        if ( LODWORD(v14->fields.m_CancellationTokenSource) > 1 )
        {
          v17 = System_Int32__TryParse((System_String_o *)v14->fields.basePanelList, v20, 0LL);
          v18 = v20[0];
          goto LABEL_40;
        }
LABEL_44:
        sub_1B6432C(this, v13);
      }
    }
    else
    {
      if ( result[1] != 22 || SLODWORD(v14->fields.m_CancellationTokenSource) < 2 )
        goto LABEL_35;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61380516(
                                                (System_String_o *)v14->fields.basePanelList,
                                                (System_String_o *)StringLiteral_8801/*"ManaPrism"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        goto LABEL_28;
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_44;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61380516(
                                                (System_String_o *)v14->fields.basePanelList,
                                                (System_String_o *)StringLiteral_10756/*"PurePrismExchange"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        goto LABEL_28;
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_44;
      if ( !System_String__Compare_61380516(
              (System_String_o *)v14->fields.basePanelList,
              (System_String_o *)StringLiteral_11097/*"RarePrism"*/,
              1,
              0LL) )
      {
LABEL_28:
        LODWORD(this) = ent->fields.itemId;
        return (int)this;
      }
    }
LABEL_35:
    LODWORD(this) = 0;
    return (int)this;
  }
  if ( result[1] == 72 )
  {
    if ( SLODWORD(v14->fields.m_CancellationTokenSource) >= 2 )
    {
      v17 = System_Int32__TryParse((System_String_o *)v14->fields.basePanelList, result, 0LL);
      v18 = result[0];
      goto LABEL_40;
    }
    goto LABEL_35;
  }
  if ( result[1] != 34 )
    goto LABEL_35;
  m_CancellationTokenSource = (int)v14->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 3 )
  {
    this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61380516(
                                              (System_String_o *)v14->fields.basePanelList,
                                              (System_String_o *)StringLiteral_8864/*"MasterMission"*/,
                                              1,
                                              0LL);
    if ( !(_DWORD)this )
      return (int)this;
    if ( LODWORD(v14->fields.m_CancellationTokenSource) > 2 )
    {
      v17 = System_Int32__TryParse((System_String_o *)v14->fields.baseWindow, &v20[1], 0LL);
      v18 = v20[1];
LABEL_40:
      if ( v17 )
        LODWORD(this) = v18;
      else
        LODWORD(this) = 0;
      return (int)this;
    }
    goto LABEL_44;
  }
  if ( m_CancellationTokenSource != 2
    || System_String__Compare_61380516(
         (System_String_o *)v14->fields.basePanelList,
         (System_String_o *)StringLiteral_15502/*"War"*/,
         1,
         0LL)
    || EntityScriptUtil__GetIntValue(ent->fields.script, (System_String_o *)StringLiteral_21173/*"mainScenario"*/, 0, 0LL) < 1 )
  {
    goto LABEL_35;
  }
  this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_43;
  this = (ItemLinkInfoWindowComponent_o *)QuestTree__GetLatestProgressWarInfo((QuestTree_o *)this, 0LL);
  if ( this )
    LODWORD(this) = *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1);
  return (int)this;
}


int32_t __fastcall ItemLinkInfoWindowComponent__GetTargetValueType(
        ItemLinkInfoWindowComponent_o *this,
        ItemDropEfficiencyEntity_o *ent,
        const MethodInfo *method)
{
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
  __int64 v14; // x1
  ItemLinkInfoWindowComponent_o *v15; // x19
  System_String_o *basePanel; // x21
  int m_CancellationTokenSource; // w8
  int32_t v18; // w20
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49FE63E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Enum_TryParse_SceneList_Type___, ent);
    sub_1B640C8(&System_Enum_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_12836/*"Spot"*/, v6);
    sub_1B640C8(&StringLiteral_8864/*"MasterMission"*/, v7);
    sub_1B640C8(&StringLiteral_8801/*"ManaPrism"*/, v8);
    sub_1B640C8(&StringLiteral_15502/*"War"*/, v9);
    sub_1B640C8(&StringLiteral_21173/*"mainScenario"*/, v10);
    sub_1B640C8(&StringLiteral_10756/*"PurePrismExchange"*/, v11);
    sub_1B640C8(&StringLiteral_11097/*"RarePrism"*/, v12);
    this = (ItemLinkInfoWindowComponent_o *)sub_1B640C8(&StringLiteral_10870/*"Quest"*/, v13);
    byte_49FE63E = 1;
  }
  *(_QWORD *)result = 0LL;
  v20 = 0;
  if ( !ent )
    goto LABEL_47;
  this = (ItemLinkInfoWindowComponent_o *)ent->fields.transitionParam;
  if ( !this )
    goto LABEL_47;
  this = (ItemLinkInfoWindowComponent_o *)System_String__Split((System_String_o *)this, 0x2Fu, 0, 0LL);
  if ( !this )
    goto LABEL_47;
  v15 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_48;
  basePanel = (System_String_o *)this->fields.basePanel;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( !System_Enum__TryParse_Int32Enum__48506184(
          basePanel,
          1,
          &result[1],
          (const MethodInfo_2E42548 *)Method_System_Enum_TryParse_SceneList_Type___) )
    return 0;
  switch ( result[1] )
  {
    case 22:
      if ( SLODWORD(v15->fields.m_CancellationTokenSource) < 2 )
        return 0;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61380516(
                                                (System_String_o *)v15->fields.basePanelList,
                                                (System_String_o *)StringLiteral_8801/*"ManaPrism"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        return 6;
      if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_48;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61380516(
                                                (System_String_o *)v15->fields.basePanelList,
                                                (System_String_o *)StringLiteral_10756/*"PurePrismExchange"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        return 7;
      if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_48;
      if ( System_String__Compare_61380516(
             (System_String_o *)v15->fields.basePanelList,
             (System_String_o *)StringLiteral_11097/*"RarePrism"*/,
             1,
             0LL) )
      {
        return 0;
      }
      return 8;
    case 72:
      if ( SLODWORD(v15->fields.m_CancellationTokenSource) < 2 )
        return 0;
      if ( System_Int32__TryParse((System_String_o *)v15->fields.basePanelList, &v20, 0LL) )
        return 4;
      else
        return 0;
    case 34:
      m_CancellationTokenSource = (int)v15->fields.m_CancellationTokenSource;
      if ( m_CancellationTokenSource < 3 )
      {
        if ( m_CancellationTokenSource != 2
          || System_String__Compare_61380516(
               (System_String_o *)v15->fields.basePanelList,
               (System_String_o *)StringLiteral_15502/*"War"*/,
               1,
               0LL)
          || EntityScriptUtil__GetIntValue(ent->fields.script, (System_String_o *)StringLiteral_21173/*"mainScenario"*/, 0, 0LL) < 1 )
        {
          return 0;
        }
        this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( this )
        {
          if ( !QuestTree__GetLatestProgressWarInfo((QuestTree_o *)this, 0LL) )
            return 0;
          return 3;
        }
LABEL_47:
        sub_1B64324(this);
      }
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61380516(
                                                (System_String_o *)v15->fields.basePanelList,
                                                (System_String_o *)StringLiteral_8864/*"MasterMission"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        return 5;
      if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 2 )
        goto LABEL_48;
      this = (ItemLinkInfoWindowComponent_o *)System_Int32__TryParse(
                                                (System_String_o *)v15->fields.baseWindow,
                                                result,
                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        return 0;
      if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 1 )
LABEL_48:
        sub_1B6432C(this, v14);
      v18 = 1;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61380516(
                                                (System_String_o *)v15->fields.basePanelList,
                                                (System_String_o *)StringLiteral_10870/*"Quest"*/,
                                                1,
                                                0LL);
      if ( (_DWORD)this )
      {
        if ( LODWORD(v15->fields.m_CancellationTokenSource) > 1 )
        {
          this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61380516(
                                                    (System_String_o *)v15->fields.basePanelList,
                                                    (System_String_o *)StringLiteral_12836/*"Spot"*/,
                                                    1,
                                                    0LL);
          if ( !(_DWORD)this )
            return 2;
          if ( LODWORD(v15->fields.m_CancellationTokenSource) > 1 )
          {
            if ( !System_String__Compare_61380516(
                    (System_String_o *)v15->fields.basePanelList,
                    (System_String_o *)StringLiteral_15502/*"War"*/,
                    1,
                    0LL) )
              return 3;
            return 0;
          }
        }
        goto LABEL_48;
      }
      break;
    default:
      return 0;
  }
  return v18;
}


void __fastcall ItemLinkInfoWindowComponent__Init(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleItemNameLabel; // x0

  if ( (byte_49FE633 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FE633 = 1;
  }
  titleItemNameLabel = this->fields.titleItemNameLabel;
  if ( !titleItemNameLabel )
    goto LABEL_9;
  UILabel__set_text(titleItemNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleItemNameLabel = this->fields.titleWindowNameLabel;
  if ( !titleItemNameLabel
    || (UILabel__set_text(titleItemNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleItemNameLabel = (UILabel_o *)this->fields.itemDetailInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleItemNameLabel, 1, 0LL),
        (titleItemNameLabel = (UILabel_o *)this->fields.stoneDetailInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleItemNameLabel, 1, 0LL),
        (titleItemNameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1B64324(titleItemNameLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleItemNameLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


bool __fastcall ItemLinkInfoWindowComponent__IsBoardAcive(
        ItemLinkInfoWindowComponent_o *this,
        System_String_o *sceneInfo,
        const MethodInfo *method)
{
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
  ItemLinkInfoWindowComponent_o *v26; // x19
  System_String_o *basePanel; // x20
  BalanceConfig_c *v28; // x0
  int32_t ClassBoardReleaseQuestId; // w19
  bool v31; // w20
  __int64 v32; // x1
  __int64 v33; // x2
  ItemLinkInfoWindowComponent___c__DisplayClass29_0_o *v34; // x20
  System_Object_array *ListValidData; // x19
  __int64 v36; // x1
  __int64 v37; // x2
  System_Func_object__bool__o *v38; // x21
  MapControl_SpotInfo_o *SpotInfo; // x0
  bool v40; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  int32_t key; // [xsp+14h] [xbp-2Ch] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49FE63F & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, sceneInfo);
    sub_1B640C8(&Method_BasicHelper_Any_GachaEntity___, v4);
    sub_1B640C8(&CoinRoomUtility_TypeInfo, v5);
    sub_1B640C8(&CondType_TypeInfo, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_GachaMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_ShopMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v11);
    sub_1B640C8(&Method_System_Enum_TryParse_SceneList_Type___, v12);
    sub_1B640C8(&System_Enum_TypeInfo, v13);
    sub_1B640C8(&System_Func_GachaEntity__bool__TypeInfo, v14);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v15);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v16);
    sub_1B640C8(&Method_ItemLinkInfoWindowComponent___c__DisplayClass29_0__IsBoardAcive_b__0__, v17);
    sub_1B640C8(&ItemLinkInfoWindowComponent___c__DisplayClass29_0_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_12836/*"Spot"*/, v19);
    sub_1B640C8(&StringLiteral_8864/*"MasterMission"*/, v20);
    sub_1B640C8(&StringLiteral_6490/*"FRIEND_POINT"*/, v21);
    sub_1B640C8(&StringLiteral_15502/*"War"*/, v22);
    sub_1B640C8(&StringLiteral_4534/*"CoinRoom"*/, v23);
    this = (ItemLinkInfoWindowComponent_o *)sub_1B640C8(&StringLiteral_10870/*"Quest"*/, v24);
    byte_49FE63F = 1;
  }
  *(_QWORD *)result = 0LL;
  key = 0;
  entity = 0LL;
  if ( !sceneInfo )
    goto LABEL_63;
  this = (ItemLinkInfoWindowComponent_o *)System_String__Split(sceneInfo, 0x2Fu, 0, 0LL);
  if ( !this )
    goto LABEL_63;
  v26 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_64;
  basePanel = (System_String_o *)this->fields.basePanel;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( !System_Enum__TryParse_Int32Enum__48506184(
          basePanel,
          1,
          &result[1],
          (const MethodInfo_2E42548 *)Method_System_Enum_TryParse_SceneList_Type___) )
    return 0;
  if ( result[1] <= 34 )
  {
    v31 = 0;
    switch ( result[1] )
    {
      case 0x14:
        if ( SLODWORD(v26->fields.m_CancellationTokenSource) < 2
          || System_String__op_Equality(
               (System_String_o *)v26->fields.basePanelList,
               (System_String_o *)StringLiteral_6490/*"FRIEND_POINT"*/,
               0LL)
          || SLODWORD(v26->fields.m_CancellationTokenSource) < 2 )
        {
          return 1;
        }
        v34 = (ItemLinkInfoWindowComponent___c__DisplayClass29_0_o *)sub_1B64314(
                                                                       ItemLinkInfoWindowComponent___c__DisplayClass29_0_TypeInfo,
                                                                       v32,
                                                                       v33);
        ItemLinkInfoWindowComponent___c__DisplayClass29_0___ctor(v34, 0LL);
        if ( LODWORD(v26->fields.m_CancellationTokenSource) <= 1 )
          break;
        if ( !v34 )
          goto LABEL_63;
        System_Int32__TryParse((System_String_o *)v26->fields.basePanelList, &v34->fields.gachaId, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !this )
          goto LABEL_63;
        ListValidData = (System_Object_array *)GachaMaster__getListValidData((GachaMaster_o *)this, 0LL);
        v38 = (System_Func_object__bool__o *)sub_1B64314(System_Func_GachaEntity__bool__TypeInfo, v36, v37);
        System_Func_object__bool____ctor(
          v38,
          (Il2CppObject *)v34,
          Method_ItemLinkInfoWindowComponent___c__DisplayClass29_0__IsBoardAcive_b__0__,
          0LL);
        return BasicHelper__Any_object__48384284(
                 ListValidData,
                 (System_Func_T__bool__o *)v38,
                 (const MethodInfo_2E2491C *)Method_BasicHelper_Any_GachaEntity___);
      case 0x16:
        if ( SLODWORD(v26->fields.m_CancellationTokenSource) < 2 )
          return 1;
        v31 = 1;
        if ( System_String__Compare_61380516(
               (System_String_o *)v26->fields.basePanelList,
               (System_String_o *)StringLiteral_4534/*"CoinRoom"*/,
               1,
               0LL) )
        {
          return v31;
        }
        if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
        return CoinRoomUtility__IsTargetQuestClear(0LL);
      case 0x17:
      case 0x1E:
      case 0x20:
        return 1;
      case 0x22:
        if ( SLODWORD(v26->fields.m_CancellationTokenSource) < 3 )
          return 1;
        v31 = 1;
        this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61380516(
                                                  (System_String_o *)v26->fields.basePanelList,
                                                  (System_String_o *)StringLiteral_8864/*"MasterMission"*/,
                                                  1,
                                                  0LL);
        if ( !(_DWORD)this )
          return v31;
        if ( LODWORD(v26->fields.m_CancellationTokenSource) <= 2 )
          break;
        this = (ItemLinkInfoWindowComponent_o *)System_Int32__TryParse(
                                                  (System_String_o *)v26->fields.baseWindow,
                                                  result,
                                                  0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 1;
        if ( LODWORD(v26->fields.m_CancellationTokenSource) <= 1 )
          break;
        this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61380516(
                                                  (System_String_o *)v26->fields.basePanelList,
                                                  (System_String_o *)StringLiteral_10870/*"Quest"*/,
                                                  1,
                                                  0LL);
        if ( !(_DWORD)this )
        {
          this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( this )
            return clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)this, result[0], 0LL);
          goto LABEL_63;
        }
        if ( LODWORD(v26->fields.m_CancellationTokenSource) > 1 )
        {
          this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61380516(
                                                    (System_String_o *)v26->fields.basePanelList,
                                                    (System_String_o *)StringLiteral_12836/*"Spot"*/,
                                                    1,
                                                    0LL);
          if ( !(_DWORD)this )
          {
            this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( this )
            {
              SpotInfo = QuestTree__GetSpotInfo((QuestTree_o *)this, result[0], 0LL);
              if ( SpotInfo )
                return SpotInfo->fields.dispType == 1;
              return 0;
            }
            goto LABEL_63;
          }
          if ( LODWORD(v26->fields.m_CancellationTokenSource) > 1 )
          {
            v31 = 1;
            if ( System_String__Compare_61380516(
                   (System_String_o *)v26->fields.basePanelList,
                   (System_String_o *)StringLiteral_15502/*"War"*/,
                   1,
                   0LL) )
            {
              return v31;
            }
            this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( this )
              return QuestTree__IsActiveWar((QuestTree_o *)this, result[0], 0LL);
LABEL_63:
            sub_1B64324(this);
          }
        }
        return v40;
      default:
        return v31;
    }
LABEL_64:
    sub_1B6432C(this, v25);
  }
  if ( result[1] != 72 )
  {
    if ( result[1] == 91 )
    {
      v28 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v28 = BalanceConfig_TypeInfo;
      }
      ClassBoardReleaseQuestId = v28->static_fields->ClassBoardReleaseQuestId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsQuestClear_37285996(ClassBoardReleaseQuestId, -1, 0, 0LL);
    }
    return 0;
  }
  if ( SLODWORD(v26->fields.m_CancellationTokenSource) < 2
    || !System_Int32__TryParse((System_String_o *)v26->fields.basePanelList, &key, 0LL) )
  {
    return 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_63;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          key,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !this )
    goto LABEL_63;
  return ShopMaster__IsEventShopOpen((ShopMaster_o *)this, key, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent__OnClickCancel(
        ItemLinkInfoWindowComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemLinkInfoWindowComponent__Callback(this, 0, v2);
}


void __fastcall ItemLinkInfoWindowComponent__Open(
        ItemLinkInfoWindowComponent_o *this,
        ItemEntity_o *itemEnt,
        ItemLinkInfoWindowComponent_CallbackFunc_o *callback,
        bool isDispStoneDetail,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t id; // w24
  System_String_o **p_name; // x8
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x23
  UnityEngine_GameObject_o *v26; // x0
  const MethodInfo *v27; // x4
  ItemLinkInfoDetailObject_o *ItemLinkInfoDetailObject; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  const MethodInfo *v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  System_Action_o *v40; // x20

  if ( (byte_49FE634 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, itemEnt);
    sub_1B640C8(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo, v9);
    sub_1B640C8(&Method_ItemLinkInfoWindowComponent_EndOpen__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo, v13);
    sub_1B640C8(&StringLiteral_1/*""*/, v14);
    byte_49FE634 = 1;
  }
  this->fields.state = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.listViewBg;
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, isDispStoneDetail, 0LL);
  gameObject = this->fields.lineObject;
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, !isDispStoneDetail, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v16, v17);
  if ( itemEnt )
  {
    id = itemEnt->fields.id;
    p_name = &itemEnt->fields.name;
  }
  else
  {
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
    id = 0;
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleItemNameLabel;
  if ( !gameObject )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)gameObject, *p_name, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleWindowNameLabel;
  if ( !gameObject )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
  v25 = sub_1B64314(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo, v23, v24);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_21;
  *(_DWORD *)(v25 + 16) = id;
  gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
  if ( !gameObject )
    goto LABEL_21;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  ItemLinkInfoDetailObject = ItemLinkInfoWindowComponent__CreateItemLinkInfoDetailObject(
                               this,
                               itemEnt,
                               v26,
                               isDispStoneDetail,
                               v27);
  *(_QWORD *)(v25 + 24) = ItemLinkInfoDetailObject;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 24), (int32_t)ItemLinkInfoDetailObject, v29, v30);
  if ( !v22 )
    goto LABEL_21;
  items = v22->fields._items;
  v34 = Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__;
  ++v22->fields._version;
  if ( !items )
    goto LABEL_21;
  size = v22->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      (Il2CppObject *)v25,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    v22->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v25;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), v25, v31, v32);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
  if ( !gameObject )
LABEL_21:
    sub_1B64324(gameObject);
  ItemLinkInfoListViewManager__CreateList(
    (ItemLinkInfoListViewManager_o *)gameObject,
    (System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v22,
    v37);
  v40 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v38, v39);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_ItemLinkInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent__OpenItemTransitionList(
        ItemLinkInfoWindowComponent_o *this,
        System_Int32_array *itemIdList,
        System_Int32_array *needNumList,
        ItemLinkInfoWindowComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x3
  System_Collections_IEnumerator_o *ItemTransitionList; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x20

  if ( (byte_49FE636 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, itemIdList);
    sub_1B640C8(&Method_ItemLinkInfoWindowComponent_EndOpen__, v9);
    byte_49FE636 = 1;
  }
  this->fields.state = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (gameObject = this->fields.listViewBg) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        this->fields.callbackFunc = callback,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.titleItemNameLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
    sub_1B64324(gameObject);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ItemTransitionList = ItemLinkInfoWindowComponent__CoCreateItemTransitionList(this, itemIdList, needNumList, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, ItemTransitionList, 0LL);
  v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ItemLinkInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v17, 0, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent__OpenUserItemInfo(
        ItemLinkInfoWindowComponent_o *this,
        UserItemData_o *itemData,
        ItemLinkInfoWindowComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
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
  __int64 v28; // x1
  __int64 v29; // x1
  int32_t itemId; // w24
  System_Collections_Generic_List_object__o *EnabledListByItemId; // x20
  const MethodInfo *v32; // x4
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o **v35; // x8
  Il2CppObject *Master_object; // x23
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_object__o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x22
  const MethodInfo *v43; // x4
  struct ItemLinkInfoListViewManager_o *listViewManager; // x8
  ItemLinkInfoDetailObject_o *ItemLinkInfoDetailObject; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x1
  __int64 v49; // x2
  System_Collections_Generic_List_object__o *v50; // x24
  __int64 v51; // x1
  __int64 v52; // x2
  int32_t v53; // w24
  __int64 v54; // x25
  int32_t v55; // w2
  int32_t v56; // w3
  Il2CppObject *Item; // x0
  ItemDropEfficiencyEntity_o **v58; // x27
  int32_t v59; // w2
  int32_t v60; // w3
  __int64 v61; // x1
  __int64 v62; // x2
  ItemLinkInfoListViewItem_o *v63; // x28
  const MethodInfo *v64; // x2
  ItemLinkInfoWindowComponent_o **v65; // x26
  int32_t v66; // w2
  int32_t v67; // w3
  int32_t v68; // w2
  int32_t v69; // w3
  int32_t v70; // w1
  int32_t v71; // w2
  int32_t v72; // w3
  struct UnityEngine_GameObject_o *iconName; // x1
  int32_t v74; // w2
  int32_t v75; // w3
  struct UnityEngine_GameObject_o *title; // x1
  const MethodInfo *v77; // x2
  ItemDropEfficiencyEntity_o *v78; // x1
  ItemLinkInfoWindowComponent_o *v79; // x28
  ItemLinkInfoWindowComponent_o *TargetId; // x0
  ItemLinkInfoWindowComponent_o *v81; // x28
  const MethodInfo *v82; // x2
  const MethodInfo *v83; // x2
  ItemLinkInfoWindowComponent_o *v84; // x28
  ItemLinkInfoWindowComponent_o *v85; // x28
  ItemDropEfficiencyEntity_o *v86; // x8
  int32_t v87; // w2
  int32_t v88; // w3
  struct System_String_StaticFields *p_monitor; // x8
  struct System_String_o *Empty; // x1
  ServantStatusBattleListViewItem_o *v91; // x27
  __int64 v92; // x1
  __int64 v93; // x2
  System_Action_o *v94; // x28
  int32_t v95; // w2
  int32_t v96; // w3
  int32_t v97; // w2
  int32_t v98; // w3
  ItemLinkInfoWindowComponent_o *v99; // x1
  struct System_Object_array *items; // x8
  _QWORD *v101; // x9
  __int64 m_CancellationTokenSource_low; // x10
  Il2CppClass **v103; // x8
  System_Collections_Generic_List_object__o *v104; // x20
  const MethodInfo *v105; // x2
  int32_t v106; // w3
  struct ItemLinkInfoListViewManager_o *v107; // x8
  ItemLinkInfoSubHeaderObject_o *SubHeaderObject; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  ItemLinkInfoWindowComponent_o *v111; // x0
  const MethodInfo *v112; // x2
  ItemLinkInfoWindowComponent_o *v113; // x0
  const MethodInfo *v114; // x2
  int32_t v115; // w2
  int32_t v116; // w3
  struct System_Object_array *v117; // x8
  _QWORD *v118; // x9
  __int64 size; // x10
  Il2CppClass **v120; // x0
  const MethodInfo *v121; // x2
  __int64 v122; // x1
  __int64 v123; // x2
  System_Action_o *v124; // x20
  Il2CppObject *v125; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_object__o *v126; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  v6 = this;
  if ( (byte_49FE635 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, itemData);
    sub_1B640C8(&Method_DataManager_GetMaster_ClosedMessageMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_ItemDropEfficiencyMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_ItemMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v11);
    sub_1B640C8(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v12);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_ItemDropEfficiencyEntity___, v13);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, v14);
    sub_1B640C8(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo, v15);
    sub_1B640C8(&ItemLinkInfoListViewItem_TypeInfo, v16);
    sub_1B640C8(&Method_ItemLinkInfoWindowComponent_EndOpen__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem___ctor__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__get_Count__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__get_Item__, v23);
    sub_1B640C8(&System_Collections_Generic_List_ItemLinkInfoListViewItem__TypeInfo, v24);
    sub_1B640C8(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo, v25);
    sub_1B640C8(&string_TypeInfo, v26);
    sub_1B640C8(&Method_ItemLinkInfoWindowComponent___c__DisplayClass19_0__OpenUserItemInfo_b__0__, v27);
    sub_1B640C8(&ItemLinkInfoWindowComponent___c__DisplayClass19_0_TypeInfo, v28);
    this = (ItemLinkInfoWindowComponent_o *)sub_1B640C8(&StringLiteral_1/*""*/, v29);
    byte_49FE635 = 1;
  }
  v126 = 0LL;
  entity = 0LL;
  v125 = 0LL;
  if ( !itemData )
    goto LABEL_62;
  itemId = itemData->fields.itemId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this )
    goto LABEL_62;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    itemId,
    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemDropEfficiencyMaster___);
  if ( !this )
    goto LABEL_62;
  EnabledListByItemId = (System_Collections_Generic_List_object__o *)ItemDropEfficiencyMaster__GetEnabledListByItemId(
                                                                       (ItemDropEfficiencyMaster_o *)this,
                                                                       itemId,
                                                                       0LL);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)EnabledListByItemId,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_ItemDropEfficiencyEntity___) )
  {
    v6->fields.state = 1;
    this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
    if ( !this )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (ItemLinkInfoWindowComponent_o *)v6->fields.listViewBg;
    if ( !this )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (ItemLinkInfoWindowComponent_o *)v6->fields.lineObject;
    if ( !this )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v6->fields.callbackFunc = callback;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.callbackFunc, (int32_t)callback, v33, v34);
    this = (ItemLinkInfoWindowComponent_o *)v6->fields.titleItemNameLabel;
    if ( !this )
      goto LABEL_62;
    v35 = (System_String_o **)(entity ? &entity[1].monitor : &StringLiteral_1/*""*/);
    UILabel__set_text((UILabel_o *)this, *v35, 0LL);
    this = (ItemLinkInfoWindowComponent_o *)v6->fields.titleWindowNameLabel;
    if ( !this )
      goto LABEL_62;
    this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
    v39 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo,
                                                         v37,
                                                         v38);
    System_Collections_Generic_List_object____ctor(
      v39,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
    v42 = sub_1B64314(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo, v40, v41);
    System_Object___ctor((Il2CppObject *)v42, 0LL);
    if ( !v42 )
      goto LABEL_62;
    *(_DWORD *)(v42 + 16) = itemId;
    listViewManager = v6->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_62;
    ItemLinkInfoDetailObject = ItemLinkInfoWindowComponent__CreateItemLinkInfoDetailObject(
                                 v6,
                                 (ItemEntity_o *)entity,
                                 listViewManager->fields.listParent,
                                 0,
                                 v43);
    *(_QWORD *)(v42 + 24) = ItemLinkInfoDetailObject;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 24), (int32_t)ItemLinkInfoDetailObject, v46, v47);
    v50 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_ItemLinkInfoListViewItem__TypeInfo,
                                                         v48,
                                                         v49);
    System_Collections_Generic_List_object____ctor(
      v50,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem___ctor__);
    v126 = v50;
    if ( !EnabledListByItemId )
      goto LABEL_62;
    if ( EnabledListByItemId->fields._size >= 1 )
    {
      v53 = 0;
      do
      {
        v54 = sub_1B64314(ItemLinkInfoWindowComponent___c__DisplayClass19_0_TypeInfo, v51, v52);
        ItemLinkInfoWindowComponent___c__DisplayClass19_0___ctor(
          (ItemLinkInfoWindowComponent___c__DisplayClass19_0_o *)v54,
          0LL);
        if ( !v54 )
          goto LABEL_62;
        *(_QWORD *)(v54 + 32) = v6;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 32), (int32_t)v6, v55, v56);
        Item = System_Collections_Generic_List_object___get_Item(
                 EnabledListByItemId,
                 v53,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__get_Item__);
        *(_QWORD *)(v54 + 16) = Item;
        v58 = (ItemDropEfficiencyEntity_o **)(v54 + 16);
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 16), (int32_t)Item, v59, v60);
        v63 = (ItemLinkInfoListViewItem_o *)sub_1B64314(ItemLinkInfoListViewItem_TypeInfo, v61, v62);
        ItemLinkInfoListViewItem___ctor(v63, v53, v64);
        *(_QWORD *)(v54 + 24) = v63;
        v65 = (ItemLinkInfoWindowComponent_o **)(v54 + 24);
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 24), (int32_t)v63, v66, v67);
        this = *(ItemLinkInfoWindowComponent_o **)(v54 + 24);
        if ( !this )
          goto LABEL_62;
        v70 = (int)entity;
        this->fields.listDescriptionObject = (struct UnityEngine_GameObject_o *)entity;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.listDescriptionObject, v70, v68, v69);
        if ( !*v58 )
          goto LABEL_62;
        this = *v65;
        if ( !*v65 )
          goto LABEL_62;
        iconName = (struct UnityEngine_GameObject_o *)(*v58)->fields.iconName;
        this->fields.lineObject = iconName;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.lineObject, (int32_t)iconName, v71, v72);
        if ( !*v58 )
          goto LABEL_62;
        this = *v65;
        if ( !*v65 )
          goto LABEL_62;
        title = (struct UnityEngine_GameObject_o *)(*v58)->fields.title;
        this->fields.itemDetailInfo = title;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.itemDetailInfo, (int32_t)title, v74, v75);
        v78 = *v58;
        if ( !*v58 )
          goto LABEL_62;
        v79 = *v65;
        if ( !*v65 )
          goto LABEL_62;
        LODWORD(v79->fields.callbackFunc) = v78->fields.targetType;
        TargetId = (ItemLinkInfoWindowComponent_o *)ItemLinkInfoWindowComponent__GetTargetId(this, v78, v77);
        LODWORD(v79->fields.subHeaderObject) = (_DWORD)TargetId;
        v81 = *v65;
        this = (ItemLinkInfoWindowComponent_o *)ItemLinkInfoWindowComponent__GetTargetValueType(TargetId, *v58, v82);
        if ( !v81 )
          goto LABEL_62;
        HIDWORD(v81->fields.subHeaderObject) = (_DWORD)this;
        if ( !*v58 )
          goto LABEL_62;
        v84 = *v65;
        this = (ItemLinkInfoWindowComponent_o *)ItemLinkInfoWindowComponent__IsBoardAcive(
                                                  this,
                                                  (*v58)->fields.transitionParam,
                                                  v83);
        if ( !v84 )
          goto LABEL_62;
        LOBYTE(v84->fields.closeBtnObject) = ((unsigned __int8)this & 1) == 0;
        v85 = *v65;
        if ( !*v65 )
          goto LABEL_62;
        BYTE2(v85->fields.closeBtnObject) = 0;
        v86 = *v58;
        if ( !*v58 )
          goto LABEL_62;
        HIDWORD(v85->fields.stoneDetailInfo) = v86->fields.priority;
        if ( !Master_object )
          goto LABEL_62;
        this = (ItemLinkInfoWindowComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                  &v125,
                                                  v86->fields.closedMessageId,
                                                  (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v125 )
            goto LABEL_62;
          p_monitor = (struct System_String_StaticFields *)&v125[1].monitor;
        }
        else
        {
          p_monitor = string_TypeInfo->static_fields;
        }
        Empty = p_monitor->Empty;
        v85->fields.listViewManager = (struct ItemLinkInfoListViewManager_o *)p_monitor->Empty;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v85->fields.listViewManager, (int32_t)Empty, v87, v88);
        v91 = *(ServantStatusBattleListViewItem_o **)(v54 + 24);
        v94 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v92, v93);
        System_Action___ctor(
          v94,
          (Il2CppObject *)v54,
          Method_ItemLinkInfoWindowComponent___c__DisplayClass19_0__OpenUserItemInfo_b__0__,
          0LL);
        if ( !v91 )
          goto LABEL_62;
        v91[1].klass = (ServantStatusBattleListViewItem_c *)v94;
        sub_1B6406C(v91 + 1, (int32_t)v94, v95, v96);
        this = (ItemLinkInfoWindowComponent_o *)v126;
        if ( !v126 )
          goto LABEL_62;
        v99 = *v65;
        items = v126->fields._items;
        v101 = Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__;
        ++v126->fields._version;
        if ( !items )
          goto LABEL_62;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v99,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
        }
        else
        {
          v103 = &items->obj.klass + m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          v103[4] = (Il2CppClass *)v99;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v103 + 4), (int32_t)v99, v97, v98);
        }
      }
      while ( ++v53 < EnabledListByItemId->fields._size );
    }
    v104 = v126;
    this = (ItemLinkInfoWindowComponent_o *)System_Linq_Enumerable__Any_object_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)v126,
                                              (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v107 = v6->fields.listViewManager;
      if ( !v107 )
        goto LABEL_62;
      SubHeaderObject = ItemLinkInfoWindowComponent__CreateSubHeaderObject(v6, v107->fields.listParent, v105);
      *(_QWORD *)(v42 + 32) = SubHeaderObject;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 32), (int32_t)SubHeaderObject, v109, v110);
      ItemLinkInfoWindowComponent__SortViewItemList(
        v111,
        (System_Collections_Generic_List_ItemLinkInfoListViewItem__o **)&v126,
        v112);
      ItemLinkInfoWindowComponent__CheckRecommendBoard(
        v113,
        (System_Collections_Generic_List_ItemLinkInfoListViewItem__o **)&v126,
        v114);
      v104 = v126;
    }
    *(_QWORD *)(v42 + 48) = v104;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 48), (int32_t)v104, (int32_t)v105, v106);
    if ( !v39 )
      goto LABEL_62;
    v117 = v39->fields._items;
    v118 = Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__;
    ++v39->fields._version;
    if ( !v117 )
      goto LABEL_62;
    size = v39->fields._size;
    if ( (unsigned int)size >= v117->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v39,
        (Il2CppObject *)v42,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
    }
    else
    {
      v120 = &v117->obj.klass + size;
      v39->fields._size = size + 1;
      v120[4] = (Il2CppClass *)v42;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v120 + 4), v42, v115, v116);
    }
    this = (ItemLinkInfoWindowComponent_o *)v6->fields.listViewManager;
    if ( !this )
LABEL_62:
      sub_1B64324(this);
    ItemLinkInfoListViewManager__CreateList(
      (ItemLinkInfoListViewManager_o *)this,
      (System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v39,
      v121);
    v124 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v122, v123);
    System_Action___ctor(v124, (Il2CppObject *)v6, Method_ItemLinkInfoWindowComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)v6, v124, 0, 0LL);
  }
  else
  {
    ItemLinkInfoWindowComponent__Open(v6, (ItemEntity_o *)entity, callback, 0, v32);
  }
}


void __fastcall ItemLinkInfoWindowComponent__SortViewItemList(
        ItemLinkInfoWindowComponent_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewItem__o **viewList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ItemLinkInfoWindowComponent___c_c *v12; // x0
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v13; // x20
  System_Func_object__int__o *_9__25_0; // x21
  Il2CppObject *v15; // x22
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  ItemLinkInfoWindowComponent___c_c *v22; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v23; // x20
  System_Func_object__int__o *_9__25_1; // x21
  Il2CppObject *v25; // x22
  struct ItemLinkInfoWindowComponent___c_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  ItemLinkInfoWindowComponent___c_c *v32; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v33; // x20
  System_Func_object__int__o *_9__25_2; // x21
  Il2CppObject *v35; // x22
  struct ItemLinkInfoWindowComponent___c_StaticFields *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3

  if ( (byte_49FE63B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_ItemLinkInfoListViewItem__int___, viewList);
    sub_1B640C8(&Method_System_Linq_Enumerable_ThenByDescending_ItemLinkInfoListViewItem__int___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_ThenBy_ItemLinkInfoListViewItem__int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_ItemLinkInfoListViewItem___, v6);
    sub_1B640C8(&System_Func_ItemLinkInfoListViewItem__int__TypeInfo, v7);
    sub_1B640C8(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__25_0__, v8);
    sub_1B640C8(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__25_1__, v9);
    sub_1B640C8(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__25_2__, v10);
    sub_1B640C8(&ItemLinkInfoWindowComponent___c_TypeInfo, v11);
    byte_49FE63B = 1;
  }
  v12 = ItemLinkInfoWindowComponent___c_TypeInfo;
  v13 = *viewList;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
    v12 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__25_0 = (System_Func_object__int__o *)v12->static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__25_0 = (System_Func_object__int__o *)sub_1B64314(
                                               System_Func_ItemLinkInfoListViewItem__int__TypeInfo,
                                               viewList,
                                               method);
    System_Func_object__int____ctor(
      _9__25_0,
      v15,
      Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__25_0__,
      0LL);
    static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__25_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__25_0, (int32_t)_9__25_0, v17, v18);
  }
  v19 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v13,
          (System_Func_TSource__TKey__o *)_9__25_0,
          (const MethodInfo_2E63584 *)Method_System_Linq_Enumerable_OrderByDescending_ItemLinkInfoListViewItem__int___);
  v22 = ItemLinkInfoWindowComponent___c_TypeInfo;
  v23 = v19;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
    v22 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__25_1 = (System_Func_object__int__o *)v22->static_fields->__9__25_1;
  if ( !_9__25_1 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__25_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_ItemLinkInfoListViewItem__int__TypeInfo, v20, v21);
    System_Func_object__int____ctor(
      _9__25_1,
      v25,
      Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__25_1__,
      0LL);
    v26 = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    v26->__9__25_1 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__25_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->__9__25_1, (int32_t)_9__25_1, v27, v28);
  }
  v29 = System_Linq_Enumerable__ThenBy_object__int_(
          v23,
          (System_Func_TSource__TKey__o *)_9__25_1,
          (const MethodInfo_2E709F0 *)Method_System_Linq_Enumerable_ThenBy_ItemLinkInfoListViewItem__int___);
  v32 = ItemLinkInfoWindowComponent___c_TypeInfo;
  v33 = v29;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
    v32 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__25_2 = (System_Func_object__int__o *)v32->static_fields->__9__25_2;
  if ( !_9__25_2 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__25_2 = (System_Func_object__int__o *)sub_1B64314(System_Func_ItemLinkInfoListViewItem__int__TypeInfo, v30, v31);
    System_Func_object__int____ctor(
      _9__25_2,
      v35,
      Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__25_2__,
      0LL);
    v36 = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    v36->__9__25_2 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__25_2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v36->__9__25_2, (int32_t)_9__25_2, v37, v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__int_(
                                                               v33,
                                                               (System_Func_TSource__TKey__o *)_9__25_2,
                                                               (const MethodInfo_2E70DEC *)Method_System_Linq_Enumerable_ThenByDescending_ItemLinkInfoListViewItem__int___);
  v40 = (System_Collections_Generic_List_ItemLinkInfoListViewItem__o *)System_Linq_Enumerable__ToList_object_(
                                                                         v39,
                                                                         (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_ItemLinkInfoListViewItem___);
  *viewList = v40;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)viewList, (int32_t)v40, v41, v42);
}


void __fastcall ItemLinkInfoWindowComponent___OpenUserItemInfo_b__19_1(
        ItemLinkInfoWindowComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemLinkInfoWindowComponent__Close_42039124(this, 0LL, v2);
}


void __fastcall ItemLinkInfoWindowComponent__add_callbackFunc(
        ItemLinkInfoWindowComponent_o *this,
        ItemLinkInfoWindowComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ItemLinkInfoWindowComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ItemLinkInfoWindowComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ItemLinkInfoWindowComponent_o *v11; // x0
  ItemLinkInfoWindowComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_49FE631 & 1) == 0 )
  {
    sub_1B640C8(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, value);
    byte_49FE631 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ItemLinkInfoWindowComponent_CallbackFunc_c *)v8->klass != ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
  ItemLinkInfoWindowComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall ItemLinkInfoWindowComponent__get_closeBtnPath(
        ItemLinkInfoWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FE641 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_7555/*"InfoWindow/CloseBtn"*/, method);
    byte_49FE641 = 1;
  }
  return (System_String_o *)StringLiteral_7555/*"InfoWindow/CloseBtn"*/;
}


void __fastcall ItemLinkInfoWindowComponent__remove_callbackFunc(
        ItemLinkInfoWindowComponent_o *this,
        ItemLinkInfoWindowComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ItemLinkInfoWindowComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ItemLinkInfoWindowComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ItemLinkInfoWindowComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_49FE632 & 1) == 0 )
  {
    sub_1B640C8(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, value);
    byte_49FE632 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ItemLinkInfoWindowComponent_CallbackFunc_c *)v8->klass != ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
  ItemLinkInfoWindowComponent__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemLinkInfoWindowComponent_CallbackFunc___ctor(
        ItemLinkInfoWindowComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19AEFE4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AEF9C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ItemLinkInfoWindowComponent_CallbackFunc__BeginInvoke(
        ItemLinkInfoWindowComponent_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_49FEE2C & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, result);
    byte_49FEE2C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall ItemLinkInfoWindowComponent_CallbackFunc__EndInvoke(
        ItemLinkInfoWindowComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall ItemLinkInfoWindowComponent_CallbackFunc__Invoke(
        ItemLinkInfoWindowComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21___ctor(
        ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21__MoveNext(
        ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *this,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *v2; // x19
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
  int32_t _1__state; // w8
  struct ItemLinkInfoWindowComponent_o *_4__this; // x20
  Il2CppObject *Master_object; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_List_object__o *v37; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  int v40; // w8
  int32_t v41; // w22
  __int64 v42; // x2
  struct System_Int32_array *itemIdList; // x9
  int max_length; // w10
  bool result; // w0
  struct System_Int32_array *needNumList; // x8
  __int64 i_5__6; // x9
  int v48; // w10
  int32_t v49; // w28
  __int64 v50; // x21
  int32_t v51; // w2
  int32_t v52; // w3
  __int64 v53; // x1
  __int64 v54; // x2
  System_Collections_Generic_List_object__o *v55; // x23
  __int64 v56; // x1
  __int64 v57; // x2
  System_Collections_Generic_List_object__o *v58; // x22
  int32_t v59; // w23
  __int64 v60; // x24
  int32_t v61; // w2
  int32_t v62; // w3
  ItemDropEfficiencyEntity_o **v63; // x26
  __int64 v64; // x1
  __int64 v65; // x2
  ItemLinkInfoListViewItem_o *v66; // x27
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o **v67; // x25
  int32_t v68; // w2
  int32_t v69; // w3
  int32_t v70; // w2
  int32_t v71; // w3
  int32_t v72; // w1
  int32_t v73; // w2
  int32_t v74; // w3
  struct System_String_o *iconName; // x1
  int32_t v76; // w2
  int32_t v77; // w3
  Il2CppObject *title; // x1
  ItemDropEfficiencyEntity_o *v79; // x1
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *v80; // x27
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *v81; // x27
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *v82; // x27
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *v83; // x27
  ItemDropEfficiencyEntity_o *v84; // x8
  int32_t v85; // w2
  int32_t v86; // w3
  struct System_String_StaticFields *p_monitor; // x8
  struct System_String_o *Empty; // x1
  ServantStatusBattleListViewItem_o *v89; // x26
  __int64 v90; // x1
  __int64 v91; // x2
  System_Action_o *v92; // x27
  int32_t v93; // w2
  int32_t v94; // w3
  int32_t v95; // w2
  int32_t v96; // w3
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *v97; // x1
  struct System_Object_array *items; // x8
  _QWORD *v99; // x9
  __int64 _2__current_low; // x10
  Il2CppClass **v101; // x8
  System_Collections_Generic_List_object__o *v102; // x22
  int32_t v103; // w2
  int32_t v104; // w3
  struct ItemLinkInfoListViewManager_o *listViewManager; // x8
  ItemLinkInfoTextObject_o *ListDescriptionObject; // x0
  int32_t v107; // w2
  int32_t v108; // w3
  int32_t v109; // w2
  int32_t v110; // w3
  __int64 v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  __int64 v114; // x8
  int32_t v115; // w2
  int32_t v116; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  Il2CppObject *v118; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_object__o *v119; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_49FEE31 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_ClosedMessageMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_ItemDropEfficiencyMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_1B640C8(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, v9);
    sub_1B640C8(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo, v10);
    sub_1B640C8(&ItemLinkInfoListViewItem_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem___ctor__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__get_Count__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__get_Item__, v18);
    sub_1B640C8(&System_Collections_Generic_List_ItemLinkInfoListViewItem__TypeInfo, v19);
    sub_1B640C8(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo, v20);
    sub_1B640C8(&string_TypeInfo, v21);
    sub_1B640C8(&Method_ItemLinkInfoWindowComponent___c__DisplayClass21_0__CoCreateItemTransitionList_b__0__, v22);
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *)sub_1B640C8(
                                                                                &ItemLinkInfoWindowComponent___c__DisplayClass21_0_TypeInfo,
                                                                                v23);
    byte_49FEE31 = 1;
  }
  v119 = 0LL;
  entity = 0LL;
  v118 = 0LL;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    goto LABEL_12;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemMaster___);
  v2->fields._itemMst_5__2 = (struct ItemMaster_o *)Master_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._itemMst_5__2, (int32_t)Master_object, v27, v28);
  v29 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  v2->fields._closedMessageMst_5__3 = (struct ClosedMessageMaster_o *)v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._closedMessageMst_5__3, (int32_t)v29, v30, v31);
  v32 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemDropEfficiencyMaster___);
  v2->fields._itemDropEfficiencyMst_5__4 = (struct ItemDropEfficiencyMaster_o *)v32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._itemDropEfficiencyMst_5__4, (int32_t)v32, v33, v34);
  v37 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo,
                                                       v35,
                                                       v36);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
  v2->fields._groupList_5__5 = (struct System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v37;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._groupList_5__5, (int32_t)v37, v38, v39);
  v40 = 0;
  for ( v2->fields._i_5__6 = 0; ; v2->fields._i_5__6 = v40 )
  {
    itemIdList = v2->fields.itemIdList;
    if ( !itemIdList )
      goto LABEL_71;
    max_length = itemIdList->max_length;
    if ( v40 >= max_length )
    {
      if ( !_4__this )
        goto LABEL_71;
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *)_4__this->fields.listViewManager;
      if ( !this )
        goto LABEL_71;
      ItemLinkInfoListViewManager__CreateList((ItemLinkInfoListViewManager_o *)this, v2->fields._groupList_5__5, 0LL);
      return 0;
    }
    if ( v40 >= (unsigned int)max_length )
      goto LABEL_72;
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *)v2->fields._itemMst_5__2;
    if ( !this )
      goto LABEL_71;
    v41 = itemIdList->m_Items[v40 + 1];
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                &entity,
                                                                                v41,
                                                                                (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_12:
    v40 = v2->fields._i_5__6 + 1;
  }
  needNumList = v2->fields.needNumList;
  if ( !needNumList )
    goto LABEL_71;
  i_5__6 = v2->fields._i_5__6;
  v48 = needNumList->max_length;
  if ( (int)i_5__6 >= v48 )
  {
    v49 = 0;
  }
  else
  {
    if ( (unsigned int)i_5__6 >= v48 )
LABEL_72:
      sub_1B6432C(this, method);
    v49 = needNumList->m_Items[i_5__6 + 1];
  }
  v50 = sub_1B64314(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo, method, v42);
  ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor((ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)v50, 0LL);
  if ( !v50 )
    goto LABEL_71;
  *(_QWORD *)(v50 + 24) = 0LL;
  *(_DWORD *)(v50 + 16) = v41;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v50 + 24), 0, v51, v52);
  v55 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ItemLinkInfoListViewItem__TypeInfo,
                                                       v53,
                                                       v54);
  System_Collections_Generic_List_object____ctor(
    v55,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem___ctor__);
  v119 = v55;
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *)v2->fields._itemDropEfficiencyMst_5__4;
  if ( !this
    || (this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *)ItemDropEfficiencyMaster__GetEnabledListByItemId(
                                                                                    (ItemDropEfficiencyMaster_o *)this,
                                                                                    v41,
                                                                                    0LL)) == 0LL )
  {
LABEL_71:
    sub_1B64324(this);
  }
  v58 = (System_Collections_Generic_List_object__o *)this;
  if ( SLODWORD(this->fields.__2__current) >= 1 )
  {
    v59 = 0;
    do
    {
      v60 = sub_1B64314(ItemLinkInfoWindowComponent___c__DisplayClass21_0_TypeInfo, v56, v57);
      System_Object___ctor((Il2CppObject *)v60, 0LL);
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *)System_Collections_Generic_List_object___get_Item(
                                                                                  v58,
                                                                                  v59,
                                                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__get_Item__);
      if ( !v60 )
        goto LABEL_71;
      *(_QWORD *)(v60 + 16) = this;
      v63 = (ItemDropEfficiencyEntity_o **)(v60 + 16);
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v60 + 16), (int32_t)this, v61, v62);
      v66 = (ItemLinkInfoListViewItem_o *)sub_1B64314(ItemLinkInfoListViewItem_TypeInfo, v64, v65);
      ItemLinkInfoListViewItem___ctor(v66, v59, 0LL);
      *(_QWORD *)(v60 + 24) = v66;
      v67 = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o **)(v60 + 24);
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v60 + 24), (int32_t)v66, v68, v69);
      this = *(ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o **)(v60 + 24);
      if ( !this )
        goto LABEL_71;
      v72 = (int)entity;
      this[1].fields.needNumList = (struct System_Int32_array *)entity;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this[1].fields.needNumList, v72, v70, v71);
      this = *v67;
      if ( !*v67 )
        goto LABEL_71;
      LODWORD(this[1].fields.__4__this) = v49;
      if ( !*v63 )
        goto LABEL_71;
      iconName = (*v63)->fields.iconName;
      *(_QWORD *)&this[1].fields.__1__state = iconName;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this[1].fields, (int32_t)iconName, v73, v74);
      if ( !*v63 )
        goto LABEL_71;
      this = *v67;
      if ( !*v67 )
        goto LABEL_71;
      title = (Il2CppObject *)(*v63)->fields.title;
      this[1].fields.__2__current = title;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this[1].fields.__2__current, (int32_t)title, v76, v77);
      v79 = *v63;
      if ( !*v63 )
        goto LABEL_71;
      v80 = *v67;
      if ( !*v67 )
        goto LABEL_71;
      LODWORD(v80[1].fields._groupList_5__5) = v79->fields.targetType;
      if ( !_4__this )
        goto LABEL_71;
      LODWORD(v80[1].fields.itemIdList) = ItemLinkInfoWindowComponent__GetTargetId(_4__this, v79, 0LL);
      v81 = *v67;
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *)ItemLinkInfoWindowComponent__GetTargetValueType(
                                                                                  _4__this,
                                                                                  *v63,
                                                                                  0LL);
      if ( !v81 )
        goto LABEL_71;
      HIDWORD(v81[1].fields.itemIdList) = (_DWORD)this;
      if ( !*v63 )
        goto LABEL_71;
      v82 = *v67;
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *)ItemLinkInfoWindowComponent__IsBoardAcive(
                                                                                  _4__this,
                                                                                  (*v63)->fields.transitionParam,
                                                                                  0LL);
      if ( !v82 )
        goto LABEL_71;
      LOBYTE(v82[1].fields._itemMst_5__2) = ((unsigned __int8)this & 1) == 0;
      v83 = *v67;
      if ( !*v67 )
        goto LABEL_71;
      BYTE2(v83[1].fields._itemMst_5__2) = 1;
      v84 = *v63;
      if ( !*v63 )
        goto LABEL_71;
      HIDWORD(v83[1].fields.__4__this) = v84->fields.priority;
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *)v2->fields._closedMessageMst_5__3;
      if ( !this )
        goto LABEL_71;
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                  &v118,
                                                                                  v84->fields.closedMessageId,
                                                                                  (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v118 )
          goto LABEL_71;
        p_monitor = (struct System_String_StaticFields *)&v118[1].monitor;
      }
      else
      {
        p_monitor = string_TypeInfo->static_fields;
      }
      Empty = p_monitor->Empty;
      v83[1].fields._closedMessageMst_5__3 = (struct ClosedMessageMaster_o *)p_monitor->Empty;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v83[1].fields._closedMessageMst_5__3, (int32_t)Empty, v85, v86);
      v89 = *(ServantStatusBattleListViewItem_o **)(v60 + 24);
      v92 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v90, v91);
      System_Action___ctor(
        v92,
        (Il2CppObject *)v60,
        Method_ItemLinkInfoWindowComponent___c__DisplayClass21_0__CoCreateItemTransitionList_b__0__,
        0LL);
      if ( !v89 )
        goto LABEL_71;
      v89[1].klass = (ServantStatusBattleListViewItem_c *)v92;
      sub_1B6406C(v89 + 1, (int32_t)v92, v93, v94);
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *)v119;
      if ( !v119 )
        goto LABEL_71;
      v97 = *v67;
      items = v119->fields._items;
      v99 = Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__;
      ++v119->fields._version;
      if ( !items )
        goto LABEL_71;
      _2__current_low = SLODWORD(this->fields.__2__current);
      if ( (unsigned int)_2__current_low >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v97,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
      }
      else
      {
        v101 = &items->obj.klass + _2__current_low;
        LODWORD(this->fields.__2__current) = _2__current_low + 1;
        v101[4] = (Il2CppClass *)v97;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v101 + 4), (int32_t)v97, v95, v96);
      }
    }
    while ( ++v59 < v58->fields._size );
  }
  v102 = v119;
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *)System_Linq_Enumerable__Any_object_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v119,
                                                                              (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v2->fields._i_5__6 )
    {
      if ( !_4__this )
        goto LABEL_71;
    }
    else
    {
      if ( !_4__this )
        goto LABEL_71;
      listViewManager = _4__this->fields.listViewManager;
      if ( !listViewManager )
        goto LABEL_71;
      ListDescriptionObject = ItemLinkInfoWindowComponent__CreateListDescriptionObject(
                                _4__this,
                                listViewManager->fields.listParent,
                                0LL);
      *(_QWORD *)(v50 + 40) = ListDescriptionObject;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v50 + 40), (int32_t)ListDescriptionObject, v107, v108);
    }
    ItemLinkInfoWindowComponent__SortViewItemList(
      _4__this,
      (System_Collections_Generic_List_ItemLinkInfoListViewItem__o **)&v119,
      0LL);
    ItemLinkInfoWindowComponent__CheckRecommendBoard(
      _4__this,
      (System_Collections_Generic_List_ItemLinkInfoListViewItem__o **)&v119,
      0LL);
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *)v119;
    if ( !v119 )
      goto LABEL_71;
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *)System_Collections_Generic_List_object___get_Item(
                                                                                v119,
                                                                                0,
                                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    if ( !this )
      goto LABEL_71;
    BYTE4(this[1].fields._groupList_5__5) = 1;
    v102 = v119;
  }
  *(_QWORD *)(v50 + 48) = v102;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v50 + 48), (int32_t)v102, v103, v104);
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *)v2->fields._groupList_5__5;
  if ( !this )
    goto LABEL_71;
  v111 = *(_QWORD *)&this->fields.__1__state;
  v112 = Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__;
  ++HIDWORD(this->fields.__2__current);
  if ( !v111 )
    goto LABEL_71;
  v113 = SLODWORD(this->fields.__2__current);
  if ( (unsigned int)v113 >= *(_DWORD *)(v111 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v50,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
  }
  else
  {
    v114 = v111 + 8 * v113;
    LODWORD(this->fields.__2__current) = v113 + 1;
    *(_QWORD *)(v114 + 32) = v50;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v114 + 32), v50, v109, v110);
  }
  v2->fields.__2__current = 0LL;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B6406C(p__2__current, 0, v115, v116);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return result;
}


Il2CppObject *__fastcall ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21__System_Collections_IEnumerator_Reset(
        ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21__System_Collections_IEnumerator_get_Current(
        ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21__System_IDisposable_Dispose(
        ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__21_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ItemLinkInfoWindowComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FEE2D & 1) == 0 )
  {
    sub_1B640C8(&ItemLinkInfoWindowComponent___c_TypeInfo, v1);
    byte_49FEE2D = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ItemLinkInfoWindowComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ItemLinkInfoWindowComponent___c_TypeInfo->static_fields->__9 = (struct ItemLinkInfoWindowComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ItemLinkInfoWindowComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall ItemLinkInfoWindowComponent___c___ctor(
        ItemLinkInfoWindowComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent___c___CoCreateItemTransitionList_b__21_1(
        ItemLinkInfoWindowComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FEE2E & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FEE2E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, 0LL, 0LL);
}


int32_t __fastcall ItemLinkInfoWindowComponent___c___SortViewItemList_b__25_0(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B64324(this);
  return !n->fields._IsLocked_k__BackingField;
}


int32_t __fastcall ItemLinkInfoWindowComponent___c___SortViewItemList_b__25_1(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B64324(this);
  return ItemTransitionType__GetSortPriority(n->fields._Type_k__BackingField, 0LL);
}


int32_t __fastcall ItemLinkInfoWindowComponent___c___SortViewItemList_b__25_2(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B64324(this);
  return n->fields._ItemDropEfficiencyPriority_k__BackingField;
}


void __fastcall ItemLinkInfoWindowComponent___c__DisplayClass19_0___ctor(
        ItemLinkInfoWindowComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent___c__DisplayClass19_0___OpenUserItemInfo_b__0(
        ItemLinkInfoWindowComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt; // x8
  CommonUI_o *v11; // x20
  System_String_o *transitionParam; // x21
  System_Collections_Generic_Dictionary_string__object__o *script; // x22
  Il2CppObject *_4__this; // x24
  System_Action_o *v15; // x23
  __int64 v16; // x1
  struct ItemLinkInfoListViewItem_o *viewItem; // x8
  int32_t TargetId_k__BackingField; // w19
  TerminalPramsManager_c *v19; // x0
  System_Action_o *transitionAction; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FEE2F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ItemLinkInfoWindowComponent__OpenUserItemInfo_b__19_1__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v6);
    byte_49FEE2F = 1;
  }
  transitionAction = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  itemDropEfficiencyEnt = this->fields.itemDropEfficiencyEnt;
  if ( !itemDropEfficiencyEnt )
    goto LABEL_18;
  v11 = (CommonUI_o *)Instance;
  transitionParam = itemDropEfficiencyEnt->fields.transitionParam;
  script = itemDropEfficiencyEnt->fields.script;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v15, _4__this, Method_ItemLinkInfoWindowComponent__OpenUserItemInfo_b__19_1__, 0LL);
  if ( !v11 )
    goto LABEL_18;
  Instance = (Il2CppObject *)CommonUI__TryGetSceneTransitionAction(
                               v11,
                               &transitionAction,
                               transitionParam,
                               script,
                               v15,
                               0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  viewItem = this->fields.viewItem;
  if ( !viewItem )
    goto LABEL_18;
  if ( (unsigned int)(viewItem->fields._TargetValueType_k__BackingField - 6) <= 2 )
  {
    TargetId_k__BackingField = viewItem->fields._TargetId_k__BackingField;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F8B1D )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v16);
      byte_49F8B1D = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    v19->static_fields->_ShopFocusItemId_k__BackingField = TargetId_k__BackingField;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
LABEL_18:
    sub_1B64324(Instance);
  PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
  ActionExtensions__Call(transitionAction, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent___c__DisplayClass21_0___ctor(
        ItemLinkInfoWindowComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent___c__DisplayClass21_0___CoCreateItemTransitionList_b__0(
        ItemLinkInfoWindowComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt; // x8
  CommonUI_o *v12; // x20
  System_String_o *transitionParam; // x21
  System_Collections_Generic_Dictionary_string__object__o *script; // x22
  System_Action_o *v15; // x23
  Il2CppObject *v16; // x24
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  struct ItemLinkInfoListViewItem_o *viewItem; // x8
  int32_t TargetId_k__BackingField; // w19
  TerminalPramsManager_c *v23; // x0
  System_Action_o *transitionAction; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FEE30 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v4);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    sub_1B640C8(&Method_ItemLinkInfoWindowComponent___c__CoCreateItemTransitionList_b__21_1__, v6);
    sub_1B640C8(&ItemLinkInfoWindowComponent___c_TypeInfo, v7);
    byte_49FEE30 = 1;
  }
  transitionAction = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  itemDropEfficiencyEnt = this->fields.itemDropEfficiencyEnt;
  if ( !itemDropEfficiencyEnt )
    goto LABEL_24;
  v12 = (CommonUI_o *)Instance;
  transitionParam = itemDropEfficiencyEnt->fields.transitionParam;
  script = itemDropEfficiencyEnt->fields.script;
  Instance = ItemLinkInfoWindowComponent___c_TypeInfo;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
    Instance = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  v15 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v15 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v16 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
    System_Action___ctor(v15, v16, Method_ItemLinkInfoWindowComponent___c__CoCreateItemTransitionList_b__21_1__, 0LL);
    static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__21_1 = v15;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__21_1, (int32_t)v15, v18, v19);
  }
  if ( !v12 )
    goto LABEL_24;
  Instance = (void *)CommonUI__TryGetSceneTransitionAction(v12, &transitionAction, transitionParam, script, v15, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  viewItem = this->fields.viewItem;
  if ( !viewItem )
    goto LABEL_24;
  if ( (unsigned int)(viewItem->fields._TargetValueType_k__BackingField - 6) <= 2 )
  {
    TargetId_k__BackingField = viewItem->fields._TargetId_k__BackingField;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F8B1D )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v20);
      byte_49F8B1D = 1;
    }
    v23 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v23 = TerminalPramsManager_TypeInfo;
    }
    v23->static_fields->_ShopFocusItemId_k__BackingField = TargetId_k__BackingField;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
LABEL_24:
    sub_1B64324(Instance);
  PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
  ActionExtensions__Call(transitionAction, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent___c__DisplayClass29_0___ctor(
        ItemLinkInfoWindowComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ItemLinkInfoWindowComponent___c__DisplayClass29_0___IsBoardAcive_b__0(
        ItemLinkInfoWindowComponent___c__DisplayClass29_0_o *this,
        GachaEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B64324(this);
  return n->fields.id == this->fields.gachaId;
}