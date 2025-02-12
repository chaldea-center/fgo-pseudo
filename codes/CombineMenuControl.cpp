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

  if ( (byte_4BB7F62 & 1) == 0 )
  {
    sub_1C13D24(&CombineMenuControl_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_20622/*"img_combine_1"*/, v8);
    byte_4BB7F62 = 1;
  }
  CombineMenuControl_TypeInfo->static_fields->DefaultBgName = (struct System_String_o *)StringLiteral_20622/*"img_combine_1"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)CombineMenuControl_TypeInfo->static_fields,
    StringLiteral_20622/*"img_combine_1"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CombineMenuControl___ctor(CombineMenuControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BB7F61 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo___ctor__, method);
    sub_1C13D24(&System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__TypeInfo, v3);
    byte_4BB7F61 = 1;
  }
  this->fields.scaleOffset = 1.0;
  this->fields.transformTotal = 1;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo___ctor__);
  this->fields.combineItemInfoList = (struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *)v4;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.combineItemInfoList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_T__o *combineItemInfoList; // x21
  System_Func_object__bool__o *v16; // x23
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w22
  CombineMenuControl_CombineItemInfo_o *v19; // x21
  const MethodInfo *v20; // x3
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4BB7F59 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Any_CombineMenuControl_CombineItemInfo___, *(_QWORD *)&itemId);
    sub_1C13D24(&CombineMenuControl_CombineItemInfo_TypeInfo, v7);
    sub_1C13D24(&System_Func_CombineMenuControl_CombineItemInfo__bool__TypeInfo, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Add__, v9);
    sub_1C13D24(&Method_CombineMenuControl___c__DisplayClass40_0__AddCombineItemInfo_b__0__, v10);
    sub_1C13D24(&CombineMenuControl___c__DisplayClass40_0_TypeInfo, v11);
    byte_4BB7F59 = 1;
  }
  v12 = sub_1C13F70(CombineMenuControl___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_10;
  *(_DWORD *)(v12 + 16) = itemId;
  combineItemInfoList = (System_Collections_Generic_List_T__o *)this->fields.combineItemInfoList;
  v16 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_CombineMenuControl_CombineItemInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v12,
    Method_CombineMenuControl___c__DisplayClass40_0__AddCombineItemInfo_b__0__,
    0LL);
  if ( BasicHelper__Any_object_(
         combineItemInfoList,
         (System_Func_T__bool__o *)v16,
         (const MethodInfo_2F7A3D8 *)Method_BasicHelper_Any_CombineMenuControl_CombineItemInfo___) )
  {
    return;
  }
  v17 = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
  v18 = *(_DWORD *)(v12 + 16);
  v19 = (CombineMenuControl_CombineItemInfo_o *)sub_1C13F70(CombineMenuControl_CombineItemInfo_TypeInfo);
  CombineMenuControl_CombineItemInfo___ctor(v19, v18, needNum, v20);
  if ( !v17
    || (items = v17->fields._items,
        v28 = Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Add__,
        ++v17->fields._version,
        !items) )
  {
LABEL_10:
    sub_1C13F80(v13, v14);
  }
  size = v17->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)v19,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    v17->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v19;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v19, v21, v22, v23, v24, v25, v26);
  }
}


void __fastcall CombineMenuControl__ClearCombineItemInfo(CombineMenuControl_o *this, const MethodInfo *method)
{
  CombineMenuControl_o *v2; // x19
  struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *combineItemInfoList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4BB7F58 & 1) == 0 )
  {
    this = (CombineMenuControl_o *)sub_1C13D24(
                                     &Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__Clear__,
                                     method);
    byte_4BB7F58 = 1;
  }
  combineItemInfoList = v2->fields.combineItemInfoList;
  if ( !combineItemInfoList )
    sub_1C13F80(this, method);
  size = combineItemInfoList->fields._size;
  v5 = combineItemInfoList->fields._version + 1;
  combineItemInfoList->fields._size = 0;
  combineItemInfoList->fields._version = v5;
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
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4BB7F5E & 1) == 0 )
  {
    sub_1C13D24(&Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__, decide);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4BB7F5E = 1;
  }
  v4 = Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__;
  if ( (*((_BYTE *)Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C13D3C(Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C13D08(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v7);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall CombineMenuControl__GetCombineItemInfo(
        CombineMenuControl_o *this,
        System_Int32_array **itemIds,
        System_Int32_array **needNums,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  long double inited; // q0
  struct System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *combineItemInfoList; // x8
  __int64 size; // x22
  System_Int32_array *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Int32_array *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  unsigned __int64 v36; // x23
  System_Int32_array *v37; // x25
  struct System_Object_array *items; // x8
  System_Int32_array *v39; // x25
  char *v40; // x9
  _QWORD *v41; // x21
  __int64 v42; // x8
  __int64 v43; // x0
  __int64 v44; // x0
  System_Int32_array **v45; // x8
  System_Int32_array *v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  long double v53; // q0
  _QWORD *v54; // x20
  __int64 v55; // x8
  __int64 v56; // x0
  __int64 v57; // x0
  System_Int32_array **v58; // x8
  System_Int32_array *v59; // x1

  if ( (byte_4BB7F5A & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_Empty_int___, itemIds);
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___, v7);
    sub_1C13D24(&int___TypeInfo, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Count__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__, v10);
    byte_4BB7F5A = 1;
  }
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.combineItemInfoList,
                                                        (const MethodInfo_2F9A90C *)Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    combineItemInfoList = this->fields.combineItemInfoList;
    if ( !combineItemInfoList )
      goto LABEL_35;
    size = (unsigned int)combineItemInfoList->fields._size;
    v22 = (System_Int32_array *)sub_1C13DCC(int___TypeInfo, (unsigned int)size);
    *itemIds = v22;
    sub_1C13CC8((PartyOrganizationUtility_o *)itemIds, (int64_t)v22, v23, v24, v25, v26, v27, v28);
    v29 = (System_Int32_array *)sub_1C13DCC(int___TypeInfo, (unsigned int)size);
    *needNums = v29;
    sub_1C13CC8((PartyOrganizationUtility_o *)needNums, (int64_t)v29, v30, v31, v32, v33, v34, v35);
    if ( (int)size >= 1 )
    {
      v36 = 0LL;
      while ( 1 )
      {
        Item = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
        if ( !Item )
          break;
        v37 = *itemIds;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v36,
                                                              (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
        if ( !Item )
          break;
        items = Item->fields._items;
        if ( !items || !v37 )
          break;
        if ( v36 >= v37->max_length )
          goto LABEL_36;
        v37->m_Items[v36 + 1] = (int32_t)items->bounds;
        Item = (System_Collections_Generic_List_object__o *)this->fields.combineItemInfoList;
        if ( !Item )
          break;
        v39 = *needNums;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v36,
                                                              (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
        if ( !Item || !v39 )
          break;
        if ( v36 >= v39->max_length )
LABEL_36:
          sub_1C13F88(Item, v12);
        v40 = (char *)v39 + 4 * v36++;
        *((_DWORD *)v40 + 8) = Item->fields._size;
        if ( size == v36 )
          return;
      }
LABEL_35:
      sub_1C13F80(Item, v12);
    }
  }
  else
  {
    v41 = Method_System_Array_Empty_int___;
    v42 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v42 )
    {
      sub_1C65C5C(Method_System_Array_Empty_int___);
      v42 = v41[7];
    }
    v43 = *(_QWORD *)(v42 + 16);
    if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
      v43 = sub_1C65C00(inited);
    if ( !*(_DWORD *)(v43 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v43);
    v44 = *(_QWORD *)(v41[7] + 16LL);
    if ( (*(_BYTE *)(v44 + 309) & 1) == 0 )
      v44 = sub_1C65C00(inited);
    v45 = *(System_Int32_array ***)(v44 + 184);
    v46 = *v45;
    *itemIds = *v45;
    sub_1C13CC8((PartyOrganizationUtility_o *)itemIds, (int64_t)v46, v13, v14, v15, v16, v17, v18);
    v54 = Method_System_Array_Empty_int___;
    v55 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v55 )
    {
      sub_1C65C5C(Method_System_Array_Empty_int___);
      v55 = v54[7];
    }
    v56 = *(_QWORD *)(v55 + 16);
    if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
      v56 = sub_1C65C00(v53);
    if ( !*(_DWORD *)(v56 + 224) )
      v53 = j_il2cpp_runtime_class_init_0(v56);
    v57 = *(_QWORD *)(v54[7] + 16LL);
    if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
      v57 = sub_1C65C00(v53);
    v58 = *(System_Int32_array ***)(v57 + 184);
    v59 = *v58;
    *needNums = *v58;
    sub_1C13CC8((PartyOrganizationUtility_o *)needNums, (int64_t)v59, v47, v48, v49, v50, v51, v52);
  }
}


UserServantEntity_o *__fastcall CombineMenuControl__GetMaterialUsrSvtData(
        CombineMenuControl_o *this,
        const MethodInfo *method)
{
  CombineMenuControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UserServantEntity_o *v6; // x8
  PartyOrganizationUtility_o *p_selectMaterialUsrSvtEntity; // x19
  struct UserServantEntity_o *selectMaterialUsrSvtEntity; // t1
  __int128 v9; // q1
  int64_t v10; // x20
  Il2CppObject *Entity; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4BB7F55 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1C13D24(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    this = (CombineMenuControl_o *)sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BB7F55 = 1;
  }
  selectMaterialUsrSvtEntity = v2->fields.selectMaterialUsrSvtEntity;
  p_selectMaterialUsrSvtEntity = (PartyOrganizationUtility_o *)&v2->fields.selectMaterialUsrSvtEntity;
  v6 = selectMaterialUsrSvtEntity;
  if ( !selectMaterialUsrSvtEntity )
    goto LABEL_9;
  v9 = *(_OWORD *)&v6->fields.id.fields.fakeValue;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&v6->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v9;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v19 = v20;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v19, 0LL);
  this = (CombineMenuControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (CombineMenuControl_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
LABEL_9:
    sub_1C13F80(this, method);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v10,
             (const MethodInfo_323AB80 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_selectMaterialUsrSvtEntity->klass = (PartyOrganizationUtility_c *)Entity;
  sub_1C13CC8(p_selectMaterialUsrSvtEntity, (int64_t)Entity, v12, v13, v14, v15, v16, v17);
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
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_EventDelegate__o *monitor; // x20
  EventDelegate_Callback_o *v17; // x21

  if ( (byte_4BB7F51 & 1) == 0 )
  {
    sub_1C13D24(&EventDelegate_Callback_TypeInfo, method);
    sub_1C13D24(&EventDelegate_TypeInfo, v9);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v10);
    byte_4BB7F51 = 1;
  }
  this->fields.baseUserServantEntity = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.baseUserServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL),
        bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL),
        CombineMenuControl__ClearCombineItemInfo(this, v14),
        CombineMenuControl__UpdateItemLinkListWindowButton(this, v15),
        (bgTxtSprite = (UnityEngine_Component_o *)this->fields.helpBtn) == 0LL)
    || (bgTxtSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)bgTxtSprite,
                                                   (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___)) == 0LL )
  {
    sub_1C13F80(bgTxtSprite, v11);
  }
  monitor = (System_Collections_Generic_List_EventDelegate__o *)bgTxtSprite[4].monitor;
  v17 = (EventDelegate_Callback_o *)sub_1C13F70(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v17, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_47812524(monitor, v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineMenuControl__IsPurePrismExchangeItem(
        CombineMenuControl_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  PartyOrganizationUtility_o *p_itemExchangeShopEntList; // x19
  System_Object_array *klass; // x21
  struct ShopEntity_array *itemExchangeShopEntList; // t1
  ShopEntity_array *EnableEntitiyList; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Func_object__bool__o *v23; // x19

  if ( (byte_4BB7F5C & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Find_ShopEntity___, *(_QWORD *)&itemId);
    sub_1C13D24(&Method_DataManager_GetMaster_ShopMaster___, v5);
    sub_1C13D24(&DataManager_TypeInfo, v6);
    sub_1C13D24(&System_Func_ShopEntity__bool__TypeInfo, v7);
    sub_1C13D24(&Method_CombineMenuControl___c__DisplayClass43_0__IsPurePrismExchangeItem_b__0__, v8);
    sub_1C13D24(&CombineMenuControl___c__DisplayClass43_0_TypeInfo, v9);
    byte_4BB7F5C = 1;
  }
  v10 = sub_1C13F70(CombineMenuControl___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_DWORD *)(v10 + 16) = itemId;
  itemExchangeShopEntList = this->fields.itemExchangeShopEntList;
  p_itemExchangeShopEntList = (PartyOrganizationUtility_o *)&this->fields.itemExchangeShopEntList;
  klass = (System_Object_array *)itemExchangeShopEntList;
  if ( !itemExchangeShopEntList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( Master_object )
    {
      EnableEntitiyList = ShopMaster__GetEnableEntitiyList((ShopMaster_o *)Master_object, 1, 13, 0LL);
      p_itemExchangeShopEntList->klass = (PartyOrganizationUtility_c *)EnableEntitiyList;
      sub_1C13CC8(p_itemExchangeShopEntList, (int64_t)EnableEntitiyList, v17, v18, v19, v20, v21, v22);
      klass = (System_Object_array *)p_itemExchangeShopEntList->klass;
      goto LABEL_9;
    }
LABEL_10:
    sub_1C13F80(Master_object, v12);
  }
LABEL_9:
  v23 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_ShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v10,
    Method_CombineMenuControl___c__DisplayClass43_0__IsPurePrismExchangeItem_b__0__,
    0LL);
  return BasicHelper__Find_object_(
           klass,
           (System_Func_T__bool__o *)v23,
           (const MethodInfo_2F7AFA4 *)Method_BasicHelper_Find_ShopEntity___) != 0LL;
}


void __fastcall CombineMenuControl__OnClickBase(CombineMenuControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v5; // x1
  bool exists; // w0
  _QWORD *v7; // x8
  bool v8; // w20
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_4BB7F52 & 1) == 0 )
  {
    sub_1C13D24(&Method_CombineMenuControl_OnClickBase__, method);
    sub_1C13D24(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_4BB7F52 = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  exists = PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0LL);
  v7 = Method_CombineMenuControl_OnClickBase__;
  v8 = exists;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickBase__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C13D3C(Method_CombineMenuControl_OnClickBase__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C13D08(v7, v7[4]);
  if ( v8 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
  Instance = (PartyOrganizationUtility_o *)this->fields.combineRootComponent;
  if ( !Instance )
LABEL_10:
    sub_1C13F80(Instance, v5);
  CombineRootComponent__ShowServantList((CombineRootComponent_o *)Instance, 0LL);
}


void __fastcall CombineMenuControl__OnClickCombineItemLinkInfoListWindow(
        CombineMenuControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *Instance; // x0
  System_Int32_array *v10; // x20
  System_Int32_array *v11; // x21
  CommonUI_o *v12; // x22
  ItemLinkInfoWindowComponent_CallbackFunc_o *v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1
  System_Int32_array *v16; // [xsp+0h] [xbp-40h] BYREF
  System_Int32_array *itemIds; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BB7F5D & 1) == 0 )
  {
    sub_1C13D24(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, method);
    sub_1C13D24(&Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__, v4);
    sub_1C13D24(&Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4BB7F5D = 1;
  }
  v16 = 0LL;
  itemIds = 0LL;
  CombineMenuControl__GetCombineItemInfo(this, &itemIds, &v16, v2);
  v7 = Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C13D3C(Method_CombineMenuControl_OnClickCombineItemLinkInfoListWindow__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C13D08(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = v16;
  v10 = itemIds;
  v12 = (CommonUI_o *)Instance;
  v13 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C13F70(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
  ItemLinkInfoWindowComponent_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    (intptr_t)Method_CombineMenuControl_CloaseCombineItemLinkInfoListWindow__,
    0LL);
  if ( !v12 )
    sub_1C13F80(v14, v15);
  CommonUI__OpenItemLinkInfoListWindow(v12, v10, v11, v13, 0, 0LL);
}


void __fastcall CombineMenuControl__OnClickHelp(CombineMenuControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w0

  if ( (byte_4BB7F57 & 1) == 0 )
  {
    sub_1C13D24(&Method_CombineMenuControl_OnClickHelp__, method);
    byte_4BB7F57 = 1;
  }
  v3 = Method_CombineMenuControl_OnClickHelp__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C13D3C(Method_CombineMenuControl_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  v5 = ((__int64 (__fastcall *)(CombineMenuControl_o *, const char *))this->klass[1]._1.gc_desc)(
         this,
         this->klass[1]._1.name);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, v5, 0LL, 0LL);
}


void __fastcall CombineMenuControl__OnClickLvExceedConductionWire(CombineMenuControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4BB7F56 & 1) == 0 )
  {
    sub_1C13D24(&Method_CombineMenuControl_OnClickLvExceedConductionWire__, method);
    byte_4BB7F56 = 1;
  }
  v3 = Method_CombineMenuControl_OnClickLvExceedConductionWire__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickLvExceedConductionWire__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C13D3C(Method_CombineMenuControl_OnClickLvExceedConductionWire__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C13F80(0LL, v5);
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
  __int64 v8; // x1
  __int64 v9; // x1
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  int writeMasterDataThreadException_high; // w8
  Il2CppObject *Entity; // x0
  struct UserServantEntity_o **p_selectMaterialUsrSvtEntity; // x19
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4BB7F54 & 1) == 0 )
  {
    sub_1C13D24(&Method_CombineMenuControl_OnClickMaterial__, *(_QWORD *)&type);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1C13D24(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BB7F54 = 1;
  }
  v10 = Method_CombineMenuControl_OnClickMaterial__;
  if ( (*((_BYTE *)Method_CombineMenuControl_OnClickMaterial__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1C13D3C(Method_CombineMenuControl_OnClickMaterial__);
  v11 = (System_Reflection_MethodBase_o *)sub_1C13D08(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
  if ( type == 2 )
  {
    this->fields._targetType_k__BackingField = 2;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   selectUsrSvtId,
                   (const MethodInfo_323AB80 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        this->fields.selectMaterialUsrSvtEntity = (struct UserServantEntity_o *)Entity;
        p_selectMaterialUsrSvtEntity = &this->fields.selectMaterialUsrSvtEntity;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)p_selectMaterialUsrSvtEntity,
          (int64_t)Entity,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
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
    sub_1C13F80(Instance, v12);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  CombineRootComponent_o *combineRootComponent; // x0

  if ( (byte_4BB7F53 & 1) == 0 )
  {
    sub_1C13D24(&Method_CombineMenuControl_OnLongPushListView__, method);
    byte_4BB7F53 = 1;
  }
  if ( this->fields.baseUserServantEntity )
  {
    v3 = Method_CombineMenuControl_OnLongPushListView__;
    if ( (*((_BYTE *)Method_CombineMenuControl_OnLongPushListView__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_CombineMenuControl_OnLongPushListView__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    combineRootComponent = this->fields.combineRootComponent;
    this->fields._targetType_k__BackingField = 0;
    if ( !combineRootComponent )
      sub_1C13F80(0LL, v5);
    CombineRootComponent__SelectShowServant(combineRootComponent, 0LL);
  }
}


void __fastcall CombineMenuControl__Quit(CombineMenuControl_o *this, const MethodInfo *method)
{
  System_String_array *assetList; // x21
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1

  if ( (byte_4BB7F5F & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, method);
    byte_4BB7F5F = 1;
  }
  assetList = this->fields.assetList;
  if ( assetList )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_38944296(assetList, 0LL);
    this->fields.assetList = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.assetList, 0LL, v4, v5, v6, v7, v8, v9);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C13F80(0LL, v11);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall CombineMenuControl__SetInfoBgSprite(CombineMenuControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *infoBack; // x20
  __int64 v6; // x1
  int32_t transformTotal; // w20
  UISprite_o *v8; // x19
  void *v9; // x0
  System_String_o *v10; // x8

  if ( (byte_4BB7F60 & 1) == 0 )
  {
    sub_1C13D24(&CombineMenuControl_TypeInfo, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    sub_1C13D24(&StringLiteral_16382/*"^instanceId:[-0-9]+$"*/, v4);
    byte_4BB7F60 = 1;
  }
  infoBack = (UnityEngine_Object_o *)this->fields.infoBack;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(infoBack, 0LL, 0LL) )
  {
    transformTotal = this->fields.transformTotal;
    v8 = this->fields.infoBack;
    v9 = CombineMenuControl_TypeInfo;
    if ( !CombineMenuControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineMenuControl_TypeInfo);
      v9 = CombineMenuControl_TypeInfo;
    }
    v10 = (System_String_o *)**((_QWORD **)v9 + 23);
    if ( transformTotal >= 2 )
    {
      v9 = System_String__Concat_62967944(**((System_String_o ***)v9 + 23), (System_String_o *)StringLiteral_16382/*"^instanceId:[-0-9]+$"*/, 0LL);
      if ( !v8 )
        goto LABEL_14;
      v10 = (System_String_o *)v9;
    }
    else if ( !v8 )
    {
LABEL_14:
      sub_1C13F80(v9, v6);
    }
    UISprite__set_spriteName(v8, v10, 0LL);
  }
}


