void __fastcall CombineMenuControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B199C1 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineMenuControl_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_20506/*"img_combinebg_03"*/, v8, v9);
    byte_4B199C1 = 1;
  }
  CombineMenuControl_TypeInfo->static_fields->DefaultBgName = (struct System_String_o *)StringLiteral_20506/*"img_combinebg_03"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CombineMenuControl_TypeInfo->static_fields,
    StringLiteral_20506/*"img_combinebg_03"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CombineMenuControl___ctor(CombineMenuControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B199C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__TypeInfo, v5, v6);
    byte_4B199C0 = 1;
  }
  this->fields.scaleOffset = 1.0;
  this->fields.transformTotal = 1;
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo___ctor__);
  this->fields.combineItemInfoList = (struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.combineItemInfoList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineMenuControl__AddCombineItemInfo(
        CombineMenuControl_o *this,
        int32_t itemId,
        int32_t needNum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_T__o *combineItemInfoList; // x21
  System_Func_object__bool__o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_object__o *v27; // x20
  int32_t v28; // w22
  CombineMenuControl_CombineItemInfo_o *v29; // x21
  const MethodInfo *v30; // x3
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0

  if ( (byte_4B199B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_CombineMenuControl_CombineItemInfo___, *(_QWORD *)&itemId, *(_QWORD *)&needNum);
    sub_1BCA7E0(&CombineMenuControl_CombineItemInfo_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Func_CombineMenuControl_CombineItemInfo__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Add__, v11, v12);
    sub_1BCA7E0(&Method_CombineMenuControl___c__DisplayClass40_0__AddCombineItemInfo_b__0__, v13, v14);
    sub_1BCA7E0(&CombineMenuControl___c__DisplayClass40_0_TypeInfo, v15, v16);
    byte_4B199B8 = 1;
  }
  v17 = sub_1BCAA2C(CombineMenuControl___c__DisplayClass40_0_TypeInfo, *(_QWORD *)&itemId, *(_QWORD *)&needNum, method);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_10;
  *(_DWORD *)(v17 + 16) = itemId;
  combineItemInfoList = (System_Collections_Generic_List_T__o *)this->fields.combineItemInfoList;
  v23 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_CombineMenuControl_CombineItemInfo__bool__TypeInfo,
                                         v19,
                                         v20,
                                         v21);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v17,
    Method_CombineMenuControl___c__DisplayClass40_0__AddCombineItemInfo_b__0__,
    0LL);
  if ( BasicHelper__Any_object_(
         combineItemInfoList,
         (System_Func_T__bool__o *)v23,
         (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_CombineMenuControl_CombineItemInfo___) )
  {
    return;
  }
  v27 = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
  v28 = *(_DWORD *)(v17 + 16);
  v29 = (CombineMenuControl_CombineItemInfo_o *)sub_1BCAA2C(CombineMenuControl_CombineItemInfo_TypeInfo, v24, v25, v26);
  CombineMenuControl_CombineItemInfo___ctor(v29, v28, needNum, v30);
  if ( !v27
    || (items = v27->fields._items,
        v38 = Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Add__,
        ++v27->fields._version,
        !items) )
  {
LABEL_10:
    sub_1BCAA3C(v18, v19);
  }
  size = v27->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v27,
      (Il2CppObject *)v29,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &items->obj.klass + size;
    v27->fields._size = size + 1;
    v40[4] = (Il2CppClass *)v29;
    sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 4), (int64_t)v29, v31, v32, v33, v34, v35, v36);
  }
}


void __fastcall CombineMenuControl__ClearCombineItemInfo(CombineMenuControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CombineMenuControl_o *v3; // x19
  struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *combineItemInfoList; // x8
  int32_t size; // w2
  int v6; // w9

  v3 = this;
  if ( (byte_4B199B7 & 1) == 0 )
  {
    this = (CombineMenuControl_o *)sub_1BCA7E0(
                                     &Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Clear__,
                                     method,
                                     v2);
    byte_4B199B7 = 1;
  }
  combineItemInfoList = v3->fields.combineItemInfoList;
  if ( !combineItemInfoList )
    sub_1BCAA3C(this, method);
  size = combineItemInfoList->fields._size;
  v6 = combineItemInfoList->fields._version + 1;
  combineItemInfoList->fields._size = 0;
  combineItemInfoList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)combineItemInfoList->fields._items, 0, size, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineMenuControl__CloaseCombineItemLinkInfoListWindow(
        CombineMenuControl_o *this,
        bool decide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B199BD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__, decide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    byte_4B199BD = 1;
  }
  v5 = Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__;
  if ( (*((_BYTE *)Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall CombineMenuControl__GetCombineItemInfo(
        CombineMenuControl_o *this,
        System_Int32_array **itemIds,
        System_Int32_array **needNums,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  long double inited; // q0
  struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *combineItemInfoList; // x8
  __int64 size; // x22
  System_Int32_array *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Int32_array *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  unsigned __int64 v40; // x23
  System_Int32_array *v41; // x25
  struct System_Object_array *items; // x8
  System_Int32_array *v43; // x25
  char *v44; // x9
  _QWORD *v45; // x21
  __int64 v46; // x8
  __int64 v47; // x0
  __int64 v48; // x0
  System_Int32_array **v49; // x8
  System_Int32_array *v50; // x1
  __int64 v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  long double v58; // q0
  _QWORD *v59; // x20
  __int64 v60; // x8
  __int64 v61; // x0
  __int64 v62; // x0
  System_Int32_array **v63; // x8
  System_Int32_array *v64; // x1

  if ( (byte_4B199B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, itemIds, needNums);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___, v7, v8);
    sub_1BCA7E0(&int___TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__, v13, v14);
    byte_4B199B9 = 1;
  }
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.combineItemInfoList,
                                                        (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    combineItemInfoList = this->fields.combineItemInfoList;
    if ( !combineItemInfoList )
      goto LABEL_35;
    size = (unsigned int)combineItemInfoList->fields._size;
    v26 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)size);
    *itemIds = v26;
    sub_1BCA784((PartyOrganizationUtility_o *)itemIds, (int64_t)v26, v27, v28, v29, v30, v31, v32);
    v33 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)size);
    *needNums = v33;
    sub_1BCA784((PartyOrganizationUtility_o *)needNums, (int64_t)v33, v34, v35, v36, v37, v38, v39);
    if ( (int)size >= 1 )
    {
      v40 = 0LL;
      while ( 1 )
      {
        Item = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
        if ( !Item )
          break;
        v41 = *itemIds;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v40,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
        if ( !Item )
          break;
        items = Item->fields._items;
        if ( !items || !v41 )
          break;
        if ( v40 >= v41->max_length )
          goto LABEL_36;
        v41->m_Items[v40 + 1] = (int32_t)items->bounds;
        Item = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
        if ( !Item )
          break;
        v43 = *needNums;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v40,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
        if ( !Item || !v43 )
          break;
        if ( v40 >= v43->max_length )
LABEL_36:
          sub_1BCAA44(Item, v16);
        v44 = (char *)v43 + 4 * v40++;
        *((_DWORD *)v44 + 8) = Item->fields._size;
        if ( size == v40 )
          return;
      }
LABEL_35:
      sub_1BCAA3C(Item, v16);
    }
  }
  else
  {
    v45 = Method_System_Array_Empty_int___;
    v46 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v46 )
    {
      sub_1C1C718(Method_System_Array_Empty_int___, v16);
      v46 = v45[7];
    }
    v47 = *(_QWORD *)(v46 + 16);
    if ( (*(_BYTE *)(v47 + 309) & 1) == 0 )
      v47 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v47 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v47, v16);
    v48 = *(_QWORD *)(v45[7] + 16LL);
    if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
      v48 = sub_1C1C6BC(inited);
    v49 = *(System_Int32_array ***)(v48 + 184);
    v50 = *v49;
    *itemIds = *v49;
    sub_1BCA784((PartyOrganizationUtility_o *)itemIds, (int64_t)v50, v17, v18, v19, v20, v21, v22);
    v59 = Method_System_Array_Empty_int___;
    v60 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v60 )
    {
      sub_1C1C718(Method_System_Array_Empty_int___, v51);
      v60 = v59[7];
    }
    v61 = *(_QWORD *)(v60 + 16);
    if ( (*(_BYTE *)(v61 + 309) & 1) == 0 )
      v61 = sub_1C1C6BC(v58);
    if ( !*(_DWORD *)(v61 + 224) )
      v58 = j_il2cpp_runtime_class_init_0(v61, v51);
    v62 = *(_QWORD *)(v59[7] + 16LL);
    if ( (*(_BYTE *)(v62 + 309) & 1) == 0 )
      v62 = sub_1C1C6BC(v58);
    v63 = *(System_Int32_array ***)(v62 + 184);
    v64 = *v63;
    *needNums = *v63;
    sub_1BCA784((PartyOrganizationUtility_o *)needNums, (int64_t)v64, v52, v53, v54, v55, v56, v57);
  }
}


UserServantEntity_o *__fastcall CombineMenuControl__GetMaterialUsrSvtData(
        CombineMenuControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CombineMenuControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct UserServantEntity_o *v10; // x8
  PartyOrganizationUtility_o *p_selectMaterialUsrSvtEntity; // x19
  struct UserServantEntity_o *selectMaterialUsrSvtEntity; // t1
  __int128 v13; // q1
  int64_t v14; // x20
  Il2CppObject *Entity; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_4B199B4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
    this = (CombineMenuControl_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B199B4 = 1;
  }
  selectMaterialUsrSvtEntity = v3->fields.selectMaterialUsrSvtEntity;
  p_selectMaterialUsrSvtEntity = (PartyOrganizationUtility_o *)&v3->fields.selectMaterialUsrSvtEntity;
  v10 = selectMaterialUsrSvtEntity;
  if ( !selectMaterialUsrSvtEntity )
    goto LABEL_9;
  v13 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
  *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v24.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v23 = v24;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v23, 0LL);
  this = (CombineMenuControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineMenuControl_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v14,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_selectMaterialUsrSvtEntity->klass = (PartyOrganizationUtility_c *)Entity;
  sub_1BCA784(p_selectMaterialUsrSvtEntity, (int64_t)Entity, v16, v17, v18, v19, v20, v21);
  return (UserServantEntity_o *)Entity;
}


void __fastcall CombineMenuControl__InitCombineItemInfo(CombineMenuControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CombineMenuControl__ClearCombineItemInfo(this, method);
  CombineMenuControl__UpdateItemLinkListWindowButton(this, v3);
}


void __fastcall CombineMenuControl__InitMenuControl(CombineMenuControl_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Collections_Generic_List_EventDelegate__o *monitor; // x20
  EventDelegate_Callback_o *v21; // x21
  __int64 v22; // x1

  if ( (byte_4B199B0 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, method, v2);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v11, v12);
    byte_4B199B0 = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL),
        bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL),
        CombineMenuControl__ClearCombineItemInfo(this, v16),
        CombineMenuControl__UpdateItemLinkListWindowButton(this, v17),
        (bgTxtSprite = (UnityEngine_Component_o *)this->fields.helpBtn) == 0LL)
    || (bgTxtSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)bgTxtSprite,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
    sub_1BCAA3C(bgTxtSprite, v13);
  }
  monitor = (System_Collections_Generic_List_EventDelegate__o *)bgTxtSprite[4].monitor;
  v21 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v13, v18, v19);
  EventDelegate_Callback___ctor(v21, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v22);
  EventDelegate__Set_47333340(monitor, v21, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineMenuControl__IsPurePrismExchangeItem(
        CombineMenuControl_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x20
  Il2CppObject *Master_object; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  PartyOrganizationUtility_o *p_itemExchangeShopEntList; // x19
  System_Object_array *klass; // x21
  struct ShopEntity_array *itemExchangeShopEntList; // t1
  ShopEntity_array *EnableEntitiyList; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Func_object__bool__o *v31; // x19

  if ( (byte_4B199BB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Find_ShopEntity___, *(_QWORD *)&itemId, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Func_ShopEntity__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_CombineMenuControl___c__DisplayClass43_0__IsPurePrismExchangeItem_b__0__, v12, v13);
    sub_1BCA7E0(&CombineMenuControl___c__DisplayClass43_0_TypeInfo, v14, v15);
    byte_4B199BB = 1;
  }
  v16 = sub_1BCAA2C(CombineMenuControl___c__DisplayClass43_0_TypeInfo, *(_QWORD *)&itemId, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_10;
  *(_DWORD *)(v16 + 16) = itemId;
  itemExchangeShopEntList = this->fields.itemExchangeShopEntList;
  p_itemExchangeShopEntList = (PartyOrganizationUtility_o *)&this->fields.itemExchangeShopEntList;
  klass = (System_Object_array *)itemExchangeShopEntList;
  if ( !itemExchangeShopEntList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopMaster___);
    if ( Master_object )
    {
      EnableEntitiyList = ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Master_object, 1, 13, 0LL);
      p_itemExchangeShopEntList->klass = (PartyOrganizationUtility_c *)EnableEntitiyList;
      sub_1BCA784(p_itemExchangeShopEntList, (int64_t)EnableEntitiyList, v25, v26, v27, v28, v29, v30);
      klass = (System_Object_array *)p_itemExchangeShopEntList->klass;
      goto LABEL_9;
    }
LABEL_10:
    sub_1BCAA3C(Master_object, v18);
  }
LABEL_9:
  v31 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ShopEntity__bool__TypeInfo, v18, v19, v20);
  System_Func_object__bool____ctor(
    v31,
    (Il2CppObject *)v16,
    Method_CombineMenuControl___c__DisplayClass43_0__IsPurePrismExchangeItem_b__0__,
    0LL);
  return BasicHelper__Find_object_(
           klass,
           (System_Func_T__bool__o *)v31,
           (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_ShopEntity___) != 0LL;
}


void __fastcall CombineMenuControl__OnClickBase(CombineMenuControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v7; // x1
  bool exists; // w0
  _QWORD *v9; // x8
  bool v10; // w20
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_4B199B1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineMenuControl_OnClickBase__, method, v2);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v4, v5);
    byte_4B199B1 = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  exists = PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0LL);
  v9 = Method_CombineMenuControl_OnClickBase__;
  v10 = exists;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickBase__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1BCA7F8(Method_CombineMenuControl_OnClickBase__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
  if ( v10 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  Instance = (PartyOrganizationUtility_o *)this->fields.combineRootComponent;
  if ( !Instance )
LABEL_10:
    sub_1BCAA3C(Instance, v7);
  CombineRootComponent__ShowServantList((CombineRootComponent_o *)Instance, 0LL);
}


void __fastcall CombineMenuControl__OnClickCombineItemLinkInfoListWindow(
        CombineMenuControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  Il2CppObject *Instance; // x0
  System_Int32_array *v14; // x20
  System_Int32_array *v15; // x21
  CommonUI_o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  ItemLinkInfoWindowComponent_CallbackFunc_o *v20; // x23
  __int64 v21; // x0
  __int64 v22; // x1
  System_Int32_array *v23; // [xsp+0h] [xbp-40h] BYREF
  System_Int32_array *itemIds; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B199BC & 1) == 0 )
  {
    sub_1BCA7E0(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__, v5, v6);
    sub_1BCA7E0(&Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    byte_4B199BC = 1;
  }
  v23 = 0LL;
  itemIds = 0LL;
  CombineMenuControl__GetCombineItemInfo(this, &itemIds, &v23, v3);
  v11 = Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1BCA7F8(Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__);
  v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = v23;
  v14 = itemIds;
  v16 = (CommonUI_o *)Instance;
  v20 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                        ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo,
                                                        v17,
                                                        v18,
                                                        v19);
  ItemLinkInfoWindowComponent_CallbackFunc___ctor(
    v20,
    (Il2CppObject *)this,
    (intptr_t)Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__,
    0LL);
  if ( !v16 )
    sub_1BCAA3C(v21, v22);
  CommonUI__OpenItemLinkInfoListWindow(v16, v14, v15, v20, 0, 0LL);
}


void __fastcall CombineMenuControl__OnClickHelp(CombineMenuControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  int32_t v6; // w0

  if ( (byte_4B199B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineMenuControl_OnClickHelp__, method, v2);
    byte_4B199B6 = 1;
  }
  v4 = Method_CombineMenuControl_OnClickHelp__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickHelp__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_CombineMenuControl_OnClickHelp__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  v6 = ((__int64 (__fastcall *)(CombineMenuControl_o *, const char *))this->klass[1]._1.gc_desc)(
         this,
         this->klass[1]._1.name);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, v6, 0LL, 0LL);
}


void __fastcall CombineMenuControl__OnClickLvExceedConductionWire(CombineMenuControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4B199B5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineMenuControl_OnClickLvExceedConductionWire__, method, v2);
    byte_4B199B5 = 1;
  }
  v4 = Method_CombineMenuControl_OnClickLvExceedConductionWire__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickLvExceedConductionWire__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_CombineMenuControl_OnClickLvExceedConductionWire__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BCAA3C(0LL, v6);
  CombineRootComponent__ConductionWireCombine(combineRootComponent, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineMenuControl__OnClickMaterial(
        CombineMenuControl_o *this,
        int32_t type,
        int64_t selectUsrSvtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  __int64 v15; // x1
  DataManager_o *Instance; // x0
  int writeMasterDataThreadException_high; // w8
  Il2CppObject *Entity; // x0
  struct UserServantEntity_o **p_selectMaterialUsrSvtEntity; // x19
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B199B3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineMenuControl_OnClickMaterial__, *(_QWORD *)&type, selectUsrSvtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B199B3 = 1;
  }
  v13 = Method_CombineMenuControl_OnClickMaterial__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickMaterial__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1BCA7F8(Method_CombineMenuControl_OnClickMaterial__);
  v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
  if ( type == 2 )
  {
    this->fields._targetType_k__BackingField = 2;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   selectUsrSvtId,
                   (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        this->fields.selectMaterialUsrSvtEntity = (struct UserServantEntity_o *)Entity;
        p_selectMaterialUsrSvtEntity = &this->fields.selectMaterialUsrSvtEntity;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)p_selectMaterialUsrSvtEntity,
          (int64_t)Entity,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
        Instance = (DataManager_o *)*(p_selectMaterialUsrSvtEntity - 13);
        if ( Instance )
        {
          CombineRootComponent__SelectShowServant((CombineRootComponent_o *)Instance, 0LL);
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
    sub_1BCAA3C(Instance, v15);
  writeMasterDataThreadException_high = HIDWORD(Instance[2].fields.writeMasterDataThreadException);
  switch ( writeMasterDataThreadException_high )
  {
    case 11:
      CombineRootComponent__ShowNpMaterialSvtList((CombineRootComponent_o *)Instance, 0LL);
      break;
    case 4:
      CombineRootComponent__ShowSvtEqMaterialList((CombineRootComponent_o *)Instance, 0LL);
      break;
    case 3:
      CombineRootComponent__ShowMaterialSvtList((CombineRootComponent_o *)Instance, 0LL);
      break;
  }
}


void __fastcall CombineMenuControl__OnLongPushListView(CombineMenuControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4B199B2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineMenuControl_OnLongPushListView__, method, v2);
    byte_4B199B2 = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    v4 = Method_CombineMenuControl_OnLongPushListView__;
    if ( (*((_BYTE *)Method_CombineMenuControl_OnLongPushListView__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_CombineMenuControl_OnLongPushListView__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    combineRootComponent = this->fields.combineRootComponent;
    this->fields._targetType_k__BackingField = 0;
    if ( !combineRootComponent )
      sub_1BCAA3C(0LL, v6);
    CombineRootComponent__SelectShowServant(combineRootComponent, 0LL);
  }
}


void __fastcall CombineMenuControl__Quit(CombineMenuControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_array *assetList; // x21
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1

  if ( (byte_4B199BE & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    byte_4B199BE = 1;
  }
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAssetStorage_38514680(assetList, 0LL);
    this->fields.assetList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetList, 0LL, v5, v6, v7, v8, v9, v10);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v12);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall CombineMenuControl__SetInfoBgSprite(CombineMenuControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *infoBack; // x20
  __int64 v9; // x1
  int32_t transformTotal; // w20
  UISprite_o *v11; // x19
  void *v12; // x0
  System_String_o *v13; // x8

  if ( (byte_4B199BF & 1) == 0 )
  {
    sub_1BCA7E0(&CombineMenuControl_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_16298/*"_2"*/, v6, v7);
    byte_4B199BF = 1;
  }
  infoBack = (UnityEngine_Object_o *)this->fields.infoBack;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(infoBack, 0LL, 0LL) )
  {
    transformTotal = this->fields.transformTotal;
    v11 = this->fields.infoBack;
    v12 = CombineMenuControl_TypeInfo;
    if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo, v9);
      v12 = CombineMenuControl_TypeInfo;
    }
    v13 = (System_String_o *)**((_QWORD **)v12 + 23);
    if ( transformTotal >= 2 )
    {
      v12 = System_String__Concat_62401220(
              **((System_String_o ***)v12 + 23),
              (System_String_o *)StringLiteral_16298/*"_2"*/,
              0LL);
      if ( !v11 )
        goto LABEL_14;
      v13 = (System_String_o *)v12;
    }
    else if ( !v11 )
    {
LABEL_14:
      sub_1BCAA3C(v12, v9);
    }
    UISprite__set_spriteName(v11, v13, 0LL);
  }
}


