void CombineMenuControl___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_593C7C0 & 1) == 0 )
  {
    sub_21FFC50(&CombineMenuControl_TypeInfo);
    sub_21FFC50(&StringLiteral_21305/*"img_combinebg_03"*/);
    byte_593C7C0 = 1;
  }
  v7 = StringLiteral_21305/*"img_combinebg_03"*/;
  CombineMenuControl_TypeInfo->static_fields->DefaultBgName = (struct System_String_o *)StringLiteral_21305/*"img_combinebg_03"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)CombineMenuControl_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void CombineMenuControl___ctor(CombineMenuControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_593C7BF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__TypeInfo);
    byte_593C7BF = 1;
  }
  v3 = System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__TypeInfo;
  this->fields.scaleOffset = 1.0;
  this->fields.transformTotal = 1;
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo___ctor__);
  this->fields.combineItemInfoList = (struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *)v4;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.combineItemInfoList,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CombineMenuControl__AddCombineItemInfo(
        CombineMenuControl_o *this,
        int32_t itemId,
        int32_t needNum,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_T__o *combineItemInfoList; // x23
  System_Func_object__bool__o *v11; // x21
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w22
  CombineMenuControl_CombineItemInfo_o *v14; // x21
  const MethodInfo *v15; // x3
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_593C7B5 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_CombineMenuControl_CombineItemInfo___);
    sub_21FFC50(&CombineMenuControl_CombineItemInfo_TypeInfo);
    sub_21FFC50(&System_Func_CombineMenuControl_CombineItemInfo__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Add__);
    sub_21FFC50(&Method_CombineMenuControl___c__DisplayClass68_0__AddCombineItemInfo_b__0__);
    sub_21FFC50(&CombineMenuControl___c__DisplayClass68_0_TypeInfo);
    byte_593C7B5 = 1;
  }
  v7 = sub_21FFEBC(CombineMenuControl___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  combineItemInfoList = (System_Collections_Generic_List_T__o *)this->fields.combineItemInfoList;
  *(_DWORD *)(v7 + 16) = itemId;
  v11 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_CombineMenuControl_CombineItemInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_CombineMenuControl___c__DisplayClass68_0__AddCombineItemInfo_b__0__,
    0);
  if ( BasicHelper__Any_object_(
         combineItemInfoList,
         (System_Func_T__bool__o *)v11,
         (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_CombineMenuControl_CombineItemInfo___) )
  {
    return;
  }
  v12 = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
  v13 = *(_DWORD *)(v7 + 16);
  v14 = (CombineMenuControl_CombineItemInfo_o *)sub_21FFEBC(CombineMenuControl_CombineItemInfo_TypeInfo);
  CombineMenuControl_CombineItemInfo___ctor(v14, v13, needNum, v15);
  if ( !v12
    || (items = v12->fields._items,
        v23 = Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Add__,
        ++v12->fields._version,
        !items) )
  {
LABEL_10:
    sub_21FFECC(v8, v9);
  }
  size = v12->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v14,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v14;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v14, v16, v17, v18, v19, v20, v21);
  }
}


void CombineMenuControl__ClearCombineItemInfo(CombineMenuControl_o *this, const MethodInfo *method)
{
  CombineMenuControl_o *v2; // x19
  struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *combineItemInfoList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_593C7B4 & 1) == 0 )
  {
    this = (CombineMenuControl_o *)sub_21FFC50(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Clear__);
    byte_593C7B4 = 1;
  }
  combineItemInfoList = v2->fields.combineItemInfoList;
  if ( !combineItemInfoList )
    sub_21FFECC(this, method);
  size = combineItemInfoList->fields._size;
  v5 = combineItemInfoList->fields._version + 1;
  combineItemInfoList->fields._size = 0;
  combineItemInfoList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)combineItemInfoList->fields._items, 0, size, 0);
}


void CombineMenuControl__CloaseCombineItemLinkInfoListWindow(
        CombineMenuControl_o *this,
        bool decide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_593C7BA & 1) == 0 )
  {
    sub_21FFC50(&Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593C7BA = 1;
  }
  v3 = Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__;
  if ( (*((_BYTE *)Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, 0, 0);
}


void CombineMenuControl__GetCombineItemInfo(
        CombineMenuControl_o *this,
        System_Int32_array **itemIds,
        System_Int32_array **needNums,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  long double v15; // q0
  struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *combineItemInfoList; // x8
  __int64 size; // x22
  System_Int32_array *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Int32_array *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  unsigned __int64 v32; // x23
  System_Int32_array *v33; // x25
  struct System_Object_array *items; // x8
  System_Int32_array *v35; // x25
  char *v36; // x9
  _QWORD *v37; // x21
  __int64 v38; // x8
  __int64 v39; // x0
  __int64 v40; // x0
  System_Int32_array **v41; // x8
  System_Int32_array *v42; // x1
  __int64 v43; // x1
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  long double v50; // q0
  _QWORD *v51; // x20
  __int64 v52; // x8
  __int64 v53; // x0
  __int64 v54; // x0
  System_Int32_array **v55; // x8
  System_Int32_array *v56; // x1

  if ( (byte_593C7B6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
    byte_593C7B6 = 1;
  }
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.combineItemInfoList,
                                                        (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    combineItemInfoList = this->fields.combineItemInfoList;
    if ( !combineItemInfoList )
      goto LABEL_35;
    size = (unsigned int)combineItemInfoList->fields._size;
    v18 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, (unsigned int)size);
    *itemIds = v18;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)itemIds, (int32_t)v18, v19, v20, v21, v22, v23, v24);
    v25 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, (unsigned int)size);
    *needNums = v25;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)needNums, (int32_t)v25, v26, v27, v28, v29, v30, v31);
    if ( (int)size >= 1 )
    {
      v32 = 0;
      while ( 1 )
      {
        Item = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
        if ( !Item )
          break;
        v33 = *itemIds;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v32,
                                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
        if ( !Item )
          break;
        items = Item->fields._items;
        if ( !items || !v33 )
          break;
        if ( v32 >= LODWORD(v33->max_length) )
          goto LABEL_36;
        Item = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
        v33->m_Items[v32] = (int32_t)items->bounds;
        if ( !Item )
          break;
        v35 = *needNums;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v32,
                                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
        if ( !Item || !v35 )
          break;
        if ( v32 >= LODWORD(v35->max_length) )
LABEL_36:
          sub_21FFED4(Item);
        v36 = (char *)v35 + 4 * v32++;
        *((_DWORD *)v36 + 8) = Item->fields._size;
        if ( size == v32 )
          return;
      }
LABEL_35:
      sub_21FFECC(Item, v8);
    }
  }
  else
  {
    v37 = Method_System_Array_Empty_int___;
    v38 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v38 )
    {
      sub_2237B54(Method_System_Array_Empty_int___);
      v38 = v37[7];
    }
    v39 = *(_QWORD *)(v38 + 16);
    if ( (*(_WORD *)(v39 + 309) & 1) == 0 )
      v39 = sub_2237AF8(v15);
    if ( !*(_DWORD *)(v39 + 228) )
      *(__n128 *)&v15 = j_il2cpp_runtime_class_init_0(v39, v8);
    v40 = *(_QWORD *)(v37[7] + 16LL);
    if ( (*(_WORD *)(v40 + 309) & 1) == 0 )
      v40 = sub_2237AF8(v15);
    v41 = *(System_Int32_array ***)(v40 + 184);
    v42 = *v41;
    *itemIds = *v41;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)itemIds, (int32_t)v42, v9, v10, v11, v12, v13, v14);
    v51 = Method_System_Array_Empty_int___;
    v52 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v52 )
    {
      sub_2237B54(Method_System_Array_Empty_int___);
      v52 = v51[7];
    }
    v53 = *(_QWORD *)(v52 + 16);
    if ( (*(_WORD *)(v53 + 309) & 1) == 0 )
      v53 = sub_2237AF8(v50);
    if ( !*(_DWORD *)(v53 + 228) )
      *(__n128 *)&v50 = j_il2cpp_runtime_class_init_0(v53, v43);
    v54 = *(_QWORD *)(v51[7] + 16LL);
    if ( (*(_WORD *)(v54 + 309) & 1) == 0 )
      v54 = sub_2237AF8(v50);
    v55 = *(System_Int32_array ***)(v54 + 184);
    v56 = *v55;
    *needNums = *v55;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)needNums, (int32_t)v56, v44, v45, v46, v47, v48, v49);
  }
}


UserServantEntity_o *CombineMenuControl__GetMaterialUsrSvtData(CombineMenuControl_o *this, const MethodInfo *method)
{
  CombineMenuControl_o *v2; // x19
  struct UserServantEntity_o *v3; // x8
  MissionNaviTransitionBoardItem_o *p_selectMaterialUsrSvtEntity; // x19
  struct UserServantEntity_o *selectMaterialUsrSvtEntity; // t1
  __int128 v6; // q0
  __int128 v7; // q1
  int v8; // w8
  int64_t v9; // x20
  Il2CppObject *Entity; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_593C7B1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CombineMenuControl_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593C7B1 = 1;
  }
  selectMaterialUsrSvtEntity = v2->fields.selectMaterialUsrSvtEntity;
  p_selectMaterialUsrSvtEntity = (MissionNaviTransitionBoardItem_o *)&v2->fields.selectMaterialUsrSvtEntity;
  v3 = selectMaterialUsrSvtEntity;
  if ( !selectMaterialUsrSvtEntity )
    goto LABEL_9;
  v6 = *(_OWORD *)&v3->fields.id.fields.currentCryptoKey;
  v7 = *(_OWORD *)&v3->fields.id.fields.fakeValue;
  v8 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v19.fields.currentCryptoKey = v6;
  *(_OWORD *)&v19.fields.fakeValue = v7;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v18 = v19;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v18, 0);
  this = (CombineMenuControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineMenuControl_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
LABEL_9:
    sub_21FFECC(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v9,
             (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_selectMaterialUsrSvtEntity->klass = (MissionNaviTransitionBoardItem_c *)Entity;
  sub_21FFBF4(p_selectMaterialUsrSvtEntity, (int32_t)Entity, v11, v12, v13, v14, v15, v16);
  return (UserServantEntity_o *)Entity;
}


void CombineMenuControl__InitCombineItemInfo(CombineMenuControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CombineMenuControl__ClearCombineItemInfo(this, method);
  CombineMenuControl__UpdateItemLinkListWindowButton(this, v3);
}


void CombineMenuControl__InitMenuControl(CombineMenuControl_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v9; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_EventDelegate__o *monitor; // x20
  EventDelegate_Callback_o *v15; // x21
  __int64 v16; // x1

  if ( (byte_593C7AD & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    byte_593C7AD = 1;
  }
  this->fields.baseUserServantEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.baseUserServantEntity, 0, v2, v3, v4, v5, v6, v7);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0),
        bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0),
        CombineMenuControl__ClearCombineItemInfo(this, v12),
        CombineMenuControl__UpdateItemLinkListWindowButton(this, v13),
        (bgTxtSprite = (UnityEngine_Component_o *)this->fields.helpBtn) == 0)
    || (bgTxtSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)bgTxtSprite,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0 )
  {
    sub_21FFECC(bgTxtSprite, v9);
  }
  monitor = (System_Collections_Generic_List_EventDelegate__o *)bgTxtSprite[4].monitor;
  v15 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v15, (Il2CppObject *)this, (intptr_t)this->klass->vtable._5_OnClickHelp.method, 0);
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v16);
  EventDelegate__Set_56117672(monitor, v15, 0);
}


bool CombineMenuControl__IsPurePrismExchangeItem(CombineMenuControl_o *this, int32_t itemId, const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  MissionNaviTransitionBoardItem_o *p_itemExchangeShopEntList; // x19
  System_Object_array *klass; // x22
  struct ShopEntity_array *itemExchangeShopEntList; // t1
  ShopEntity_array *EnableEntitiyList; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Func_object__bool__o *v18; // x19

  if ( (byte_593C7B8 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Find_ShopEntity___);
    sub_21FFC50(&Method_DataManager_GetMaster_ShopMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_Func_ShopEntity__bool__TypeInfo);
    sub_21FFC50(&Method_CombineMenuControl___c__DisplayClass71_0__IsPurePrismExchangeItem_b__0__);
    sub_21FFC50(&CombineMenuControl___c__DisplayClass71_0_TypeInfo);
    byte_593C7B8 = 1;
  }
  v5 = sub_21FFEBC(CombineMenuControl___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  itemExchangeShopEntList = this->fields.itemExchangeShopEntList;
  p_itemExchangeShopEntList = (MissionNaviTransitionBoardItem_o *)&this->fields.itemExchangeShopEntList;
  klass = (System_Object_array *)itemExchangeShopEntList;
  *(_DWORD *)(v5 + 16) = itemId;
  if ( !itemExchangeShopEntList )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( Master_object )
    {
      EnableEntitiyList = ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Master_object, 1, 13, 0);
      p_itemExchangeShopEntList->klass = (MissionNaviTransitionBoardItem_c *)EnableEntitiyList;
      sub_21FFBF4(p_itemExchangeShopEntList, (int32_t)EnableEntitiyList, v12, v13, v14, v15, v16, v17);
      klass = (System_Object_array *)p_itemExchangeShopEntList->klass;
      goto LABEL_9;
    }
LABEL_10:
    sub_21FFECC(Master_object, v7);
  }
LABEL_9:
  v18 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v5,
    Method_CombineMenuControl___c__DisplayClass71_0__IsPurePrismExchangeItem_b__0__,
    0);
  return BasicHelper__Find_object_(
           klass,
           (System_Func_T__bool__o *)v18,
           (const MethodInfo_37DD66C *)Method_BasicHelper_Find_ShopEntity___) != 0;
}


void CombineMenuControl__OnClickBase(CombineMenuControl_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v4; // x1
  bool exists; // w8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_593C7AE & 1) == 0 )
  {
    sub_21FFC50(&Method_CombineMenuControl_OnClickBase__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_593C7AE = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  exists = PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0);
  v6 = Method_CombineMenuControl_OnClickBase__;
  if ( !exists )
  {
    if ( (*((_BYTE *)Method_CombineMenuControl_OnClickBase__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_21FFC68(Method_CombineMenuControl_OnClickBase__);
    v8 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    Instance = (PartyOrganizationUtility_o *)this->fields.combineRootComponent;
    if ( Instance )
    {
      CombineRootComponent__ShowServantList((CombineRootComponent_o *)Instance, 0);
      return;
    }
LABEL_12:
    sub_21FFECC(Instance, v4);
  }
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickBase__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_21FFC68(Method_CombineMenuControl_OnClickBase__);
  v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
}


void CombineMenuControl__OnClickCombineItemLinkInfoListWindow(CombineMenuControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  System_Int32_array *v7; // x20
  System_Int32_array *v8; // x21
  CommonUI_o *v9; // x22
  ItemLinkInfoWindowComponent_CallbackFunc_o *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1
  System_Int32_array *v13; // [xsp+0h] [xbp-40h] BYREF
  System_Int32_array *itemIds; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_593C7B9 & 1) == 0 )
  {
    sub_21FFC50(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__);
    sub_21FFC50(&Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593C7B9 = 1;
  }
  v13 = 0;
  itemIds = 0;
  CombineMenuControl__GetCombineItemInfo(this, &itemIds, &v13, v2);
  v4 = Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_21FFC68(Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = v13;
  v7 = itemIds;
  v9 = (CommonUI_o *)Instance;
  v10 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_21FFEBC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
  ItemLinkInfoWindowComponent_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__,
    0);
  if ( !v9 )
    sub_21FFECC(v11, v12);
  CommonUI__OpenItemLinkInfoListWindow(v9, v7, v8, v10, 0, 0);
}


void CombineMenuControl__OnClickHelp(CombineMenuControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w0

  if ( (byte_593C7B3 & 1) == 0 )
  {
    sub_21FFC50(&Method_CombineMenuControl_OnClickHelp__);
    byte_593C7B3 = 1;
  }
  v3 = Method_CombineMenuControl_OnClickHelp__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_CombineMenuControl_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = ((__int64 (__fastcall *)(CombineMenuControl_o *, const MethodInfo *))this->klass->vtable._6_unknown.methodPtr)(
         this,
         this->klass->vtable._6_unknown.method);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, v5, 0, 0, 0);
}


void CombineMenuControl__OnClickLvExceedConductionWire(CombineMenuControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_593C7B2 & 1) == 0 )
  {
    sub_21FFC50(&Method_CombineMenuControl_OnClickLvExceedConductionWire__);
    byte_593C7B2 = 1;
  }
  v3 = Method_CombineMenuControl_OnClickLvExceedConductionWire__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickLvExceedConductionWire__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_CombineMenuControl_OnClickLvExceedConductionWire__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_21FFECC(0, v5);
  CombineRootComponent__ConductionWireCombine(combineRootComponent, 0);
}


void CombineMenuControl__OnClickMaterial(
        CombineMenuControl_o *this,
        int32_t type,
        int64_t selectUsrSvtId,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  int m_CachedPtr_high; // w8
  Il2CppObject *Entity; // x0
  struct UserServantEntity_o **p_selectMaterialUsrSvtEntity; // x19
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_593C7B0 & 1) == 0 )
  {
    sub_21FFC50(&Method_CombineMenuControl_OnClickMaterial__);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593C7B0 = 1;
  }
  v7 = Method_CombineMenuControl_OnClickMaterial__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickMaterial__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_21FFC68(Method_CombineMenuControl_OnClickMaterial__);
  v8 = (System_Reflection_MethodBase_o *)sub_21FFC34(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
  if ( type == 2 )
  {
    this->fields._targetType_k__BackingField = 2;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   selectUsrSvtId,
                   (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        this->fields.selectMaterialUsrSvtEntity = (struct UserServantEntity_o *)Entity;
        p_selectMaterialUsrSvtEntity = &this->fields.selectMaterialUsrSvtEntity;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)p_selectMaterialUsrSvtEntity,
          (int32_t)Entity,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
        Instance = (DataManager_o *)*(p_selectMaterialUsrSvtEntity - 22);
        if ( Instance )
        {
          CombineRootComponent__SelectShowServant((CombineRootComponent_o *)Instance, 0);
          return;
        }
      }
    }
    goto LABEL_19;
  }
  if ( type != 1 )
    return;
  Instance = (DataManager_o *)this->fields.combineRootComponent;
  if ( !Instance )
LABEL_19:
    sub_21FFECC(Instance, v9);
  m_CachedPtr_high = HIDWORD(Instance[3].fields.m_CachedPtr);
  switch ( m_CachedPtr_high )
  {
    case 11:
      CombineRootComponent__ShowNpMaterialSvtList((CombineRootComponent_o *)Instance, 0);
      break;
    case 4:
      CombineRootComponent__ShowSvtEqMaterialList((CombineRootComponent_o *)Instance, 0);
      break;
    case 3:
      CombineRootComponent__ShowMaterialSvtList((CombineRootComponent_o *)Instance, 0);
      break;
  }
}


void CombineMenuControl__OnLongPushListView(CombineMenuControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_593C7AF & 1) == 0 )
  {
    sub_21FFC50(&Method_CombineMenuControl_OnLongPushListView__);
    byte_593C7AF = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    v3 = Method_CombineMenuControl_OnLongPushListView__;
    if ( (*((_BYTE *)Method_CombineMenuControl_OnLongPushListView__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CombineMenuControl_OnLongPushListView__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    combineRootComponent = this->fields.combineRootComponent;
    this->fields._targetType_k__BackingField = 0;
    if ( !combineRootComponent )
      sub_21FFECC(0, v5);
    CombineRootComponent__SelectShowServant(combineRootComponent, 0);
  }
}


void CombineMenuControl__Quit(CombineMenuControl_o *this, const MethodInfo *method)
{
  System_String_array *assetList; // x21
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1

  if ( (byte_593C7BB & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_593C7BB = 1;
  }
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAssetStorage_47474708(assetList, 0);
    this->fields.assetList = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.assetList, 0, v4, v5, v6, v7, v8, v9);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v11);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


UICharaGraphTexture_o *CombineMenuControl__SetCharaGraph(
        CombineMenuControl_o *this,
        UICharaGraphTexture_o *charaGraph,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  CombineMenuControl_o *v6; // x21
  __int64 v7; // x1
  int32_t CardImageLimitCount; // w22
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  __int64 v11; // x24
  __int64 v12; // x25
  ServantLimitImageMaster_o *v13; // x23
  int32_t ServantImageLimitSealAfter; // w22
  __int64 v15; // x1
  ServantOverwriteStatus_o *OverwriteStatus; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v6 = this;
  if ( (byte_593C7BD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (CombineMenuControl_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593C7BD = 1;
  }
  if ( !usrSvtData )
    goto LABEL_15;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0, -1, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v11 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v13 = (ServantLimitImageMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v24.fields.currentCryptoKey = v11;
  *(_QWORD *)&v24.fields.fakeValue = v12;
  this = (CombineMenuControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v24, 0);
  if ( !v13 )
    goto LABEL_15;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v13,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0);
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(usrSvtData, 0, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  this = (CombineMenuControl_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)charaGraph, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return CharaGraphManager__CreateTexturePrefab_47594432(
             v6->fields.charaGraphBase,
             usrSvtData,
             ServantImageLimitSealAfter,
             10,
             0,
             0,
             OverwriteStatus,
             0,
             0,
             -1,
             0);
  if ( !charaGraph )
LABEL_15:
    sub_21FFECC(this, charaGraph);
  charaGraph->fields._OverwriteStatus_k__BackingField = OverwriteStatus;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&charaGraph->fields._OverwriteStatus_k__BackingField,
    (int32_t)OverwriteStatus,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  UICharaGraphTexture__SetCharacter_50868276(charaGraph, usrSvtData, ServantImageLimitSealAfter, 0, 0, 0, 0, -1, 0);
  return charaGraph;
}


void CombineMenuControl__SetInfoBgSprite(CombineMenuControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *infoBack; // x20
  __int64 v4; // x1
  _BOOL4 IsTransformServant_k__BackingField; // w9
  UISprite_o *v6; // x19
  System_String_o ***v7; // x0
  int v8; // w8
  System_String_o *DefaultBgName; // x1

  if ( (byte_593C7BC & 1) == 0 )
  {
    sub_21FFC50(&CombineMenuControl_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_16722/*"_2"*/);
    byte_593C7BC = 1;
  }
  infoBack = (UnityEngine_Object_o *)this->fields.infoBack;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(infoBack, 0, 0) )
  {
    IsTransformServant_k__BackingField = this->fields._IsTransformServant_k__BackingField;
    v6 = this->fields.infoBack;
    v7 = (System_String_o ***)CombineMenuControl_TypeInfo;
    v8 = *(&CombineMenuControl_TypeInfo->_2.cctor_finished + 1);
    if ( IsTransformServant_k__BackingField )
    {
      if ( !v8 )
      {
        j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, v4);
        v7 = (System_String_o ***)CombineMenuControl_TypeInfo;
      }
      v7 = (System_String_o ***)System_String__Concat_75438412(*v7[23], (System_String_o *)StringLiteral_16722/*"_2"*/, 0);
      if ( v6 )
      {
        DefaultBgName = (System_String_o *)v7;
LABEL_15:
        UISprite__set_spriteName(v6, DefaultBgName, 0);
        return;
      }
    }
    else
    {
      if ( !v8 )
        j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, v4);
      if ( v6 )
      {
        DefaultBgName = CombineMenuControl_TypeInfo->static_fields->DefaultBgName;
        goto LABEL_15;
      }
    }
    sub_21FFECC(v7, v4);
  }
}