void __fastcall CombineMenuControl__UpdateItemLinkListWindowButton(
        CombineMenuControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *itemLinkInfoListBtn; // x20
  bool v6; // w0
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Component_o *Instance; // x0
  UnityEngine_Component_c *klass; // x8

  if ( (byte_4BB7F5B & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4BB7F5B = 1;
  }
  itemLinkInfoListBtn = (UnityEngine_Object_o *)this->fields.itemLinkInfoListBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(itemLinkInfoListBtn, 0LL, 0LL);
  gameObject = 0LL;
  if ( v6 )
  {
    Instance = (UnityEngine_Component_o *)this->fields.itemLinkInfoListBtn;
    if ( !Instance )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject(Instance, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)gameObject, 0LL, 0LL) )
  {
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                                (const MethodInfo_2F9A90C *)Method_System_Linq_Enumerable_Any_CombineMenuControl_CombineItemInfo___);
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
        sub_1C13F80(Instance, v7);
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
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  CombineMenuControl_CombineItemInfo_Fields *p_fields; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BB7F63 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&id);
    sub_1C13D24(&DataManager_TypeInfo, v7);
    sub_1C13D24(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    byte_4BB7F63 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    sub_1C13F80(0LL, v10);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             id,
             (const MethodInfo_3238624 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields._ItemEntity_k__BackingField = (struct ItemEntity_o *)Entity;
  p_fields = &this->fields;
  sub_1C13CC8((PartyOrganizationUtility_o *)p_fields, (int64_t)Entity, v13, v14, v15, v16, v17, v18);
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
    sub_1C13F80(this, n);
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
    sub_1C13F80(this, 0LL);
  return ShopEntity__get_TargetId(n, 0LL) == this->fields.itemId;
}