void __fastcall CombineMenuControl__UpdateItemLinkListWindowButton(
        CombineMenuControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemLinkInfoListBtn; // x20
  bool v9; // w0
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Component_o *Instance; // x0
  UnityEngine_Component_c *klass; // x8

  if ( (byte_4B199BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B199BA = 1;
  }
  itemLinkInfoListBtn = (UnityEngine_Object_o *)this->fields.itemLinkInfoListBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v9 = UnityEngine_Object__op_Inequality(itemLinkInfoListBtn, 0LL, 0LL);
  gameObject = 0LL;
  if ( v9 )
  {
    Instance = (UnityEngine_Component_o *)this->fields.itemLinkInfoListBtn;
    if ( !Instance )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject(Instance, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)gameObject, 0LL, 0LL) )
  {
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    Instance = (UnityEngine_Component_o *)CommonUI__get_IsEnableItemLinkInfoListWindow((CommonUI_o *)Instance, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !gameObject )
        goto LABEL_24;
      if ( this->fields.baseUserServantEntity )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        Instance = (UnityEngine_Component_o *)System_Linq_Enumerable__Any_object_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.combineItemInfoList,
                                                (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
        if ( this->fields.itemLinkInfoListBtn )
        {
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.itemLinkInfoListBtn, 1, 0LL);
            Instance = (UnityEngine_Component_o *)this->fields.itemLinkInfoListBtn;
            if ( Instance )
            {
              klass = Instance->klass;
LABEL_23:
              ((void (*)(void))klass[1]._1.implementedInterfaces)();
              return;
            }
          }
          else
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.itemLinkInfoListBtn, 0, 0LL);
            Instance = (UnityEngine_Component_o *)this->fields.itemLinkInfoListBtn;
            if ( Instance )
            {
              klass = Instance->klass;
              goto LABEL_23;
            }
          }
        }
