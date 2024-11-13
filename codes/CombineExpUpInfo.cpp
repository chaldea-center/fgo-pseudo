void __fastcall CombineExpUpInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B19D8C & 1) == 0 )
  {
    sub_1BCA7E0(&CombineExpUpInfo_TypeInfo, v1, v2);
    byte_4B19D8C = 1;
  }
  *CombineExpUpInfo_TypeInfo->static_fields = (struct CombineExpUpInfo_StaticFields)xmmword_BD1ED0;
}


void __fastcall CombineExpUpInfo___ctor(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
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
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x20
  int64_t v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Collections_Generic_List_T__o *v49; // x20
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct System_Object_array *items; // x9
  _QWORD *v57; // x8
  __int64 size; // x10
  __int64 v59; // x10
  __int64 v60; // x10
  __int64 v61; // x10
  __int64 v62; // x10
  __int64 v63; // x10
  __int64 v64; // x10
  __int64 v65; // x10

  if ( (byte_4B19D8B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo, v6, v7);
    sub_1BCA7E0(&string___TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_17690/*"btn_hp_"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17636/*"btn_atk_"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17686/*"btn_experience_"*/, v14, v15);
    byte_4B19D8B = 1;
  }
  v16 = sub_1BCA888(string___TypeInfo, 3LL);
  if ( !v16 )
    goto LABEL_34;
  v24 = v16;
  if ( !*(_DWORD *)(v16 + 24)
    || (v25 = StringLiteral_17686/*"btn_experience_"*/,
        *(_QWORD *)(v16 + 32) = StringLiteral_17686/*"btn_experience_"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 32), v25, v18, v19, v20, v21, v22, v23),
        *(_DWORD *)(v24 + 24) <= 1u)
    || (v32 = StringLiteral_17636/*"btn_atk_"*/,
        *(_QWORD *)(v24 + 40) = StringLiteral_17636/*"btn_atk_"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 40), v32, v26, v27, v28, v29, v30, v31),
        *(_DWORD *)(v24 + 24) <= 2u) )
  {
    sub_1BCAA44(v16, v17);
  }
  v39 = StringLiteral_17690/*"btn_hp_"*/;
  *(_QWORD *)(v24 + 48) = StringLiteral_17690/*"btn_hp_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 48), v39, v33, v34, v35, v36, v37, v38);
  this->fields.btnSpriteNameList = (struct System_String_array *)v24;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.btnSpriteNameList, v24, v40, v41, v42, v43, v44, v45);
  v49 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo,
                                                  v46,
                                                  v47,
                                                  v48);
  System_Collections_Generic_List_Int32Enum____ctor(
    v49,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__);
  if ( !v49 )
    goto LABEL_34;
  items = v49->fields._items;
  v57 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
  ++v49->fields._version;
  if ( !items )
    goto LABEL_34;
  size = v49->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v49,
      1,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    items = v49->fields._items;
    v57 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v49->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v49->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 1;
    ++v49->fields._version;
  }
  v59 = v49->fields._size;
  if ( (unsigned int)v59 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v49,
      2,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    items = v49->fields._items;
    v57 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v49->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v49->fields._size = v59 + 1;
    *((_DWORD *)items->m_Items + v59) = 2;
    ++v49->fields._version;
  }
  v60 = v49->fields._size;
  if ( (unsigned int)v60 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v49,
      3,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    items = v49->fields._items;
    v57 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v49->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v49->fields._size = v60 + 1;
    *((_DWORD *)items->m_Items + v60) = 3;
    ++v49->fields._version;
  }
  v61 = v49->fields._size;
  if ( (unsigned int)v61 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v49,
      4,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    items = v49->fields._items;
    v57 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v49->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v49->fields._size = v61 + 1;
    *((_DWORD *)items->m_Items + v61) = 4;
    ++v49->fields._version;
  }
  v62 = v49->fields._size;
  if ( (unsigned int)v62 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v49,
      5,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    items = v49->fields._items;
    v57 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v49->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v49->fields._size = v62 + 1;
    *((_DWORD *)items->m_Items + v62) = 5;
    ++v49->fields._version;
  }
  v63 = v49->fields._size;
  if ( (unsigned int)v63 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v49,
      6,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    items = v49->fields._items;
    v57 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v49->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v49->fields._size = v63 + 1;
    *((_DWORD *)items->m_Items + v63) = 6;
    ++v49->fields._version;
  }
  v64 = v49->fields._size;
  if ( (unsigned int)v64 < items->max_length )
  {
    v49->fields._size = v64 + 1;
    *((_DWORD *)items->m_Items + v64) = 7;
    ++v49->fields._version;
    goto LABEL_30;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v49,
    7,
    *(const MethodInfo_3587464 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
  items = v49->fields._items;
  v57 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
  ++v49->fields._version;
  if ( !items )
LABEL_34:
    sub_1BCAA3C(v16, v17);
LABEL_30:
  v65 = v49->fields._size;
  if ( (unsigned int)v65 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v49,
      1001,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
  }
  else
  {
    v49->fields._size = v65 + 1;
    *((_DWORD *)items->m_Items + v65) = 1001;
  }
  this->fields.SortClassOrder = (struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *)v49;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.SortClassOrder, (int64_t)v49, v50, v51, v52, v53, v54, v55);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineExpUpInfo__ExpUpInfoSet(
        CombineExpUpInfo_o *this,
        int32_t kind,
        int32_t type,
        bool isFirst,
        System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *afterAction,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  struct System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *changeAction; // x8
  System_Collections_Generic_List_object__o *v38; // x0
  __int64 v39; // x1
  SvtClassAttri_c *v40; // x0
  __int64 v41; // x21
  DataManager_o *Instance; // x0
  __int64 v43; // x1
  const MethodInfo *v44; // x3
  struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *SortClassOrder; // x9
  int32_t nowKind; // w8
  __int64 size; // x27
  System_Int32_array *v48; // x22
  UserServantEntity_array *List; // x0
  Il2CppObject *MasterData_object; // x24
  UserServantStorageMaster_o *v51; // x23
  System_Collections_Generic_IEnumerable_T__o *CombineMaterialList; // x25
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Collections_Generic_List_object__o *v56; // x24
  UserServantEntity_array *v57; // x23
  unsigned __int64 i; // x24
  __int64 v59; // x1
  int32_t Item; // w25
  CombineExpUpInfo_o *ClassId; // x0
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x4
  int32_t nowType; // w8
  int32_t v65; // w25
  const MethodInfo *v66; // x2
  const MethodInfo *v67; // x6
  int32_t v68; // w3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  il2cpp_array_size_t v70; // w10
  __int64 v71; // x9
  char *v72; // x11
  struct CombineExpUpClassInfo_array *expUpClassInfoList; // x9
  int32_t v74; // w1
  int32_t v75; // w4
  int32_t v76; // w5
  struct CombineExpUpClassInfo_array *v77; // x8
  struct CombineExpUpClassInfo_array *v78; // x8
  System_Int32_array *v79; // x2
  System_Int32_array *v80; // x3

  if ( (byte_4B19D83 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind, *(_QWORD *)&type);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v13, v14);
    sub_1BCA7E0(&int___TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int_____ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76803536, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Count__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Item__, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_int____TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34);
    sub_1BCA7E0(&SvtClassAttri_TypeInfo, v35, v36);
    byte_4B19D83 = 1;
  }
  this->fields.nowKind = kind;
  this->fields.nowType = type;
  if ( afterAction )
  {
    this->fields.changeAction = afterAction;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.changeAction,
      (int64_t)afterAction,
      *(int64_t *)&type,
      isFirst,
      (System_String_o *)afterAction,
      (BattleSetupInfo_o *)method,
      v6,
      v7);
  }
  changeAction = this->fields.changeAction;
  if ( changeAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *, const MethodInfo *))changeAction->fields.m_target)(
      changeAction->fields.original_method_info,
      (unsigned int)this->fields.nowKind,
      (unsigned int)this->fields.nowType,
      *(_QWORD *)&changeAction->fields.extra_arg,
      afterAction,
      method);
  v38 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_int____TypeInfo,
                                                       *(_QWORD *)&kind,
                                                       *(_QWORD *)&type,
                                                       isFirst);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_int_____ctor__);
  v40 = SvtClassAttri_TypeInfo;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v39);
    v40 = SvtClassAttri_TypeInfo;
  }
  v41 = sub_1BCA888(int___TypeInfo, v40->static_fields->MAX_EXP_UP_RARITY);
  Instance = (DataManager_o *)sub_1BCA888(int___TypeInfo, SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY);
  SortClassOrder = this->fields.SortClassOrder;
  if ( !SortClassOrder )
    goto LABEL_76;
  nowKind = this->fields.nowKind;
  size = (unsigned int)SortClassOrder->fields._size;
  v48 = (System_Int32_array *)Instance;
  switch ( nowKind )
  {
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !MasterData_object )
        goto LABEL_76;
      v51 = (UserServantStorageMaster_o *)Instance;
      CombineMaterialList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                             (UserServantMaster_o *)MasterData_object,
                                                                             0LL);
      v56 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                           v53,
                                                           v54,
                                                           v55);
      System_Collections_Generic_List_object____ctor_56235344(
        v56,
        CombineMaterialList,
        (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76803536);
      if ( !v51 )
        goto LABEL_76;
      Instance = (DataManager_o *)UserServantStorageMaster__getList(v51, 0LL);
      if ( !v56 )
        goto LABEL_76;
      System_Collections_Generic_List_object___AddRange(
        v56,
        (System_Collections_Generic_IEnumerable_T__o *)Instance,
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      List = (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v56,
                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      goto LABEL_25;
    case 1:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !Instance )
        goto LABEL_76;
      List = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0LL);
      goto LABEL_25;
    case 0:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_76;
      List = UserServantMaster__getCombineMaterialList((UserServantMaster_o *)Instance, 0LL);
LABEL_25:
      v57 = List;
      goto LABEL_27;
  }
  v57 = 0LL;
LABEL_27:
  if ( (int)size >= 1 )
  {
    for ( i = 0LL; i != size; ++i )
    {
      Instance = (DataManager_o *)this->fields.SortClassOrder;
      if ( !Instance )
        goto LABEL_76;
      Item = System_Collections_Generic_List_Int32Enum___get_Item(
               (System_Collections_Generic_List_T__o *)Instance,
               i,
               (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Item__);
      if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v59);
      ClassId = (CombineExpUpInfo_o *)SvtClassAttri__getClassId(Item, 0LL);
      nowType = this->fields.nowType;
      v65 = (int)ClassId;
      if ( nowType == 1 )
      {
        v68 = 1;
      }
      else
      {
        if ( !nowType )
        {
          Instance = (DataManager_o *)CombineExpUpInfo__GetTargetClassMaterialInfo(ClassId, v57, (int32_t)ClassId, v62);
          if ( !Instance )
            return (char)Instance;
          goto LABEL_39;
        }
        v68 = 2;
      }
      Instance = (DataManager_o *)CombineExpUpInfo__GetTargetClassStatusUpInfo(ClassId, v57, (int32_t)ClassId, v68, v63);
      if ( !Instance )
        return (char)Instance;
LABEL_39:
      m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
      if ( !m_CancellationTokenSource )
      {
        LOBYTE(Instance) = 0;
        return (char)Instance;
      }
      if ( (int)m_CancellationTokenSource >= 1 )
      {
        v70 = 0;
        while ( 1 )
        {
          v71 = *((_QWORD *)&Instance->fields._DispLog + (int)v70);
          if ( !v71 || !v41 )
            break;
          if ( v70 >= *(_DWORD *)(v41 + 24) )
            goto LABEL_77;
          *(_DWORD *)(v41 + 4LL * (int)v70 + 32) = *(_DWORD *)(v71 + 16);
          if ( !v48 )
            break;
          if ( v70 >= v48->max_length )
            goto LABEL_77;
          v72 = (char *)v48 + 4 * (int)v70++;
          *((_DWORD *)v72 + 8) = *(_DWORD *)(v71 + 20);
          if ( (_DWORD)m_CancellationTokenSource == v70 )
            goto LABEL_48;
        }
LABEL_76:
        sub_1BCAA3C(Instance, v43);
      }
LABEL_48:
      if ( isFirst )
      {
        if ( this->fields.nowType )
        {
          expUpClassInfoList = this->fields.expUpClassInfoList;
          if ( !expUpClassInfoList )
            goto LABEL_76;
          if ( i >= expUpClassInfoList->max_length )
            goto LABEL_77;
          Instance = (DataManager_o *)expUpClassInfoList->m_Items[i];
          if ( !Instance )
            goto LABEL_76;
          if ( (_DWORD)m_CancellationTokenSource == 5 )
          {
            if ( v65 == 1001 )
            {
              v74 = 1001;
              v75 = 1;
              v76 = 4;
              goto LABEL_70;
            }
            v75 = 2;
LABEL_69:
            v76 = 3;
            v74 = v65;
LABEL_70:
            v79 = (System_Int32_array *)v41;
            v80 = v48;
LABEL_71:
            CombineExpUpClassInfo__Set((CombineExpUpClassInfo_o *)Instance, v74, v79, v80, v75, v76, v67);
            continue;
          }
          if ( v65 != 1001 )
          {
            v75 = 1;
            goto LABEL_69;
          }
          v74 = 1001;
          v76 = 4;
        }
        else
        {
          v78 = this->fields.expUpClassInfoList;
          if ( !v78 )
            goto LABEL_76;
          if ( i >= v78->max_length )
LABEL_77:
            sub_1BCAA44(Instance, v43);
          Instance = (DataManager_o *)v78->m_Items[i];
          if ( !Instance )
            goto LABEL_76;
          v76 = 5;
          v74 = v65;
        }
        v79 = (System_Int32_array *)v41;
        v80 = v48;
        v75 = 0;
        goto LABEL_71;
      }
      v77 = this->fields.expUpClassInfoList;
      if ( !v77 )
        goto LABEL_76;
      if ( i >= v77->max_length )
        goto LABEL_77;
      Instance = (DataManager_o *)v77->m_Items[i];
      if ( !Instance )
        goto LABEL_76;
      CombineExpUpClassInfo__Set_46013688((CombineExpUpClassInfo_o *)Instance, v48, v66);
    }
  }
  CombineExpUpInfo__SetBtnState(this, this->fields.nowKind, this->fields.nowType, v44);
  LOBYTE(Instance) = 1;
  return (char)Instance;
}


// local variable allocation has failed, the output may be wrong!
CombineExpUpInfo_MaterialData_array *__fastcall CombineExpUpInfo__GetTargetClassMaterialInfo(
        CombineExpUpInfo_o *this,
        UserServantEntity_array *svtList,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  SvtClassAttri_c *v14; // x0
  CombineExpUpInfo_MaterialData_array *v15; // x21
  __int64 Instance; // x0
  __int64 v17; // x1
  System_Int32_array *TargetClassMaterialSvtIdList; // x0
  __int64 v19; // x2
  __int64 v20; // x3
  System_Int32_array *v21; // x22
  __int64 v22; // x25
  unsigned __int64 v23; // x26
  CombineExpUpInfo_MaterialData_o **m_Items; // x27
  signed __int64 v25; // x10
  Il2CppObject *v26; // x23
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v34; // x23
  bool v35; // zf
  unsigned __int64 max_length; // x10
  __int64 v37; // x11
  unsigned __int64 v38; // x8
  __int64 v39; // x14
  int32_t v40; // w15
  __int64 v41; // x8
  int v42; // w23
  int v43; // w25
  Il2CppClass **v44; // x8
  UserServantEntity_o *v45; // x22
  SvtClassAttri_c *v46; // x0
  int32_t MAX_EXP_UP_RARITY; // w26
  CombineExpUpInfo_MaterialData_o *v48; // x8
  __int64 v49; // x0

  if ( (byte_4B19D84 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, svtList, *(_QWORD *)&classId);
    sub_1BCA7E0(&CombineExpUpInfo_MaterialData___TypeInfo, v6, v7);
    sub_1BCA7E0(&CombineExpUpInfo_MaterialData_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&SvtClassAttri_TypeInfo, v12, v13);
    byte_4B19D84 = 1;
  }
  v14 = SvtClassAttri_TypeInfo;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, svtList);
    v14 = SvtClassAttri_TypeInfo;
  }
  v15 = (CombineExpUpInfo_MaterialData_array *)sub_1BCA888(
                                                 CombineExpUpInfo_MaterialData___TypeInfo,
                                                 v14->static_fields->MAX_EXP_UP_RARITY);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_47;
  TargetClassMaterialSvtIdList = ServantMaster__GetTargetClassMaterialSvtIdList(
                                   (ServantMaster_o *)Instance,
                                   classId,
                                   0LL);
  if ( !TargetClassMaterialSvtIdList )
    return 0LL;
  v21 = TargetClassMaterialSvtIdList;
  if ( !*(_QWORD *)&TargetClassMaterialSvtIdList->max_length )
    return 0LL;
  v22 = 0LL;
  v23 = 0LL;
  m_Items = v15->m_Items;
  while ( 1 )
  {
    Instance = (__int64)SvtClassAttri_TypeInfo;
    if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v17);
      Instance = (__int64)SvtClassAttri_TypeInfo;
    }
    v25 = **(int **)(Instance + 184);
    if ( (__int64)v23 >= v25 )
      break;
    v26 = (Il2CppObject *)sub_1BCAA2C(CombineExpUpInfo_MaterialData_TypeInfo, v17, v19, v20);
    System_Object___ctor(v26, 0LL);
    if ( !v15 )
      goto LABEL_47;
    if ( v26 )
    {
      Instance = sub_1BCA91C(v26, v15->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v49 = sub_1BCAA60(0LL);
        sub_1BCA908(v49, 0LL);
      }
    }
    if ( v23 >= v15->max_length )
      goto LABEL_46;
    m_Items[v23] = (CombineExpUpInfo_MaterialData_o *)v26;
    sub_1BCA784((PartyOrganizationUtility_o *)&m_Items[v22], (int64_t)v26, v27, v28, v29, v30, v31, v32);
    ++v23;
    ++v22;
  }
  v34 = *(_QWORD *)&v21->max_length;
  if ( !*(_DWORD *)(Instance + 224) )
  {
    j_il2cpp_runtime_class_init_0(Instance, v17);
    LODWORD(v25) = SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY;
  }
  if ( (int)v34 >= 1 )
  {
    if ( v15 )
    {
      v35 = (_DWORD)v25 == (_DWORD)v34;
      max_length = v15->max_length;
      v37 = !v35;
      v38 = 0LL;
      while ( v37 + v38 < max_length && v38 < v21->max_length )
      {
        v39 = *((_QWORD *)&v15->m_Items[(unsigned int)v37] + v38);
        if ( !v39 )
          goto LABEL_47;
        v40 = v21->m_Items[++v38];
        *(_DWORD *)(v39 + 16) = v40;
        if ( (unsigned int)v34 == v38 )
          goto LABEL_32;
      }
LABEL_46:
      sub_1BCAA44(Instance, v17);
    }
LABEL_47:
    sub_1BCAA3C(Instance, v17);
  }
LABEL_32:
  if ( !svtList )
    goto LABEL_47;
  v41 = *(_QWORD *)&svtList->max_length;
  v42 = v41 - 1;
  if ( (int)v41 >= 1 )
  {
    v43 = 0;
    while ( 1 )
    {
      v44 = &svtList->obj.klass + v43;
      v45 = (UserServantEntity_o *)v44[4];
      if ( !v45 )
        goto LABEL_47;
      Instance = UserServantEntity__IsCombineMaterial((UserServantEntity_o *)v44[4], 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = UserServantEntity__getSvtClassId(v45, 0, 0LL);
        if ( (_DWORD)Instance == classId )
        {
          v46 = SvtClassAttri_TypeInfo;
          if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v17);
            v46 = SvtClassAttri_TypeInfo;
          }
          MAX_EXP_UP_RARITY = v46->static_fields->MAX_EXP_UP_RARITY;
          Instance = UserServantEntity__getRarity(v45, 0LL);
          if ( !v15 )
            goto LABEL_47;
          if ( (unsigned int)(MAX_EXP_UP_RARITY - Instance) >= v15->max_length )
            goto LABEL_46;
          v48 = v15->m_Items[MAX_EXP_UP_RARITY - (int)Instance];
          if ( !v48 )
            goto LABEL_47;
          ++v48->fields.num;
        }
      }
      if ( v42 == v43 )
        return v15;
      if ( ++v43 >= svtList->max_length )
        goto LABEL_46;
    }
  }
  return v15;
}


// local variable allocation has failed, the output may be wrong!
CombineExpUpInfo_MaterialData_array *__fastcall CombineExpUpInfo__GetTargetClassStatusUpInfo(
        CombineExpUpInfo_o *this,
        UserServantEntity_array *svtList,
        int32_t classId,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  System_Int32_array *TargetClassStatusUpSvtIdList; // x0
  __int64 v23; // x1
  SvtClassAttri_c *v24; // x8
  System_Int32_array *v25; // x24
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x8
  Il2CppObject *v29; // x23
  int v30; // w22
  unsigned __int64 v31; // x27
  int32_t *v32; // x29
  int32_t v33; // w26
  ServantLeaderInfo_o *v34; // x25
  char *v35; // x9
  __int64 v36; // x2
  __int64 v37; // x3
  CombineExpUpInfo_MaterialData_array *v38; // x24
  il2cpp_array_size_t v39; // w27
  Il2CppObject *v40; // x25
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x29
  Il2CppClass **v48; // x26
  PartyOrganizationUtility_o *v49; // x26
  __int64 v50; // x8
  int v51; // w25
  int v52; // w26
  Il2CppClass **v53; // x8
  UserServantEntity_o *v54; // x23
  CombineExpUpInfo_MaterialData_o *v55; // x8
  __int64 v57; // x0

  if ( (byte_4B19D85 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, svtList, *(_QWORD *)&classId);
    sub_1BCA7E0(&int___TypeInfo, v8, v9);
    sub_1BCA7E0(&CombineExpUpInfo_MaterialData___TypeInfo, v10, v11);
    sub_1BCA7E0(&CombineExpUpInfo_MaterialData_TypeInfo, v12, v13);
    sub_1BCA7E0(&ServantLeaderInfo_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&SvtClassAttri_TypeInfo, v18, v19);
    byte_4B19D85 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_59;
  TargetClassStatusUpSvtIdList = ServantMaster__GetTargetClassStatusUpSvtIdList(
                                   (ServantMaster_o *)Instance,
                                   classId,
                                   0LL);
  v24 = SvtClassAttri_TypeInfo;
  v25 = TargetClassStatusUpSvtIdList;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v23);
    v24 = SvtClassAttri_TypeInfo;
  }
  Instance = (Il2CppObject *)sub_1BCA888(int___TypeInfo, v24->static_fields->MAX_EXP_UP_RARITY);
  if ( !v25 )
    goto LABEL_59;
  v28 = *(_QWORD *)&v25->max_length;
  v29 = Instance;
  if ( (int)v28 < 1 )
    return 0LL;
  v30 = 0;
  v31 = 0LL;
  v32 = &v25->m_Items[1];
  do
  {
    if ( v31 >= (unsigned int)v28 )
LABEL_56:
      sub_1BCAA44(Instance, v21);
    v33 = v32[v31];
    v34 = (ServantLeaderInfo_o *)sub_1BCAA2C(ServantLeaderInfo_TypeInfo, v21, v26, v27);
    ServantLeaderInfo___ctor_41224104(v34, v33, 0, 1, 0LL);
    if ( type == 2 )
    {
      if ( !v34 )
        goto LABEL_59;
      if ( !v34->fields.hp && !v34->fields.adjustHp )
        goto LABEL_24;
    }
    else
    {
      if ( type != 1 )
        goto LABEL_24;
      if ( !v34 )
        goto LABEL_59;
      if ( !v34->fields.atk && !v34->fields.adjustAtk )
        goto LABEL_24;
    }
    if ( v31 >= v25->max_length )
      goto LABEL_56;
    if ( !v29 )
      goto LABEL_59;
    if ( (unsigned int)v30 >= LODWORD(v29[1].monitor) )
      goto LABEL_56;
    v35 = (char *)v29 + 4 * v30++;
    *((_DWORD *)v35 + 8) = v32[v31];
LABEL_24:
    LODWORD(v28) = v25->max_length;
    ++v31;
  }
  while ( (__int64)v31 < (int)v28 );
  if ( !v30 )
    return 0LL;
  Instance = (Il2CppObject *)sub_1BCA888(CombineExpUpInfo_MaterialData___TypeInfo, (unsigned int)v30);
  v38 = (CombineExpUpInfo_MaterialData_array *)Instance;
  if ( v30 >= 1 )
  {
    v39 = 0;
    while ( 1 )
    {
      v40 = (Il2CppObject *)sub_1BCAA2C(CombineExpUpInfo_MaterialData_TypeInfo, v21, v36, v37);
      System_Object___ctor(v40, 0LL);
      if ( !v38 )
        break;
      if ( v40 )
      {
        Instance = (Il2CppObject *)sub_1BCA91C(v40, v38->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v57 = sub_1BCAA60(0LL);
          sub_1BCA908(v57, 0LL);
        }
      }
      if ( v39 >= v38->max_length )
        goto LABEL_56;
      v47 = (int)v39;
      v48 = &v38->obj.klass + (int)v39;
      v48[4] = (Il2CppClass *)v40;
      v49 = (PartyOrganizationUtility_o *)(v48 + 4);
      sub_1BCA784(v49, (int64_t)v40, v41, v42, v43, v44, v45, v46);
      if ( v39 >= v38->max_length )
        goto LABEL_56;
      if ( !v29 )
        break;
      if ( v39 >= LODWORD(v29[1].monitor) )
        goto LABEL_56;
      if ( !v49->klass )
        break;
      ++v39;
      LODWORD(v49->klass->_1.name) = *((_DWORD *)&v29[2].klass + v47);
      if ( v30 == v39 )
        goto LABEL_37;
    }
LABEL_59:
    sub_1BCAA3C(Instance, v21);
  }
LABEL_37:
  if ( !svtList )
    goto LABEL_59;
  v50 = *(_QWORD *)&svtList->max_length;
  v51 = v50 - 1;
  if ( (int)v50 >= 1 )
  {
    v52 = 0;
    while ( 1 )
    {
      v53 = &svtList->obj.klass + v52;
      v54 = (UserServantEntity_o *)v53[4];
      if ( !v54 )
        goto LABEL_59;
      Instance = (Il2CppObject *)UserServantEntity__IsStatusUp((UserServantEntity_o *)v53[4], 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (Il2CppObject *)UserServantEntity__getSvtClassId(v54, 0, 0LL);
        if ( (_DWORD)Instance == classId )
        {
          if ( type == 2 )
          {
            if ( v54->fields.hp || v54->fields.adjustHp )
            {
LABEL_50:
              Instance = (Il2CppObject *)UserServantEntity__getRarity(v54, 0LL);
              if ( !v38 )
                goto LABEL_59;
              if ( v30 - (int)Instance >= v38->max_length )
                goto LABEL_56;
              v55 = v38->m_Items[v30 - (int)Instance];
              if ( !v55 )
                goto LABEL_59;
              ++v55->fields.num;
            }
          }
          else if ( type == 1 && (v54->fields.atk || v54->fields.adjustAtk) )
          {
            goto LABEL_50;
          }
        }
      }
      if ( v51 == v52 )
        return v38;
      if ( ++v52 >= svtList->max_length )
        goto LABEL_56;
    }
  }
  return v38;
}


void __fastcall CombineExpUpInfo__OnClickCenter(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x5

  if ( (byte_4B19D88 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineExpUpInfo_OnClickCenter__, method, v2);
    byte_4B19D88 = 1;
  }
  if ( this->fields.nowType != 1 )
  {
    v4 = Method_CombineExpUpInfo_OnClickCenter__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickCenter__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_CombineExpUpInfo_OnClickCenter__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 1, 1, 0LL, v6);
  }
}


void __fastcall CombineExpUpInfo__OnClickChangeButton(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x5
  int32_t nowKind; // w8
  int32_t v8; // w1

  if ( (byte_4B19D8A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineExpUpInfo_OnClickChangeButton__, method, v2);
    byte_4B19D8A = 1;
  }
  v4 = Method_CombineExpUpInfo_OnClickChangeButton__;
  if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickChangeButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_CombineExpUpInfo_OnClickChangeButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  nowKind = this->fields.nowKind;
  if ( nowKind )
    v8 = 2 * (nowKind == 1);
  else
    v8 = 1;
  CombineExpUpInfo__ExpUpInfoSet(this, v8, this->fields.nowType, 0, 0LL, v6);
}


void __fastcall CombineExpUpInfo__OnClickLeft(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x5

  if ( (byte_4B19D87 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineExpUpInfo_OnClickLeft__, method, v2);
    byte_4B19D87 = 1;
  }
  if ( this->fields.nowType )
  {
    v4 = Method_CombineExpUpInfo_OnClickLeft__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickLeft__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_CombineExpUpInfo_OnClickLeft__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 0, 1, 0LL, v6);
  }
}


void __fastcall CombineExpUpInfo__OnClickRight(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x5

  if ( (byte_4B19D89 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CombineExpUpInfo_OnClickRight__, method, v2);
    byte_4B19D89 = 1;
  }
  if ( this->fields.nowType != 2 )
  {
    v4 = Method_CombineExpUpInfo_OnClickRight__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickRight__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_CombineExpUpInfo_OnClickRight__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 2, 1, 0LL, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineExpUpInfo__SetBtnState(
        CombineExpUpInfo_o *this,
        int32_t kind,
        int32_t type,
        const MethodInfo *method)
{
  CombineExpUpInfo_o *v6; // x19
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  unsigned __int64 v21; // x22
  unsigned __int64 v22; // x28
  struct UnityEngine_GameObject_array *btnObjList; // x8
  struct UISprite_array *btnSpriteList; // x8
  struct UISprite_array *v25; // x8
  UIWidget_o *v26; // x21
  struct UISprite_array *btnTxtSpriteList; // x8
  struct System_String_array *btnSpriteNameList; // x9
  UISprite_o *v29; // x21
  System_String_o *v30; // x0
  System_String_o *v31; // x1
  struct UISprite_array *v32; // x8
  struct UISprite_array *v33; // x8
  UIWidget_o *v34; // x21
  struct UISprite_array *v35; // x8
  struct System_String_array *v36; // x9
  __int64 *v37; // x8

  v6 = this;
  if ( (byte_4B19D86 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineExpUpInfo_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&type);
    sub_1BCA7E0(&StringLiteral_22445/*"off"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_17642/*"btn_bg_02_on"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_22475/*"on"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17844/*"button_total"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_17843/*"button_storage"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_17838/*"button_possess"*/, v17, v18);
    this = (CombineExpUpInfo_o *)sub_1BCA7E0(&StringLiteral_17641/*"btn_bg_02_off"*/, v19, v20);
    byte_4B19D86 = 1;
  }
  v21 = 0LL;
  v22 = (unsigned int)type;
  do
  {
    btnObjList = v6->fields.btnObjList;
    if ( !btnObjList )
      goto LABEL_47;
    if ( v21 >= btnObjList->max_length )
      goto LABEL_48;
    this = (CombineExpUpInfo_o *)btnObjList->m_Items[v21];
    if ( !this )
      goto LABEL_47;
    if ( v22 == v21 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      btnSpriteList = v6->fields.btnSpriteList;
      if ( !btnSpriteList )
        goto LABEL_47;
      if ( btnSpriteList->max_length <= v22 )
        goto LABEL_48;
      this = (CombineExpUpInfo_o *)btnSpriteList->m_Items[v22];
      if ( !this )
        goto LABEL_47;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17642/*"btn_bg_02_on"*/, 0LL);
      v25 = v6->fields.btnSpriteList;
      if ( !v25 )
        goto LABEL_47;
      if ( v25->max_length <= v22 )
        goto LABEL_48;
      this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      v26 = (UIWidget_o *)v25->m_Items[v22];
      if ( !CombineExpUpInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineExpUpInfo_TypeInfo, *(_QWORD *)&kind);
        this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      }
      if ( !v26 )
        goto LABEL_47;
      UIWidget__SetDimensions(
        v26,
        (int32_t)this[1].fields.btnSpriteNameList->obj.klass,
        HIDWORD(this[1].fields.btnSpriteNameList->obj.klass),
        0LL);
      btnTxtSpriteList = v6->fields.btnTxtSpriteList;
      if ( !btnTxtSpriteList )
        goto LABEL_47;
      if ( btnTxtSpriteList->max_length <= v22 )
        goto LABEL_48;
      btnSpriteNameList = v6->fields.btnSpriteNameList;
      if ( !btnSpriteNameList )
        goto LABEL_47;
      if ( btnSpriteNameList->max_length <= v22 )
        goto LABEL_48;
      v29 = btnTxtSpriteList->m_Items[v22];
      v30 = btnSpriteNameList->m_Items[v22];
      v31 = (System_String_o *)StringLiteral_22475/*"on"*/;
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v32 = v6->fields.btnSpriteList;
      if ( !v32 )
        goto LABEL_47;
      if ( v21 >= v32->max_length )
LABEL_48:
        sub_1BCAA44(this, *(_QWORD *)&kind);
      this = (CombineExpUpInfo_o *)v32->m_Items[v21];
      if ( !this )
        goto LABEL_47;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17641/*"btn_bg_02_off"*/, 0LL);
      v33 = v6->fields.btnSpriteList;
      if ( !v33 )
        goto LABEL_47;
      if ( v21 >= v33->max_length )
        goto LABEL_48;
      this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      v34 = (UIWidget_o *)v33->m_Items[v21];
      if ( !CombineExpUpInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineExpUpInfo_TypeInfo, *(_QWORD *)&kind);
        this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      }
      if ( !v34 )
        goto LABEL_47;
      UIWidget__SetDimensions(
        v34,
        (int32_t)this[1].fields.btnSpriteNameList->obj.monitor,
        HIDWORD(this[1].fields.btnSpriteNameList->obj.monitor),
        0LL);
      v35 = v6->fields.btnTxtSpriteList;
      if ( !v35 )
        goto LABEL_47;
      if ( v21 >= v35->max_length )
        goto LABEL_48;
      v36 = v6->fields.btnSpriteNameList;
      if ( !v36 )
        goto LABEL_47;
      if ( v21 >= v36->max_length )
        goto LABEL_48;
      v29 = v35->m_Items[v21];
      v30 = v36->m_Items[v21];
      v31 = (System_String_o *)StringLiteral_22445/*"off"*/;
    }
    this = (CombineExpUpInfo_o *)System_String__Concat_62401220(v30, v31, 0LL);
    if ( !v29 )
      goto LABEL_47;
    UISprite__set_spriteName(v29, (System_String_o *)this, 0LL);
    ++v21;
  }
  while ( v21 != 3 );
  switch ( kind )
  {
    case 2:
      this = (CombineExpUpInfo_o *)v6->fields.btnChangeSprite;
      if ( this )
      {
        v37 = &StringLiteral_17844/*"button_total"*/;
        goto LABEL_45;
      }
LABEL_47:
      sub_1BCAA3C(this, *(_QWORD *)&kind);
    case 1:
      this = (CombineExpUpInfo_o *)v6->fields.btnChangeSprite;
      if ( this )
      {
        v37 = &StringLiteral_17843/*"button_storage"*/;
        goto LABEL_45;
      }
      goto LABEL_47;
    case 0:
      this = (CombineExpUpInfo_o *)v6->fields.btnChangeSprite;
      if ( this )
      {
        v37 = &StringLiteral_17838/*"button_possess"*/;
LABEL_45:
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v37, 0LL);
        return;
      }
      goto LABEL_47;
  }
}


void __fastcall CombineExpUpInfo_MaterialData___ctor(CombineExpUpInfo_MaterialData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}