void CombineMenuControl__SetTransformInfo(CombineMenuControl_o *this, const MethodInfo *method)
{
  UserServantEntity_o *baseUserServantEntity; // x0
  int32_t TransformCount; // w0
  __int64 v5; // x1
  int32_t transformTotal; // w8
  UserServantEntity_o *v7; // x0
  bool IsSaveTransformServant; // w0
  UserServantEntity_o *v9; // x0
  ServantEntity_o *BaseServantEntity; // x0
  __int64 v11; // x1
  ServantEntity_TransformInfo_o *TransformInfo; // x0
  ServantEntity_TransformInfo_o *v13; // x20
  System_String_o *condLabelColor; // x21
  CombineMenuControl_o *v15; // x22
  char v16; // w25
  CombineMenuControl_o *v17; // x23
  DataManager_c *v18; // x0
  int v19; // w8
  Il2CppObject *Master_object; // x0
  __int64 v21; // x1
  struct UserServantEntity_o *v22; // x8
  ServantTransformMaster_o *v23; // x20
  __int64 v24; // x21
  __int64 v25; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // kr00_16
  int32_t v27; // w0
  __int64 v28; // x1
  struct UserServantEntity_o *v29; // x8
  int32_t v30; // w21
  __int64 v31; // x22
  __int64 v32; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // kr10_16
  System_String_o *v34; // x20
  ServantTransformEntity_o *v35; // x0
  System_String_o *v36; // x20
  ServantTransformEntity_o *v37; // x0
  System_String_o *condSpriteColor; // x21
  UserServantEntity_o *v39; // x0
  ServantEntity_TransformInfo_o *v40; // x0
  ServantEntity_TransformInfo_o *v41; // x20
  System_String_o *v42; // x21
  CombineMenuControl_o *v43; // x22
  char v44; // w25
  CombineMenuControl_o *v45; // x23
  System_String_o *v46; // x21
  struct UserServantEntity_o *v47; // x8
  __int64 v48; // x20
  __int64 v49; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // kr20_16
  ServantTransformEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o DefaultCondTitleSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593C7BE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593C7BE = 1;
  }
  baseUserServantEntity = this->fields.baseUserServantEntity;
  entity = 0;
  if ( baseUserServantEntity )
    TransformCount = UserServantEntity__GetTransformCount(baseUserServantEntity, 1, 0);
  else
    TransformCount = 1;
  this->fields.transformTotal = TransformCount;
  CombineMenuControl__SetInfoBgSprite(this, method);
  transformTotal = this->fields.transformTotal;
  this->fields._IsTransformServant_k__BackingField = transformTotal > 1;
  if ( transformTotal >= 2 && (v7 = this->fields.baseUserServantEntity) != 0 )
  {
    IsSaveTransformServant = UserServantEntity__get_IsSaveTransformServant(v7, 0);
    this->fields._IsSaveTransformServant_k__BackingField = IsSaveTransformServant;
    if ( IsSaveTransformServant )
    {
      v9 = this->fields.baseUserServantEntity;
      if ( v9 )
      {
        BaseServantEntity = UserServantEntity__get_BaseServantEntity(v9, 0);
        if ( !BaseServantEntity )
          goto LABEL_65;
        TransformInfo = ServantEntity__GetTransformInfo(BaseServantEntity, 0);
        v13 = TransformInfo;
        if ( TransformInfo )
        {
          condLabelColor = TransformInfo->fields.condLabelColor;
          v15 = 0;
          v16 = 0;
          v17 = this;
          this->fields._TransformIsNotSkillChange_k__BackingField = TransformInfo->fields.isNotSkillChange == 1;
          goto LABEL_44;
        }
        v17 = 0;
      }
      else
      {
        v17 = 0;
        v13 = 0;
      }
      condLabelColor = 0;
      this->fields._TransformIsNotSkillChange_k__BackingField = 0;
      v16 = 1;
      v15 = this;
LABEL_44:
      DefaultCondTitleLabelColor = TransformHelper__get_DefaultCondTitleLabelColor(0);
      v60 = ColorHelper__ParseColorCode_51093332(condLabelColor, DefaultCondTitleLabelColor, 0);
      condSpriteColor = 0;
      this->fields._CondTitleLabelColor_k__BackingField = v60;
      if ( (v16 & 1) == 0 )
      {
        condSpriteColor = v13->fields.condSpriteColor;
        v15 = v17;
      }
      DefaultCondTitleSpriteColor = TransformHelper__get_DefaultCondTitleSpriteColor(0);
      v62 = ColorHelper__ParseColorCode_51093332(condSpriteColor, DefaultCondTitleSpriteColor, 0);
      if ( !v15 )
        goto LABEL_65;
      v15->fields._CondTitleSpriteColor_k__BackingField = v62;
      v39 = this->fields.baseUserServantEntity;
      if ( v39 )
      {
        BaseServantEntity = UserServantEntity__get_SaveTransformServantEntity(v39, 0);
        if ( !BaseServantEntity )
          goto LABEL_65;
        v40 = ServantEntity__GetTransformInfo(BaseServantEntity, 0);
        v41 = v40;
        if ( v40 )
        {
          v42 = v40->fields.condLabelColor;
          v43 = 0;
          v44 = 0;
          v45 = this;
          goto LABEL_54;
        }
        v45 = 0;
      }
      else
      {
        v45 = 0;
        v41 = 0;
      }
      v42 = 0;
      v44 = 1;
      v43 = this;
LABEL_54:
      v63 = TransformHelper__get_DefaultCondTitleLabelColor(0);
      v64 = ColorHelper__ParseColorCode_51093332(v42, v63, 0);
      v46 = 0;
      this->fields._CondTitleLabelColorAfter_k__BackingField = v64;
      if ( (v44 & 1) == 0 )
      {
        v46 = v41->fields.condSpriteColor;
        v43 = v45;
      }
      v65 = TransformHelper__get_DefaultCondTitleSpriteColor(0);
      v66 = ColorHelper__ParseColorCode_51093332(v46, v65, 0);
      if ( v43 )
      {
        v43->fields._CondTitleSpriteColorAfter_k__BackingField = v66;
        v47 = this->fields.baseUserServantEntity;
        if ( v47 )
        {
          v48 = *(_QWORD *)&v47->fields.transformVal.fields.currentCryptoKey;
          v49 = *(_QWORD *)&v47->fields.transformVal.fields.fakeValue;
        }
        else
        {
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
          v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
          v11 = *(_QWORD *)&v50.fields.fakeValue;
          v48 = *(_QWORD *)&v50.fields.currentCryptoKey;
          v49 = *(_QWORD *)&v50.fields.fakeValue;
        }
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
        *(_QWORD *)&v54.fields.currentCryptoKey = v48;
        *(_QWORD *)&v54.fields.fakeValue = v49;
        this->fields.displayTransformIndex = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v54, 0);
        return;
      }
LABEL_65:
      sub_21FFECC(BaseServantEntity, v11);
    }
  }
  else
  {
    this->fields._IsSaveTransformServant_k__BackingField = 0;
  }
  v18 = DataManager_TypeInfo;
  v19 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  this->fields.displayTransformIndex = 0;
  if ( !v19 )
    j_il2cpp_runtime_class_init_0(v18, v5);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantTransformMaster___);
  v22 = this->fields.baseUserServantEntity;
  v23 = (ServantTransformMaster_o *)Master_object;
  if ( v22 )
  {
    v24 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
    v25 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
  }
  else
  {
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(-1, 0);
    v21 = *(_QWORD *)&v26.fields.fakeValue;
    v24 = *(_QWORD *)&v26.fields.currentCryptoKey;
    v25 = *(_QWORD *)&v26.fields.fakeValue;
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
  *(_QWORD *)&v52.fields.currentCryptoKey = v24;
  *(_QWORD *)&v52.fields.fakeValue = v25;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v52, 0);
  v29 = this->fields.baseUserServantEntity;
  v30 = v27;
  if ( v29 )
  {
    v31 = *(_QWORD *)&v29->fields.dispLimitCount.fields.currentCryptoKey;
    v32 = *(_QWORD *)&v29->fields.dispLimitCount.fields.fakeValue;
  }
  else
  {
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
    v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(1, 0);
    v28 = *(_QWORD *)&v33.fields.fakeValue;
    v31 = *(_QWORD *)&v33.fields.currentCryptoKey;
    v32 = *(_QWORD *)&v33.fields.fakeValue;
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
  *(_QWORD *)&v53.fields.currentCryptoKey = v31;
  *(_QWORD *)&v53.fields.fakeValue = v32;
  BaseServantEntity = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v53, 0);
  if ( !v23 )
    goto LABEL_65;
  ServantTransformMaster__TryGetEntity(v23, &entity, v30, (int32_t)BaseServantEntity, 0);
  if ( entity )
    v34 = ServantTransformEntity__GetCondLabelColor(entity, 0);
  else
    v34 = 0;
  v55 = TransformHelper__get_DefaultCondTitleLabelColor(0);
  v56 = ColorHelper__ParseColorCode_51093332(v34, v55, 0);
  v35 = entity;
  this->fields._CondTitleLabelColor_k__BackingField = v56;
  if ( v35 )
    v36 = ServantTransformEntity__GetCondSpriteColor(v35, 0);
  else
    v36 = 0;
  v57 = TransformHelper__get_DefaultCondTitleSpriteColor(0);
  v58 = ColorHelper__ParseColorCode_51093332(v36, v57, 0);
  v37 = entity;
  this->fields._CondTitleSpriteColor_k__BackingField = v58;
  if ( v37 )
    LOBYTE(v37) = ServantTransformEntity__IsNotSkillChange(v37, 0);
  this->fields._TransformIsNotSkillChange_k__BackingField = (unsigned __int8)v37 & 1;
}