LABEL_24:
        sub_1BCAA3C(Instance, v10);
      }
    }
    else if ( !gameObject )
    {
      goto LABEL_24;
    }
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
}


bool __fastcall CombineMenuControl__get_IsExeCombine(CombineMenuControl_o *this, const MethodInfo *method)
{
  return this->fields._IsExeCombine_k__BackingField;
}


int32_t __fastcall CombineMenuControl__get_TransformTotal(CombineMenuControl_o *this, const MethodInfo *method)
{
  return this->fields.transformTotal;
}


int32_t __fastcall CombineMenuControl__get_targetType(CombineMenuControl_o *this, const MethodInfo *method)
{
  return this->fields._targetType_k__BackingField;
}


void __fastcall CombineMenuControl__set_IsExeCombine(CombineMenuControl_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsExeCombine_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineMenuControl__set_TransformTotal(
        CombineMenuControl_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.transformTotal = value;
  CombineMenuControl__SetInfoBgSprite(this, *(const MethodInfo **)&value);
}


void __fastcall CombineMenuControl__set_targetType(CombineMenuControl_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._targetType_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineMenuControl_CombineItemInfo___ctor(
        CombineMenuControl_CombineItemInfo_o *this,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x0
  CombineMenuControl_CombineItemInfo_Fields *p_fields; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B199C2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&id, *(_QWORD *)&num);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9, v10);
    byte_4B199C2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v13);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             id,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields._ItemEntity_k__BackingField = (struct ItemEntity_o *)Entity;
  p_fields = &this->fields;
  sub_1BCA784((PartyOrganizationUtility_o *)p_fields, (int64_t)Entity, v16, v17, v18, v19, v20, v21);
  p_fields->_NeedNum_k__BackingField = num;
}


