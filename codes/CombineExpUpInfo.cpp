void __fastcall CombineExpUpInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C25CA5 & 1) == 0 )
  {
    sub_1C3B764(&CombineExpUpInfo_TypeInfo, v1);
    byte_4C25CA5 = 1;
  }
  *CombineExpUpInfo_TypeInfo->static_fields = (struct CombineExpUpInfo_StaticFields)xmmword_C0CC50;
}


void __fastcall CombineExpUpInfo___ctor(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x20
  int64_t v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
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
  System_Collections_Generic_List_T__o *v39; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Object_array *items; // x9
  _QWORD *v47; // x8
  __int64 size; // x10
  __int64 v49; // x10
  __int64 v50; // x10
  __int64 v51; // x10
  __int64 v52; // x10
  __int64 v53; // x10
  __int64 v54; // x10
  __int64 v55; // x10

  if ( (byte_4C25CA4 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__, v3);
    sub_1C3B764(&System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo, v4);
    sub_1C3B764(&string___TypeInfo, v5);
    sub_1C3B764(&StringLiteral_17851/*"componentType"*/, v6);
    sub_1C3B764(&StringLiteral_17797/*"combine_19"*/, v7);
    sub_1C3B764(&StringLiteral_17847/*"componentClass"*/, v8);
    byte_4C25CA4 = 1;
  }
  v9 = sub_1C3B80C(string___TypeInfo, 3LL);
  if ( !v9 )
    goto LABEL_34;
  v17 = v9;
  if ( !*(_DWORD *)(v9 + 24)
    || (v18 = StringLiteral_17847/*"componentClass"*/,
        *(_QWORD *)(v9 + 32) = StringLiteral_17847/*"componentClass"*/,
        sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 32), v18, v11, v12, v13, v14, v15, v16),
        *(_DWORD *)(v17 + 24) <= 1u)
    || (v25 = StringLiteral_17797/*"combine_19"*/,
        *(_QWORD *)(v17 + 40) = StringLiteral_17797/*"combine_19"*/,
        sub_1C3B708((PartyOrganizationUtility_o *)(v17 + 40), v25, v19, v20, v21, v22, v23, v24),
        *(_DWORD *)(v17 + 24) <= 2u) )
  {
    sub_1C3B9C8(v9, v10);
  }
  v32 = StringLiteral_17851/*"componentType"*/;
  *(_QWORD *)(v17 + 48) = StringLiteral_17851/*"componentType"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v17 + 48), v32, v26, v27, v28, v29, v30, v31);
  this->fields.btnSpriteNameList = (struct System_String_array *)v17;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.btnSpriteNameList, v17, v33, v34, v35, v36, v37, v38);
  v39 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v39,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__);
  if ( !v39 )
    goto LABEL_34;
  items = v39->fields._items;
  v47 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
  ++v39->fields._version;
  if ( !items )
    goto LABEL_34;
  size = v39->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      1,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    items = v39->fields._items;
    v47 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v39->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v39->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 1;
    ++v39->fields._version;
  }
  v49 = v39->fields._size;
  if ( (unsigned int)v49 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      2,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    items = v39->fields._items;
    v47 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v39->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v39->fields._size = v49 + 1;
    *((_DWORD *)items->m_Items + v49) = 2;
    ++v39->fields._version;
  }
  v50 = v39->fields._size;
  if ( (unsigned int)v50 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      3,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    items = v39->fields._items;
    v47 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v39->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v39->fields._size = v50 + 1;
    *((_DWORD *)items->m_Items + v50) = 3;
    ++v39->fields._version;
  }
  v51 = v39->fields._size;
  if ( (unsigned int)v51 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      4,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    items = v39->fields._items;
    v47 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v39->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v39->fields._size = v51 + 1;
    *((_DWORD *)items->m_Items + v51) = 4;
    ++v39->fields._version;
  }
  v52 = v39->fields._size;
  if ( (unsigned int)v52 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      5,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    items = v39->fields._items;
    v47 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v39->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v39->fields._size = v52 + 1;
    *((_DWORD *)items->m_Items + v52) = 5;
    ++v39->fields._version;
  }
  v53 = v39->fields._size;
  if ( (unsigned int)v53 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      6,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    items = v39->fields._items;
    v47 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v39->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v39->fields._size = v53 + 1;
    *((_DWORD *)items->m_Items + v53) = 6;
    ++v39->fields._version;
  }
  v54 = v39->fields._size;
  if ( (unsigned int)v54 < items->max_length )
  {
    v39->fields._size = v54 + 1;
    *((_DWORD *)items->m_Items + v54) = 7;
    ++v39->fields._version;
    goto LABEL_30;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v39,
    7,
    *(const MethodInfo_3671474 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  items = v39->fields._items;
  v47 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
  ++v39->fields._version;
  if ( !items )
LABEL_34:
    sub_1C3B9C0(v9, v10);
LABEL_30:
  v55 = v39->fields._size;
  if ( (unsigned int)v55 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      1001,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v39->fields._size = v55 + 1;
    *((_DWORD *)items->m_Items + v55) = 1001;
  }
  this->fields.SortClassOrder = (struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *)v39;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.SortClassOrder, (int64_t)v39, v40, v41, v42, v43, v44, v45);
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
  struct System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *changeAction; // x8
  System_Collections_Generic_List_object__o *v26; // x0
  SvtClassAttri_c *v27; // x0
  __int64 v28; // x21
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *SortClassOrder; // x9
  int32_t nowKind; // w8
  __int64 size; // x27
  System_Int32_array *v35; // x22
  UserServantEntity_array *List; // x0
  Il2CppObject *MasterData_object; // x24
  UserServantStorageMaster_o *v38; // x23
  System_Collections_Generic_IEnumerable_T__o *CombineMaterialList; // x25
  System_Collections_Generic_List_object__o *v40; // x24
  UserServantEntity_array *v41; // x23
  unsigned __int64 i; // x24
  int32_t Item; // w25
  CombineExpUpInfo_o *ClassId; // x0
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x4
  int32_t nowType; // w8
  int32_t v48; // w25
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x6
  int32_t v51; // w3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  il2cpp_array_size_t v53; // w10
  __int64 v54; // x9
  char *v55; // x11
  struct CombineExpUpClassInfo_array *expUpClassInfoList; // x9
  int32_t v57; // w1
  int32_t v58; // w4
  int32_t v59; // w5
  struct CombineExpUpClassInfo_array *v60; // x8
  struct CombineExpUpClassInfo_array *v61; // x8
  System_Int32_array *v62; // x2
  System_Int32_array *v63; // x3

  if ( (byte_4C25C9C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v13);
    sub_1C3B764(&int___TypeInfo, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_int_____ctor__, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity___ctor___77869264, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Count__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Item__, v20);
    sub_1C3B764(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v21);
    sub_1C3B764(&System_Collections_Generic_List_int____TypeInfo, v22);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1C3B764(&SvtClassAttri_TypeInfo, v24);
    byte_4C25C9C = 1;
  }
  this->fields.nowKind = kind;
  this->fields.nowType = type;
  if ( afterAction )
  {
    this->fields.changeAction = afterAction;
    sub_1C3B708(
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
  v26 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_int_____ctor__);
  v27 = SvtClassAttri_TypeInfo;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v27 = SvtClassAttri_TypeInfo;
  }
  v28 = sub_1C3B80C(int___TypeInfo, v27->static_fields->MAX_EXP_UP_RARITY);
  Instance = (DataManager_o *)sub_1C3B80C(int___TypeInfo, SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY);
  SortClassOrder = this->fields.SortClassOrder;
  if ( !SortClassOrder )
    goto LABEL_76;
  nowKind = this->fields.nowKind;
  size = (unsigned int)SortClassOrder->fields._size;
  v35 = (System_Int32_array *)Instance;
  switch ( nowKind )
  {
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !MasterData_object )
        goto LABEL_76;
      v38 = (UserServantStorageMaster_o *)Instance;
      CombineMaterialList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                             (UserServantMaster_o *)MasterData_object,
                                                                             0LL);
      v40 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor_57193824(
        v40,
        CombineMaterialList,
        (const MethodInfo_368B560 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___77869264);
      if ( !v38 )
        goto LABEL_76;
      Instance = (DataManager_o *)UserServantStorageMaster__getList(v38, 0LL);
      if ( !v40 )
        goto LABEL_76;
      System_Collections_Generic_List_object___AddRange(
        v40,
        (System_Collections_Generic_IEnumerable_T__o *)Instance,
        (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      List = (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v40,
                                          (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      goto LABEL_25;
    case 1:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !Instance )
        goto LABEL_76;
      List = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0LL);
      goto LABEL_25;
    case 0:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_76;
      List = UserServantMaster__getCombineMaterialList((UserServantMaster_o *)Instance, 0LL);
LABEL_25:
      v41 = List;
      goto LABEL_27;
  }
  v41 = 0LL;
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
               (const MethodInfo_3671184 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Item__);
      if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
      ClassId = (CombineExpUpInfo_o *)SvtClassAttri__getClassId(Item, 0LL);
      nowType = this->fields.nowType;
      v48 = (int)ClassId;
      if ( nowType == 1 )
      {
        v51 = 1;
      }
      else
      {
        if ( !nowType )
        {
          Instance = (DataManager_o *)CombineExpUpInfo__GetTargetClassMaterialInfo(ClassId, v41, (int32_t)ClassId, v45);
          if ( !Instance )
            return (char)Instance;
          goto LABEL_39;
        }
        v51 = 2;
      }
      Instance = (DataManager_o *)CombineExpUpInfo__GetTargetClassStatusUpInfo(ClassId, v41, (int32_t)ClassId, v51, v46);
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
        v53 = 0;
        while ( 1 )
        {
          v54 = *((_QWORD *)&Instance->fields._DispLog + (int)v53);
          if ( !v54 || !v28 )
            break;
          if ( v53 >= *(_DWORD *)(v28 + 24) )
            goto LABEL_77;
          *(_DWORD *)(v28 + 4LL * (int)v53 + 32) = *(_DWORD *)(v54 + 16);
          if ( !v35 )
            break;
          if ( v53 >= v35->max_length )
            goto LABEL_77;
          v55 = (char *)v35 + 4 * (int)v53++;
          *((_DWORD *)v55 + 8) = *(_DWORD *)(v54 + 20);
          if ( (_DWORD)m_CancellationTokenSource == v53 )
            goto LABEL_48;
        }
LABEL_76:
        sub_1C3B9C0(Instance, v30);
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
            if ( v48 == 1001 )
            {
              v57 = 1001;
              v58 = 1;
              v59 = 4;
              goto LABEL_70;
            }
            v58 = 2;
LABEL_69:
            v59 = 3;
            v57 = v48;
LABEL_70:
            v62 = (System_Int32_array *)v28;
            v63 = v35;
LABEL_71:
            CombineExpUpClassInfo__Set((CombineExpUpClassInfo_o *)Instance, v57, v62, v63, v58, v59, v50);
            continue;
          }
          if ( v48 != 1001 )
          {
            v58 = 1;
            goto LABEL_69;
          }
          v57 = 1001;
          v59 = 4;
        }
        else
        {
          v61 = this->fields.expUpClassInfoList;
          if ( !v61 )
            goto LABEL_76;
          if ( i >= v61->max_length )
LABEL_77:
            sub_1C3B9C8(Instance, v30);
          Instance = (DataManager_o *)v61->m_Items[i];
          if ( !Instance )
            goto LABEL_76;
          v59 = 5;
          v57 = v48;
        }
        v62 = (System_Int32_array *)v28;
        v63 = v35;
        v58 = 0;
        goto LABEL_71;
      }
      v60 = this->fields.expUpClassInfoList;
      if ( !v60 )
        goto LABEL_76;
      if ( i >= v60->max_length )
        goto LABEL_77;
      Instance = (DataManager_o *)v60->m_Items[i];
      if ( !Instance )
        goto LABEL_76;
      CombineExpUpClassInfo__Set_46876592((CombineExpUpClassInfo_o *)Instance, v35, v49);
    }
  }
  CombineExpUpInfo__SetBtnState(this, this->fields.nowKind, this->fields.nowType, v31);
  LOBYTE(Instance) = 1;
  return (char)Instance;
}


CombineExpUpInfo_MaterialData_array *__fastcall CombineExpUpInfo__GetTargetClassMaterialInfo(
        CombineExpUpInfo_o *this,
        UserServantEntity_array *svtList,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  SvtClassAttri_c *v10; // x0
  CombineExpUpInfo_MaterialData_array *v11; // x21
  __int64 Instance; // x0
  __int64 v13; // x1
  System_Int32_array *TargetClassMaterialSvtIdList; // x0
  System_Int32_array *v15; // x22
  __int64 v16; // x25
  unsigned __int64 v17; // x26
  CombineExpUpInfo_MaterialData_o **m_Items; // x27
  signed __int64 v19; // x10
  Il2CppObject *v20; // x23
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v28; // x23
  bool v29; // zf
  unsigned __int64 max_length; // x10
  __int64 v31; // x11
  unsigned __int64 v32; // x8
  __int64 v33; // x14
  int32_t v34; // w15
  __int64 v35; // x8
  int v36; // w23
  int v37; // w25
  Il2CppClass **v38; // x8
  UserServantEntity_o *v39; // x22
  SvtClassAttri_c *v40; // x0
  int32_t MAX_EXP_UP_RARITY; // w26
  CombineExpUpInfo_MaterialData_o *v42; // x8
  __int64 v43; // x0

  if ( (byte_4C25C9D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, svtList);
    sub_1C3B764(&CombineExpUpInfo_MaterialData___TypeInfo, v6);
    sub_1C3B764(&CombineExpUpInfo_MaterialData_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1C3B764(&SvtClassAttri_TypeInfo, v9);
    byte_4C25C9D = 1;
  }
  v10 = SvtClassAttri_TypeInfo;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v10 = SvtClassAttri_TypeInfo;
  }
  v11 = (CombineExpUpInfo_MaterialData_array *)sub_1C3B80C(
                                                 CombineExpUpInfo_MaterialData___TypeInfo,
                                                 v10->static_fields->MAX_EXP_UP_RARITY);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_47;
  TargetClassMaterialSvtIdList = ServantMaster__GetTargetClassMaterialSvtIdList(
                                   (ServantMaster_o *)Instance,
                                   classId,
                                   0LL);
  if ( !TargetClassMaterialSvtIdList )
    return 0LL;
  v15 = TargetClassMaterialSvtIdList;
  if ( !*(_QWORD *)&TargetClassMaterialSvtIdList->max_length )
    return 0LL;
  v16 = 0LL;
  v17 = 0LL;
  m_Items = v11->m_Items;
  while ( 1 )
  {
    Instance = (__int64)SvtClassAttri_TypeInfo;
    if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
      Instance = (__int64)SvtClassAttri_TypeInfo;
    }
    v19 = **(int **)(Instance + 184);
    if ( (__int64)v17 >= v19 )
      break;
    v20 = (Il2CppObject *)sub_1C3B9B0(CombineExpUpInfo_MaterialData_TypeInfo);
    System_Object___ctor(v20, 0LL);
    if ( !v11 )
      goto LABEL_47;
    if ( v20 )
    {
      Instance = sub_1C3B8A0(v20, v11->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v43 = sub_1C3B9E4(0LL);
        sub_1C3B88C(v43, 0LL);
      }
    }
    if ( v17 >= v11->max_length )
      goto LABEL_46;
    m_Items[v17] = (CombineExpUpInfo_MaterialData_o *)v20;
    sub_1C3B708((PartyOrganizationUtility_o *)&m_Items[v16], (int64_t)v20, v21, v22, v23, v24, v25, v26);
    ++v17;
    ++v16;
  }
  v28 = *(_QWORD *)&v15->max_length;
  if ( !*(_DWORD *)(Instance + 224) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    LODWORD(v19) = SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY;
  }
  if ( (int)v28 >= 1 )
  {
    if ( v11 )
    {
      v29 = (_DWORD)v19 == (_DWORD)v28;
      max_length = v11->max_length;
      v31 = !v29;
      v32 = 0LL;
      while ( v31 + v32 < max_length && v32 < v15->max_length )
      {
        v33 = *((_QWORD *)&v11->m_Items[(unsigned int)v31] + v32);
        if ( !v33 )
          goto LABEL_47;
        v34 = v15->m_Items[++v32];
        *(_DWORD *)(v33 + 16) = v34;
        if ( (unsigned int)v28 == v32 )
          goto LABEL_32;
      }
LABEL_46:
      sub_1C3B9C8(Instance, v13);
    }
LABEL_47:
    sub_1C3B9C0(Instance, v13);
  }
LABEL_32:
  if ( !svtList )
    goto LABEL_47;
  v35 = *(_QWORD *)&svtList->max_length;
  v36 = v35 - 1;
  if ( (int)v35 >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      v38 = &svtList->obj.klass + v37;
      v39 = (UserServantEntity_o *)v38[4];
      if ( !v39 )
        goto LABEL_47;
      Instance = UserServantEntity__IsCombineMaterial((UserServantEntity_o *)v38[4], 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = UserServantEntity__getSvtClassId(v39, 0, 0LL);
        if ( (_DWORD)Instance == classId )
        {
          v40 = SvtClassAttri_TypeInfo;
          if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
            v40 = SvtClassAttri_TypeInfo;
          }
          MAX_EXP_UP_RARITY = v40->static_fields->MAX_EXP_UP_RARITY;
          Instance = UserServantEntity__getRarity(v39, 0LL);
          if ( !v11 )
            goto LABEL_47;
          if ( (unsigned int)(MAX_EXP_UP_RARITY - Instance) >= v11->max_length )
            goto LABEL_46;
          v42 = v11->m_Items[MAX_EXP_UP_RARITY - (int)Instance];
          if ( !v42 )
            goto LABEL_47;
          ++v42->fields.num;
        }
      }
      if ( v36 == v37 )
        return v11;
      if ( ++v37 >= svtList->max_length )
        goto LABEL_46;
    }
  }
  return v11;
}


CombineExpUpInfo_MaterialData_array *__fastcall CombineExpUpInfo__GetTargetClassStatusUpInfo(
        CombineExpUpInfo_o *this,
        UserServantEntity_array *svtList,
        int32_t classId,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  System_Int32_array *TargetClassStatusUpSvtIdList; // x0
  SvtClassAttri_c *v17; // x8
  System_Int32_array *v18; // x24
  __int64 v19; // x8
  Il2CppObject *v20; // x23
  int v21; // w22
  unsigned __int64 v22; // x27
  int32_t *v23; // x29
  int32_t v24; // w26
  ServantLeaderInfo_o *v25; // x25
  char *v26; // x9
  CombineExpUpInfo_MaterialData_array *v27; // x24
  il2cpp_array_size_t v28; // w27
  Il2CppObject *v29; // x25
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x29
  Il2CppClass **v37; // x26
  PartyOrganizationUtility_o *v38; // x26
  __int64 v39; // x8
  int v40; // w25
  int v41; // w26
  Il2CppClass **v42; // x8
  UserServantEntity_o *v43; // x23
  CombineExpUpInfo_MaterialData_o *v44; // x8
  __int64 v46; // x0

  if ( (byte_4C25C9E & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, svtList);
    sub_1C3B764(&int___TypeInfo, v8);
    sub_1C3B764(&CombineExpUpInfo_MaterialData___TypeInfo, v9);
    sub_1C3B764(&CombineExpUpInfo_MaterialData_TypeInfo, v10);
    sub_1C3B764(&ServantLeaderInfo_TypeInfo, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1C3B764(&SvtClassAttri_TypeInfo, v13);
    byte_4C25C9E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_59;
  TargetClassStatusUpSvtIdList = ServantMaster__GetTargetClassStatusUpSvtIdList(
                                   (ServantMaster_o *)Instance,
                                   classId,
                                   0LL);
  v17 = SvtClassAttri_TypeInfo;
  v18 = TargetClassStatusUpSvtIdList;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v17 = SvtClassAttri_TypeInfo;
  }
  Instance = (Il2CppObject *)sub_1C3B80C(int___TypeInfo, v17->static_fields->MAX_EXP_UP_RARITY);
  if ( !v18 )
    goto LABEL_59;
  v19 = *(_QWORD *)&v18->max_length;
  v20 = Instance;
  if ( (int)v19 < 1 )
    return 0LL;
  v21 = 0;
  v22 = 0LL;
  v23 = &v18->m_Items[1];
  do
  {
    if ( v22 >= (unsigned int)v19 )
LABEL_56:
      sub_1C3B9C8(Instance, v15);
    v24 = v23[v22];
    v25 = (ServantLeaderInfo_o *)sub_1C3B9B0(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_41971544(v25, v24, 0, 1, 0LL);
    if ( type == 2 )
    {
      if ( !v25 )
        goto LABEL_59;
      if ( !v25->fields.hp && !v25->fields.adjustHp )
        goto LABEL_24;
    }
    else
    {
      if ( type != 1 )
        goto LABEL_24;
      if ( !v25 )
        goto LABEL_59;
      if ( !v25->fields.atk && !v25->fields.adjustAtk )
        goto LABEL_24;
    }
    if ( v22 >= v18->max_length )
      goto LABEL_56;
    if ( !v20 )
      goto LABEL_59;
    if ( (unsigned int)v21 >= LODWORD(v20[1].monitor) )
      goto LABEL_56;
    v26 = (char *)v20 + 4 * v21++;
    *((_DWORD *)v26 + 8) = v23[v22];
LABEL_24:
    LODWORD(v19) = v18->max_length;
    ++v22;
  }
  while ( (__int64)v22 < (int)v19 );
  if ( !v21 )
    return 0LL;
  Instance = (Il2CppObject *)sub_1C3B80C(CombineExpUpInfo_MaterialData___TypeInfo, (unsigned int)v21);
  v27 = (CombineExpUpInfo_MaterialData_array *)Instance;
  if ( v21 >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      v29 = (Il2CppObject *)sub_1C3B9B0(CombineExpUpInfo_MaterialData_TypeInfo);
      System_Object___ctor(v29, 0LL);
      if ( !v27 )
        break;
      if ( v29 )
      {
        Instance = (Il2CppObject *)sub_1C3B8A0(v29, v27->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v46 = sub_1C3B9E4(0LL);
          sub_1C3B88C(v46, 0LL);
        }
      }
      if ( v28 >= v27->max_length )
        goto LABEL_56;
      v36 = (int)v28;
      v37 = &v27->obj.klass + (int)v28;
      v37[4] = (Il2CppClass *)v29;
      v38 = (PartyOrganizationUtility_o *)(v37 + 4);
      sub_1C3B708(v38, (int64_t)v29, v30, v31, v32, v33, v34, v35);
      if ( v28 >= v27->max_length )
        goto LABEL_56;
      if ( !v20 )
        break;
      if ( v28 >= LODWORD(v20[1].monitor) )
        goto LABEL_56;
      if ( !v38->klass )
        break;
      ++v28;
      LODWORD(v38->klass->_1.name) = *((_DWORD *)&v20[2].klass + v36);
      if ( v21 == v28 )
        goto LABEL_37;
    }
LABEL_59:
    sub_1C3B9C0(Instance, v15);
  }
LABEL_37:
  if ( !svtList )
    goto LABEL_59;
  v39 = *(_QWORD *)&svtList->max_length;
  v40 = v39 - 1;
  if ( (int)v39 >= 1 )
  {
    v41 = 0;
    while ( 1 )
    {
      v42 = &svtList->obj.klass + v41;
      v43 = (UserServantEntity_o *)v42[4];
      if ( !v43 )
        goto LABEL_59;
      Instance = (Il2CppObject *)UserServantEntity__IsStatusUp((UserServantEntity_o *)v42[4], 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (Il2CppObject *)UserServantEntity__getSvtClassId(v43, 0, 0LL);
        if ( (_DWORD)Instance == classId )
        {
          if ( type == 2 )
          {
            if ( v43->fields.hp || v43->fields.adjustHp )
            {
LABEL_50:
              Instance = (Il2CppObject *)UserServantEntity__getRarity(v43, 0LL);
              if ( !v27 )
                goto LABEL_59;
              if ( v21 - (int)Instance >= v27->max_length )
                goto LABEL_56;
              v44 = v27->m_Items[v21 - (int)Instance];
              if ( !v44 )
                goto LABEL_59;
              ++v44->fields.num;
            }
          }
          else if ( type == 1 && (v43->fields.atk || v43->fields.adjustAtk) )
          {
            goto LABEL_50;
          }
        }
      }
      if ( v40 == v41 )
        return v27;
      if ( ++v41 >= svtList->max_length )
        goto LABEL_56;
    }
  }
  return v27;
}


void __fastcall CombineExpUpInfo__OnClickCenter(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x5

  if ( (byte_4C25CA1 & 1) == 0 )
  {
    sub_1C3B764(&Method_CombineExpUpInfo_OnClickCenter__, method);
    byte_4C25CA1 = 1;
  }
  if ( this->fields.nowType != 1 )
  {
    v3 = Method_CombineExpUpInfo_OnClickCenter__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickCenter__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_CombineExpUpInfo_OnClickCenter__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 1, 1, 0LL, v5);
  }
}


void __fastcall CombineExpUpInfo__OnClickChangeButton(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x5
  int32_t nowKind; // w8
  int32_t v7; // w1

  if ( (byte_4C25CA3 & 1) == 0 )
  {
    sub_1C3B764(&Method_CombineExpUpInfo_OnClickChangeButton__, method);
    byte_4C25CA3 = 1;
  }
  v3 = Method_CombineExpUpInfo_OnClickChangeButton__;
  if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickChangeButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3B77C(Method_CombineExpUpInfo_OnClickChangeButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  nowKind = this->fields.nowKind;
  if ( nowKind )
    v7 = 2 * (nowKind == 1);
  else
    v7 = 1;
  CombineExpUpInfo__ExpUpInfoSet(this, v7, this->fields.nowType, 0, 0LL, v5);
}


void __fastcall CombineExpUpInfo__OnClickLeft(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x5

  if ( (byte_4C25CA0 & 1) == 0 )
  {
    sub_1C3B764(&Method_CombineExpUpInfo_OnClickLeft__, method);
    byte_4C25CA0 = 1;
  }
  if ( this->fields.nowType )
  {
    v3 = Method_CombineExpUpInfo_OnClickLeft__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickLeft__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_CombineExpUpInfo_OnClickLeft__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 0, 1, 0LL, v5);
  }
}


void __fastcall CombineExpUpInfo__OnClickRight(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x5

  if ( (byte_4C25CA2 & 1) == 0 )
  {
    sub_1C3B764(&Method_CombineExpUpInfo_OnClickRight__, method);
    byte_4C25CA2 = 1;
  }
  if ( this->fields.nowType != 2 )
  {
    v3 = Method_CombineExpUpInfo_OnClickRight__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickRight__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_CombineExpUpInfo_OnClickRight__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 2, 1, 0LL, v5);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  unsigned __int64 v14; // x22
  unsigned __int64 v15; // x28
  struct UnityEngine_GameObject_array *btnObjList; // x8
  struct UISprite_array *btnSpriteList; // x8
  struct UISprite_array *v18; // x8
  UIWidget_o *v19; // x21
  struct UISprite_array *btnTxtSpriteList; // x8
  struct System_String_array *btnSpriteNameList; // x9
  UISprite_o *v22; // x21
  System_String_o *v23; // x0
  System_String_o *v24; // x1
  struct UISprite_array *v25; // x8
  struct UISprite_array *v26; // x8
  UIWidget_o *v27; // x21
  struct UISprite_array *v28; // x8
  struct System_String_array *v29; // x9
  __int64 *v30; // x8

  v6 = this;
  if ( (byte_4C25C9F & 1) == 0 )
  {
    sub_1C3B764(&CombineExpUpInfo_TypeInfo, *(_QWORD *)&kind);
    sub_1C3B764(&StringLiteral_22663/*"rubyLabel"*/, v7);
    sub_1C3B764(&StringLiteral_17803/*"combine_fodder015"*/, v8);
    sub_1C3B764(&StringLiteral_22693/*"scaleto"*/, v9);
    sub_1C3B764(&StringLiteral_18008/*"csIBM284"*/, v10);
    sub_1C3B764(&StringLiteral_18007/*"csIBM280"*/, v11);
    sub_1C3B764(&StringLiteral_18002/*"csIBM037"*/, v12);
    this = (CombineExpUpInfo_o *)sub_1C3B764(&StringLiteral_17802/*"combine_fodder014"*/, v13);
    byte_4C25C9F = 1;
  }
  v14 = 0LL;
  v15 = (unsigned int)type;
  do
  {
    btnObjList = v6->fields.btnObjList;
    if ( !btnObjList )
      goto LABEL_47;
    if ( v14 >= btnObjList->max_length )
      goto LABEL_48;
    this = (CombineExpUpInfo_o *)btnObjList->m_Items[v14];
    if ( !this )
      goto LABEL_47;
    if ( v15 == v14 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      btnSpriteList = v6->fields.btnSpriteList;
      if ( !btnSpriteList )
        goto LABEL_47;
      if ( btnSpriteList->max_length <= v15 )
        goto LABEL_48;
      this = (CombineExpUpInfo_o *)btnSpriteList->m_Items[v15];
      if ( !this )
        goto LABEL_47;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17803/*"combine_fodder015"*/, 0LL);
      v18 = v6->fields.btnSpriteList;
      if ( !v18 )
        goto LABEL_47;
      if ( v18->max_length <= v15 )
        goto LABEL_48;
      this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      v19 = (UIWidget_o *)v18->m_Items[v15];
      if ( !CombineExpUpInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineExpUpInfo_TypeInfo);
        this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      }
      if ( !v19 )
        goto LABEL_47;
      UIWidget__SetDimensions(
        v19,
        (int32_t)this[1].fields.btnSpriteNameList->obj.klass,
        HIDWORD(this[1].fields.btnSpriteNameList->obj.klass),
        0LL);
      btnTxtSpriteList = v6->fields.btnTxtSpriteList;
      if ( !btnTxtSpriteList )
        goto LABEL_47;
      if ( btnTxtSpriteList->max_length <= v15 )
        goto LABEL_48;
      btnSpriteNameList = v6->fields.btnSpriteNameList;
      if ( !btnSpriteNameList )
        goto LABEL_47;
      if ( btnSpriteNameList->max_length <= v15 )
        goto LABEL_48;
      v22 = btnTxtSpriteList->m_Items[v15];
      v23 = btnSpriteNameList->m_Items[v15];
      v24 = (System_String_o *)StringLiteral_22693/*"scaleto"*/;
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v25 = v6->fields.btnSpriteList;
      if ( !v25 )
        goto LABEL_47;
      if ( v14 >= v25->max_length )