void CombineMenuControl__UpdateItemLinkListWindowButton(CombineMenuControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemLinkInfoListBtn; // x20
  bool v4; // w0
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Component_o *Instance; // x0
  bool v8; // w8
  UnityEngine_Component_c *klass; // x8

  if ( (byte_593C7B7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593C7B7 = 1;
  }
  itemLinkInfoListBtn = (UnityEngine_Object_o *)this->fields.itemLinkInfoListBtn;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(itemLinkInfoListBtn, 0, 0);
  gameObject = 0;
  if ( v4 )
  {
    Instance = (UnityEngine_Component_o *)this->fields.itemLinkInfoListBtn;
    if ( !Instance )
      goto LABEL_25;
    gameObject = UnityEngine_Component__get_gameObject(Instance, 0);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)gameObject, 0, 0) )
  {
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      Instance = (UnityEngine_Component_o *)CommonUI__get_IsEnableItemLinkInfoListWindow((CommonUI_o *)Instance, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 && this->fields.baseUserServantEntity )
      {
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0);
          v8 = System_Linq_Enumerable__Any_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.combineItemInfoList,
                 (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
          Instance = (UnityEngine_Component_o *)this->fields.itemLinkInfoListBtn;
          if ( v8 )
          {
            if ( Instance )
            {
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
              Instance = (UnityEngine_Component_o *)this->fields.itemLinkInfoListBtn;
              if ( Instance )
              {
                klass = Instance->klass;
LABEL_24:
                ((void (*)(void))klass[1]._1.nestedTypes)();
                return;
              }
            }
          }
          else if ( Instance )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0);
            Instance = (UnityEngine_Component_o *)this->fields.itemLinkInfoListBtn;
            if ( Instance )
            {
              klass = Instance->klass;
              goto LABEL_24;
            }
          }
        }
      }
      else if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        return;
      }
    }