ItemEntity_o *__fastcall CombineMenuControl_CombineItemInfo__get_ItemEntity(
        CombineMenuControl_CombineItemInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._ItemEntity_k__BackingField;
}


int32_t __fastcall CombineMenuControl_CombineItemInfo__get_NeedNum(
        CombineMenuControl_CombineItemInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._NeedNum_k__BackingField;
}


void __fastcall CombineMenuControl___c__DisplayClass40_0___ctor(
        CombineMenuControl___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CombineMenuControl___c__DisplayClass40_0___AddCombineItemInfo_b__0(
        CombineMenuControl___c__DisplayClass40_0_o *this,
        CombineMenuControl_CombineItemInfo_o *n,
        const MethodInfo *method)
{
  struct ItemEntity_o *ItemEntity_k__BackingField; // x8

  if ( !n || (ItemEntity_k__BackingField = n->fields._ItemEntity_k__BackingField) == 0LL )
    sub_1BCAA3C(this, n);
  return ItemEntity_k__BackingField->fields.id == this->fields.itemId;
}


void __fastcall CombineMenuControl___c__DisplayClass43_0___ctor(
        CombineMenuControl___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CombineMenuControl___c__DisplayClass43_0___IsPurePrismExchangeItem_b__0(
        CombineMenuControl___c__DisplayClass43_0_o *this,
        ShopEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BCAA3C(this, 0LL);
  return ShopEntity__get_TargetId(n, 0LL) == this->fields.itemId;
}