LABEL_48:
        sub_1C3B9C8(this, *(_QWORD *)&kind);
      this = (CombineExpUpInfo_o *)v25->m_Items[v14];
      if ( !this )
        goto LABEL_47;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17802/*"combine_fodder014"*/, 0LL);
      v26 = v6->fields.btnSpriteList;
      if ( !v26 )
        goto LABEL_47;
      if ( v14 >= v26->max_length )
        goto LABEL_48;
      this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      v27 = (UIWidget_o *)v26->m_Items[v14];
      if ( !CombineExpUpInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineExpUpInfo_TypeInfo);
        this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      }
      if ( !v27 )
        goto LABEL_47;
      UIWidget__SetDimensions(
        v27,
        (int32_t)this[1].fields.btnSpriteNameList->obj.monitor,
        HIDWORD(this[1].fields.btnSpriteNameList->obj.monitor),
        0LL);
      v28 = v6->fields.btnTxtSpriteList;
      if ( !v28 )
        goto LABEL_47;
      if ( v14 >= v28->max_length )
        goto LABEL_48;
      v29 = v6->fields.btnSpriteNameList;
      if ( !v29 )
        goto LABEL_47;
      if ( v14 >= v29->max_length )
        goto LABEL_48;
      v22 = v28->m_Items[v14];
      v23 = v29->m_Items[v14];
      v24 = (System_String_o *)StringLiteral_22663/*"rubyLabel"*/;
    }
    this = (CombineExpUpInfo_o *)System_String__Concat_63368612(v23, v24, 0LL);
    if ( !v22 )
      goto LABEL_47;
    UISprite__set_spriteName(v22, (System_String_o *)this, 0LL);
    ++v14;
  }
  while ( v14 != 3 );
  switch ( kind )
  {
    case 2:
      this = (CombineExpUpInfo_o *)v6->fields.btnChangeSprite;
      if ( this )
      {
        v30 = &StringLiteral_18008/*"csIBM284"*/;
        goto LABEL_45;
      }
LABEL_47:
      sub_1C3B9C0(this, *(_QWORD *)&kind);
    case 1:
      this = (CombineExpUpInfo_o *)v6->fields.btnChangeSprite;
      if ( this )
      {
        v30 = &StringLiteral_18007/*"csIBM280"*/;
        goto LABEL_45;
      }
      goto LABEL_47;
    case 0:
      this = (CombineExpUpInfo_o *)v6->fields.btnChangeSprite;
      if ( this )
      {
        v30 = &StringLiteral_18002/*"csIBM037"*/;
LABEL_45:
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v30, 0LL);
        return;
      }
      goto LABEL_47;
  }
}


void __fastcall CombineExpUpInfo_MaterialData___ctor(CombineExpUpInfo_MaterialData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}