LABEL_25:
    sub_21FFECC(Instance, v5);
  }
}


UnityEngine_Color_o CombineMenuControl__get_CondTitleLabelColor(CombineMenuControl_o *this, const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields._CondTitleLabelColor_k__BackingField.fields.r;
  g = this->fields._CondTitleLabelColor_k__BackingField.fields.g;
  b = this->fields._CondTitleLabelColor_k__BackingField.fields.b;
  a = this->fields._CondTitleLabelColor_k__BackingField.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


UnityEngine_Color_o CombineMenuControl__get_CondTitleLabelColorAfter(
        CombineMenuControl_o *this,
        const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields._CondTitleLabelColorAfter_k__BackingField.fields.r;
  g = this->fields._CondTitleLabelColorAfter_k__BackingField.fields.g;
  b = this->fields._CondTitleLabelColorAfter_k__BackingField.fields.b;
  a = this->fields._CondTitleLabelColorAfter_k__BackingField.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


UnityEngine_Color_o CombineMenuControl__get_CondTitleSpriteColor(CombineMenuControl_o *this, const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields._CondTitleSpriteColor_k__BackingField.fields.r;
  g = this->fields._CondTitleSpriteColor_k__BackingField.fields.g;
  b = this->fields._CondTitleSpriteColor_k__BackingField.fields.b;
  a = this->fields._CondTitleSpriteColor_k__BackingField.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


UnityEngine_Color_o CombineMenuControl__get_CondTitleSpriteColorAfter(
        CombineMenuControl_o *this,
        const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.r;
  g = this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.g;
  b = this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.b;
  a = this->fields._CondTitleSpriteColorAfter_k__BackingField.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


bool CombineMenuControl__get_IsExeCombine(CombineMenuControl_o *this, const MethodInfo *method)
{
  return this->fields._IsExeCombine_k__BackingField;
}


bool CombineMenuControl__get_IsSaveTransformServant(CombineMenuControl_o *this, const MethodInfo *method)
{
  return this->fields._IsSaveTransformServant_k__BackingField;
}


bool CombineMenuControl__get_IsTransformServant(CombineMenuControl_o *this, const MethodInfo *method)
{
  return this->fields._IsTransformServant_k__BackingField;
}


bool CombineMenuControl__get_TransformIsNotSkillChange(CombineMenuControl_o *this, const MethodInfo *method)
{
  return this->fields._TransformIsNotSkillChange_k__BackingField;
}


int32_t CombineMenuControl__get_TransformTotal(CombineMenuControl_o *this, const MethodInfo *method)
{
  return this->fields.transformTotal;
}


int32_t CombineMenuControl__get_targetType(CombineMenuControl_o *this, const MethodInfo *method)
{
  return this->fields._targetType_k__BackingField;
}


void CombineMenuControl__set_CondTitleLabelColor(
        CombineMenuControl_o *this,
        UnityEngine_Color_o value,
        const MethodInfo *method)
{
  this->fields._CondTitleLabelColor_k__BackingField = value;
}


void CombineMenuControl__set_CondTitleLabelColorAfter(
        CombineMenuControl_o *this,
        UnityEngine_Color_o value,
        const MethodInfo *method)
{
  this->fields._CondTitleLabelColorAfter_k__BackingField = value;
}


void CombineMenuControl__set_CondTitleSpriteColor(
        CombineMenuControl_o *this,
        UnityEngine_Color_o value,
        const MethodInfo *method)
{
  this->fields._CondTitleSpriteColor_k__BackingField = value;
}


void CombineMenuControl__set_CondTitleSpriteColorAfter(
        CombineMenuControl_o *this,
        UnityEngine_Color_o value,
        const MethodInfo *method)
{
  this->fields._CondTitleSpriteColorAfter_k__BackingField = value;
}


void CombineMenuControl__set_IsExeCombine(CombineMenuControl_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsExeCombine_k__BackingField = value;
}


void CombineMenuControl__set_IsSaveTransformServant(CombineMenuControl_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsSaveTransformServant_k__BackingField = value;
}


void CombineMenuControl__set_IsTransformServant(CombineMenuControl_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsTransformServant_k__BackingField = value;
}


void CombineMenuControl__set_TransformIsNotSkillChange(
        CombineMenuControl_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._TransformIsNotSkillChange_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void CombineMenuControl__set_TransformTotal(CombineMenuControl_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.transformTotal = value;
  CombineMenuControl__SetInfoBgSprite(this, *(const MethodInfo **)&value);
}


void CombineMenuControl__set_targetType(CombineMenuControl_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._targetType_k__BackingField = value;
}


void CombineMenuControl_CombineItemInfo___ctor(
        CombineMenuControl_CombineItemInfo_o *this,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0
  CombineMenuControl_CombineItemInfo_Fields *p_fields; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_593C7C1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    byte_593C7C1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v9);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             id,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields._ItemEntity_k__BackingField = (struct ItemEntity_o *)Entity;
  p_fields = &this->fields;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_fields, (int32_t)Entity, v12, v13, v14, v15, v16, v17);
  p_fields->_NeedNum_k__BackingField = num;
}


ItemEntity_o *CombineMenuControl_CombineItemInfo__get_ItemEntity(
        CombineMenuControl_CombineItemInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._ItemEntity_k__BackingField;
}


int32_t CombineMenuControl_CombineItemInfo__get_NeedNum(
        CombineMenuControl_CombineItemInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._NeedNum_k__BackingField;
}


void CombineMenuControl___c__DisplayClass68_0___ctor(
        CombineMenuControl___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CombineMenuControl___c__DisplayClass68_0___AddCombineItemInfo_b__0(
        CombineMenuControl___c__DisplayClass68_0_o *this,
        CombineMenuControl_CombineItemInfo_o *n,
        const MethodInfo *method)
{
  struct ItemEntity_o *ItemEntity_k__BackingField; // x8

  if ( !n || (ItemEntity_k__BackingField = n->fields._ItemEntity_k__BackingField) == 0 )
    sub_21FFECC(this, n);
  return ItemEntity_k__BackingField->fields.id == this->fields.itemId;
}


void CombineMenuControl___c__DisplayClass71_0___ctor(
        CombineMenuControl___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CombineMenuControl___c__DisplayClass71_0___IsPurePrismExchangeItem_b__0(
        CombineMenuControl___c__DisplayClass71_0_o *this,
        ShopEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_21FFECC(this, 0);
  return ShopEntity__get_TargetId(n, 0) == this->fields.itemId;
}