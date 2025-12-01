void CombineExpUpInfo___cctor(const MethodInfo *method)
{
  if ( (byte_4CCB69C & 1) == 0 )
  {
    sub_1C713B0(&CombineExpUpInfo_TypeInfo);
    byte_4CCB69C = 1;
  }
  *CombineExpUpInfo_TypeInfo->static_fields = (struct CombineExpUpInfo_StaticFields)xmmword_CEE550;
}


void CombineExpUpInfo___ctor(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x20
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Collections_Generic_List_T__o *v33; // x20
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct System_Object_array *items; // x9
  _QWORD *v41; // x8
  __int64 size; // x10
  __int64 v43; // x10
  __int64 v44; // x10
  __int64 v45; // x10
  __int64 v46; // x10
  __int64 v47; // x10
  __int64 v48; // x10
  __int64 v49; // x10

  if ( (byte_4CCB69B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_17514/*"btn_hp_"*/);
    sub_1C713B0(&StringLiteral_17453/*"btn_atk_"*/);
    sub_1C713B0(&StringLiteral_17507/*"btn_experience_"*/);
    byte_4CCB69B = 1;
  }
  v3 = sub_1C71458(string___TypeInfo, 3);
  if ( !v3 )
    goto LABEL_34;
  v11 = v3;
  if ( !*(_DWORD *)(v3 + 24)
    || (v12 = StringLiteral_17507/*"btn_experience_"*/,
        *(_QWORD *)(v3 + 32) = StringLiteral_17507/*"btn_experience_"*/,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 32), v12, v5, v6, v7, v8, v9, v10),
        *(_DWORD *)(v11 + 24) <= 1u)
    || (v19 = StringLiteral_17453/*"btn_atk_"*/,
        *(_QWORD *)(v11 + 40) = StringLiteral_17453/*"btn_atk_"*/,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v11 + 40), v19, v13, v14, v15, v16, v17, v18),
        *(_DWORD *)(v11 + 24) <= 2u) )
  {
    sub_1C71610(v3);
  }
  v26 = StringLiteral_17514/*"btn_hp_"*/;
  *(_QWORD *)(v11 + 48) = StringLiteral_17514/*"btn_hp_"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v11 + 48), v26, v20, v21, v22, v23, v24, v25);
  this->fields.btnSpriteNameList = (struct System_String_array *)v11;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.btnSpriteNameList, v11, v27, v28, v29, v30, v31, v32);
  v33 = (System_Collections_Generic_List_T__o *)sub_1C715FC(System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v33,
    (const MethodInfo_37F56CC *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__);
  if ( !v33 )
    goto LABEL_34;
  items = v33->fields._items;
  v41 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
  ++v33->fields._version;
  if ( !items )
    goto LABEL_34;
  size = v33->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v33,
      1,
      *(const MethodInfo_37F5F20 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    items = v33->fields._items;
    v41 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v33->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v33->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 1;
    ++v33->fields._version;
  }
  v43 = v33->fields._size;
  if ( (unsigned int)v43 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v33,
      2,
      *(const MethodInfo_37F5F20 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    items = v33->fields._items;
    v41 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v33->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v33->fields._size = v43 + 1;
    *((_DWORD *)items->m_Items + v43) = 2;
    ++v33->fields._version;
  }
  v44 = v33->fields._size;
  if ( (unsigned int)v44 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v33,
      3,
      *(const MethodInfo_37F5F20 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    items = v33->fields._items;
    v41 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v33->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v33->fields._size = v44 + 1;
    *((_DWORD *)items->m_Items + v44) = 3;
    ++v33->fields._version;
  }
  v45 = v33->fields._size;
  if ( (unsigned int)v45 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v33,
      4,
      *(const MethodInfo_37F5F20 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    items = v33->fields._items;
    v41 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v33->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v33->fields._size = v45 + 1;
    *((_DWORD *)items->m_Items + v45) = 4;
    ++v33->fields._version;
  }
  v46 = v33->fields._size;
  if ( (unsigned int)v46 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v33,
      5,
      *(const MethodInfo_37F5F20 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    items = v33->fields._items;
    v41 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v33->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v33->fields._size = v46 + 1;
    *((_DWORD *)items->m_Items + v46) = 5;
    ++v33->fields._version;
  }
  v47 = v33->fields._size;
  if ( (unsigned int)v47 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v33,
      6,
      *(const MethodInfo_37F5F20 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    items = v33->fields._items;
    v41 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v33->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v33->fields._size = v47 + 1;
    *((_DWORD *)items->m_Items + v47) = 6;
    ++v33->fields._version;
  }
  v48 = v33->fields._size;
  if ( (unsigned int)v48 < LODWORD(items->max_length) )
  {
    v33->fields._size = v48 + 1;
    *((_DWORD *)items->m_Items + v48) = 7;
    ++v33->fields._version;
    goto LABEL_30;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v33,
    7,
    *(const MethodInfo_37F5F20 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  items = v33->fields._items;
  v41 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
  ++v33->fields._version;
  if ( !items )
LABEL_34:
    sub_1C71608(v3, v4);
LABEL_30:
  v49 = v33->fields._size;
  if ( (unsigned int)v49 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v33,
      1001,
      *(const MethodInfo_37F5F20 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v33->fields._size = v49 + 1;
    *((_DWORD *)items->m_Items + v49) = 1001;
  }
  this->fields.SortClassOrder = (struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *)v33;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.SortClassOrder, (int32_t)v33, v34, v35, v36, v37, v38, v39);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool CombineExpUpInfo__ExpUpInfoSet(
        CombineExpUpInfo_o *this,
        int32_t kind,
        int32_t type,
        bool isFirst,
        System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *afterAction,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *changeAction; // x8
  System_Collections_Generic_List_object__o *v14; // x0
  SvtClassAttri_c *v15; // x0
  __int64 v16; // x21
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *SortClassOrder; // x9
  int32_t nowKind; // w8
  __int64 size; // x27
  DataManager_o *v23; // x22
  UserServantEntity_array *List; // x0
  Il2CppObject *MasterData_object; // x24
  UserServantStorageMaster_o *v26; // x23
  System_Collections_Generic_IEnumerable_T__o *CombineMaterialList; // x25
  System_Collections_Generic_List_object__o *v28; // x24
  UserServantEntity_array *v29; // x23
  unsigned __int64 i; // x24
  int32_t Item; // w25
  CombineExpUpInfo_o *ClassId; // x0
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x4
  int32_t nowType; // w8
  int32_t v36; // w25
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x6
  int32_t v39; // w3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned int v41; // w10
  __int64 v42; // x9
  char *v43; // x11
  struct CombineExpUpClassInfo_array *expUpClassInfoList; // x9
  int32_t v45; // w1
  int32_t v46; // w5
  struct CombineExpUpClassInfo_array *v47; // x8
  struct CombineExpUpClassInfo_array *v48; // x8
  System_Int32_array *v49; // x2
  System_Int32_array *v50; // x3
  int32_t v51; // w4

  if ( (byte_4CCB693 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor___78604440);
    sub_1C713B0(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&SvtClassAttri_TypeInfo);
    byte_4CCB693 = 1;
  }
  this->fields.nowKind = kind;
  this->fields.nowType = type;
  if ( afterAction )
  {
    this->fields.changeAction = afterAction;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.changeAction,
      (int32_t)afterAction,
      type,
      isFirst,
      (System_String_o *)afterAction,
      (int32_t)method,
      v6,
      v7);
  }
  changeAction = this->fields.changeAction;
  if ( changeAction )
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t, System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *, const MethodInfo *))changeAction->fields.invoke_impl)(
      changeAction->fields.method_code,
      (unsigned int)this->fields.nowKind,
      (unsigned int)this->fields.nowType,
      changeAction->fields.method,
      afterAction,
      method);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_int_____ctor__);
  v15 = SvtClassAttri_TypeInfo;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v15 = SvtClassAttri_TypeInfo;
  }
  v16 = sub_1C71458(int___TypeInfo, v15->static_fields->MAX_EXP_UP_RARITY);
  Instance = (DataManager_o *)sub_1C71458(int___TypeInfo, SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY);
  SortClassOrder = this->fields.SortClassOrder;
  if ( !SortClassOrder )
    goto LABEL_74;
  nowKind = this->fields.nowKind;
  size = (unsigned int)SortClassOrder->fields._size;
  v23 = Instance;
  switch ( nowKind )
  {
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_74;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_74;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !MasterData_object )
        goto LABEL_74;
      v26 = (UserServantStorageMaster_o *)Instance;
      CombineMaterialList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                             (UserServantMaster_o *)MasterData_object,
                                                                             0);
      v28 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor_58785804(
        v28,
        CombineMaterialList,
        (const MethodInfo_381000C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___78604440);
      if ( !v26 )
        goto LABEL_74;
      Instance = (DataManager_o *)UserServantStorageMaster__getList(v26, 0);
      if ( !v28 )
        goto LABEL_74;
      System_Collections_Generic_List_object___AddRange(
        v28,
        (System_Collections_Generic_IEnumerable_T__o *)Instance,
        (const MethodInfo_3810924 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      List = (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v28,
                                          (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      goto LABEL_25;
    case 1:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_74;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !Instance )
        goto LABEL_74;
      List = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0);
      goto LABEL_25;
    case 0:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_74;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_74;
      List = UserServantMaster__getCombineMaterialList((UserServantMaster_o *)Instance, 0);
LABEL_25:
      v29 = List;
      goto LABEL_27;
  }
  v29 = 0;
LABEL_27:
  if ( (int)size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      Instance = (DataManager_o *)this->fields.SortClassOrder;
      if ( !Instance )
        goto LABEL_74;
      Item = System_Collections_Generic_List_Int32Enum___get_Item(
               (System_Collections_Generic_List_T__o *)Instance,
               i,
               (const MethodInfo_37F5C30 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Item__);
      if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
      ClassId = (CombineExpUpInfo_o *)SvtClassAttri__getClassId(Item, 0);
      nowType = this->fields.nowType;
      v36 = (int)ClassId;
      if ( nowType == 1 )
      {
        v39 = 1;
      }
      else
      {
        if ( !nowType )
        {
          Instance = (DataManager_o *)CombineExpUpInfo__GetTargetClassMaterialInfo(ClassId, v29, (int32_t)ClassId, v33);
          if ( !Instance )
            return (char)Instance;
          goto LABEL_39;
        }
        v39 = 2;
      }
      Instance = (DataManager_o *)CombineExpUpInfo__GetTargetClassStatusUpInfo(ClassId, v29, (int32_t)ClassId, v39, v34);
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
        v41 = 0;
        while ( 1 )
        {
          v42 = *((_QWORD *)&Instance->fields._DispLog + (int)v41);
          if ( !v42 || !v16 )
            break;
          if ( v41 >= *(_DWORD *)(v16 + 24) )
            goto LABEL_75;
          *(_DWORD *)(v16 + 4LL * (int)v41 + 32) = *(_DWORD *)(v42 + 16);
          if ( !v23 )
            break;
          if ( v41 >= LODWORD(v23->fields.m_CancellationTokenSource) )
            goto LABEL_75;
          v43 = (char *)v23 + 4 * (int)v41++;
          *((_DWORD *)v43 + 8) = *(_DWORD *)(v42 + 20);
          if ( (_DWORD)m_CancellationTokenSource == v41 )
            goto LABEL_48;
        }
LABEL_74:
        sub_1C71608(Instance, v18);
      }
LABEL_48:
      if ( isFirst )
      {
        if ( this->fields.nowType )
        {
          expUpClassInfoList = this->fields.expUpClassInfoList;
          if ( !expUpClassInfoList )
            goto LABEL_74;
          if ( i >= LODWORD(expUpClassInfoList->max_length) )
            goto LABEL_75;
          Instance = (DataManager_o *)expUpClassInfoList->m_Items[i];
          if ( v36 == 1001 )
          {
            if ( !Instance )
              goto LABEL_74;
            v45 = 1001;
            v46 = 5;
            goto LABEL_63;
          }
          if ( !Instance )
            goto LABEL_74;
          if ( (_DWORD)m_CancellationTokenSource == 5 )
            v51 = 2;
          else
            v51 = 1;
          v46 = 3;
          v45 = v36;
          v49 = (System_Int32_array *)v16;
          v50 = (System_Int32_array *)v23;
        }
        else
        {
          v48 = this->fields.expUpClassInfoList;
          if ( !v48 )
            goto LABEL_74;
          if ( i >= LODWORD(v48->max_length) )
LABEL_75:
            sub_1C71610(Instance);
          Instance = (DataManager_o *)v48->m_Items[i];
          if ( !Instance )
            goto LABEL_74;
          v46 = 5;
          v45 = v36;
LABEL_63:
          v49 = (System_Int32_array *)v16;
          v50 = (System_Int32_array *)v23;
          v51 = 0;
        }
        CombineExpUpClassInfo__Set((CombineExpUpClassInfo_o *)Instance, v45, v49, v50, v51, v46, v38);
        continue;
      }
      v47 = this->fields.expUpClassInfoList;
      if ( !v47 )
        goto LABEL_74;
      if ( i >= LODWORD(v47->max_length) )
        goto LABEL_75;
      Instance = (DataManager_o *)v47->m_Items[i];
      if ( !Instance )
        goto LABEL_74;
      CombineExpUpClassInfo__Set_49157832((CombineExpUpClassInfo_o *)Instance, (System_Int32_array *)v23, v37);
    }
  }
  CombineExpUpInfo__SetBtnState(this, this->fields.nowKind, this->fields.nowType, v19);
  LOBYTE(Instance) = 1;
  return (char)Instance;
}


CombineExpUpInfo_MaterialData_array *CombineExpUpInfo__GetTargetClassMaterialInfo(
        CombineExpUpInfo_o *this,
        UserServantEntity_array *svtList,
        int32_t classId,
        const MethodInfo *method)
{
  SvtClassAttri_c *v6; // x0
  unsigned int *v7; // x21
  __int64 Instance; // x0
  __int64 v9; // x1
  System_Int32_array *TargetClassMaterialSvtIdList; // x0
  System_Int32_array *v11; // x22
  __int64 v12; // x25
  unsigned __int64 v13; // x26
  unsigned int *v14; // x27
  signed __int64 v15; // x10
  Il2CppObject *v16; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  il2cpp_array_size_t max_length; // x23
  bool v25; // zf
  unsigned __int64 v26; // x10
  __int64 v27; // x11
  unsigned __int64 v28; // x8
  __int64 v29; // x14
  int32_t v30; // w15
  il2cpp_array_size_t v31; // x8
  int v32; // w23
  int v33; // w25
  Il2CppClass **v34; // x8
  UserServantEntity_o *v35; // x22
  SvtClassAttri_c *v36; // x0
  int32_t MAX_EXP_UP_RARITY; // w26
  __int64 v38; // x8
  __int64 v39; // x0

  if ( (byte_4CCB694 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&CombineExpUpInfo_MaterialData___TypeInfo);
    sub_1C713B0(&CombineExpUpInfo_MaterialData_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&SvtClassAttri_TypeInfo);
    byte_4CCB694 = 1;
  }
  v6 = SvtClassAttri_TypeInfo;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v6 = SvtClassAttri_TypeInfo;
  }
  v7 = (unsigned int *)sub_1C71458(CombineExpUpInfo_MaterialData___TypeInfo, v6->static_fields->MAX_EXP_UP_RARITY);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_47;
  TargetClassMaterialSvtIdList = ServantMaster__GetTargetClassMaterialSvtIdList((ServantMaster_o *)Instance, classId, 0);
  if ( !TargetClassMaterialSvtIdList )
    return 0;
  v11 = TargetClassMaterialSvtIdList;
  if ( !TargetClassMaterialSvtIdList->max_length )
    return 0;
  v12 = 0;
  v13 = 0;
  v14 = v7 + 8;
  while ( 1 )
  {
    Instance = (__int64)SvtClassAttri_TypeInfo;
    if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
      Instance = (__int64)SvtClassAttri_TypeInfo;
    }
    v15 = **(int **)(Instance + 184);
    if ( (__int64)v13 >= v15 )
      break;
    v16 = (Il2CppObject *)sub_1C715FC(CombineExpUpInfo_MaterialData_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v7 )
      goto LABEL_47;
    if ( v16 )
    {
      Instance = sub_1C714EC(v16, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
      if ( !Instance )
      {
        v39 = sub_1C7162C(0);
        sub_1C714D8(v39, 0);
      }
    }
    if ( v13 >= v7[6] )
      goto LABEL_46;
    *(_QWORD *)&v14[2 * v13] = v16;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v14[v12], (int32_t)v16, v17, v18, v19, v20, v21, v22);
    ++v13;
    v12 += 2;
  }
  max_length = v11->max_length;
  if ( !*(_DWORD *)(Instance + 224) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    LODWORD(v15) = SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY;
  }
  if ( (int)max_length >= 1 )
  {
    if ( v7 )
    {
      v25 = (_DWORD)v15 == (_DWORD)max_length;
      v26 = v7[6];
      v27 = !v25;
      v28 = 0;
      while ( v27 + v28 < v26 && v28 < LODWORD(v11->max_length) )
      {
        v29 = *(_QWORD *)&v7[2 * (unsigned int)v27 + 8 + 2 * v28];
        if ( !v29 )
          goto LABEL_47;
        v30 = v11->m_Items[v28++];
        *(_DWORD *)(v29 + 16) = v30;
        if ( (unsigned int)max_length == v28 )
          goto LABEL_32;
      }
LABEL_46:
      sub_1C71610(Instance);
    }
LABEL_47:
    sub_1C71608(Instance, v9);
  }
LABEL_32:
  if ( !svtList )
    goto LABEL_47;
  v31 = svtList->max_length;
  v32 = v31 - 1;
  if ( (int)v31 >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      v34 = &svtList->obj.klass + v33;
      v35 = (UserServantEntity_o *)v34[4];
      if ( !v35 )
        goto LABEL_47;
      Instance = UserServantEntity__IsCombineMaterial((UserServantEntity_o *)v34[4], 0);
      if ( (Instance & 1) != 0 )
      {
        Instance = UserServantEntity__getSvtClassId(v35, 0, 0, 0);
        if ( (_DWORD)Instance == classId )
        {
          v36 = SvtClassAttri_TypeInfo;
          if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
            v36 = SvtClassAttri_TypeInfo;
          }
          MAX_EXP_UP_RARITY = v36->static_fields->MAX_EXP_UP_RARITY;
          Instance = UserServantEntity__getRarity(v35, 0);
          if ( !v7 )
            goto LABEL_47;
          if ( MAX_EXP_UP_RARITY - (int)Instance >= v7[6] )
            goto LABEL_46;
          v38 = *(_QWORD *)&v7[2 * (MAX_EXP_UP_RARITY - (int)Instance) + 8];
          if ( !v38 )
            goto LABEL_47;
          ++*(_DWORD *)(v38 + 20);
        }
      }
      if ( v32 == v33 )
        return (CombineExpUpInfo_MaterialData_array *)v7;
      if ( (unsigned int)++v33 >= LODWORD(svtList->max_length) )
        goto LABEL_46;
    }
  }
  return (CombineExpUpInfo_MaterialData_array *)v7;
}


CombineExpUpInfo_MaterialData_array *CombineExpUpInfo__GetTargetClassStatusUpInfo(
        CombineExpUpInfo_o *this,
        UserServantEntity_array *svtList,
        int32_t classId,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  System_Int32_array *TargetClassStatusUpSvtIdList; // x0
  SvtClassAttri_c *v11; // x8
  System_Int32_array *v12; // x24
  il2cpp_array_size_t max_length; // x8
  Il2CppObject *v14; // x23
  int v15; // w22
  unsigned __int64 v16; // x27
  int32_t *m_Items; // x29
  int32_t v18; // w26
  ServantLeaderInfo_o *v19; // x25
  char *v20; // x9
  CombineExpUpInfo_MaterialData_array *v21; // x24
  unsigned int v22; // w27
  Il2CppObject *v23; // x25
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  __int64 v30; // x29
  Il2CppClass **v31; // x26
  GrandQuestFolderBoardItem_o *v32; // x26
  il2cpp_array_size_t v33; // x8
  int v34; // w25
  int v35; // w26
  Il2CppClass **v36; // x8
  UserServantEntity_o *v37; // x23
  CombineExpUpInfo_MaterialData_o *v38; // x8
  __int64 v40; // x0

  if ( (byte_4CCB695 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&CombineExpUpInfo_MaterialData___TypeInfo);
    sub_1C713B0(&CombineExpUpInfo_MaterialData_TypeInfo);
    sub_1C713B0(&ServantLeaderInfo_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&SvtClassAttri_TypeInfo);
    byte_4CCB695 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_59;
  TargetClassStatusUpSvtIdList = ServantMaster__GetTargetClassStatusUpSvtIdList((ServantMaster_o *)Instance, classId, 0);
  v11 = SvtClassAttri_TypeInfo;
  v12 = TargetClassStatusUpSvtIdList;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v11 = SvtClassAttri_TypeInfo;
  }
  Instance = (Il2CppObject *)sub_1C71458(int___TypeInfo, v11->static_fields->MAX_EXP_UP_RARITY);
  if ( !v12 )
    goto LABEL_59;
  max_length = v12->max_length;
  v14 = Instance;
  if ( (int)max_length < 1 )
    return 0;
  v15 = 0;
  v16 = 0;
  m_Items = v12->m_Items;
  do
  {
    if ( v16 >= (unsigned int)max_length )
LABEL_56:
      sub_1C71610(Instance);
    v18 = m_Items[v16];
    v19 = (ServantLeaderInfo_o *)sub_1C715FC(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_43769908(v19, v18, 0, 1, 0);
    if ( type == 2 )
    {
      if ( !v19 )
        goto LABEL_59;
      if ( !v19->fields.hp && !v19->fields.adjustHp )
        goto LABEL_24;
    }
    else
    {
      if ( type != 1 )
        goto LABEL_24;
      if ( !v19 )
        goto LABEL_59;
      if ( !v19->fields.atk && !v19->fields.adjustAtk )
        goto LABEL_24;
    }
    if ( v16 >= LODWORD(v12->max_length) )
      goto LABEL_56;
    if ( !v14 )
      goto LABEL_59;
    if ( (unsigned int)v15 >= LODWORD(v14[1].monitor) )
      goto LABEL_56;
    v20 = (char *)v14 + 4 * v15++;
    *((_DWORD *)v20 + 8) = m_Items[v16];
LABEL_24:
    LODWORD(max_length) = v12->max_length;
    ++v16;
  }
  while ( (__int64)v16 < (int)max_length );
  if ( !v15 )
    return 0;
  Instance = (Il2CppObject *)sub_1C71458(CombineExpUpInfo_MaterialData___TypeInfo, (unsigned int)v15);
  v21 = (CombineExpUpInfo_MaterialData_array *)Instance;
  if ( v15 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      v23 = (Il2CppObject *)sub_1C715FC(CombineExpUpInfo_MaterialData_TypeInfo);
      System_Object___ctor(v23, 0);
      if ( !v21 )
        break;
      if ( v23 )
      {
        Instance = (Il2CppObject *)sub_1C714EC(v23, v21->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v40 = sub_1C7162C(0);
          sub_1C714D8(v40, 0);
        }
      }
      if ( v22 >= LODWORD(v21->max_length) )
        goto LABEL_56;
      v30 = (int)v22;
      v31 = &v21->obj.klass + (int)v22;
      v31[4] = (Il2CppClass *)v23;
      v32 = (GrandQuestFolderBoardItem_o *)(v31 + 4);
      sub_1C71354(v32, (int32_t)v23, v24, v25, v26, v27, v28, v29);
      if ( v22 >= LODWORD(v21->max_length) )
        goto LABEL_56;
      if ( !v14 )
        break;
      if ( v22 >= LODWORD(v14[1].monitor) )
        goto LABEL_56;
      if ( !v32->klass )
        break;
      ++v22;
      LODWORD(v32->klass->_1.name) = *((_DWORD *)&v14[2].klass + v30);
      if ( v15 == v22 )
        goto LABEL_37;
    }
LABEL_59:
    sub_1C71608(Instance, v9);
  }
LABEL_37:
  if ( !svtList )
    goto LABEL_59;
  v33 = svtList->max_length;
  v34 = v33 - 1;
  if ( (int)v33 >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      v36 = &svtList->obj.klass + v35;
      v37 = (UserServantEntity_o *)v36[4];
      if ( !v37 )
        goto LABEL_59;
      Instance = (Il2CppObject *)UserServantEntity__IsStatusUp((UserServantEntity_o *)v36[4], 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (Il2CppObject *)UserServantEntity__getSvtClassId(v37, 0, 0, 0);
        if ( (_DWORD)Instance == classId )
        {
          if ( type == 2 )
          {
            if ( v37->fields.hp || v37->fields.adjustHp )
            {
LABEL_50:
              Instance = (Il2CppObject *)UserServantEntity__getRarity(v37, 0);
              if ( !v21 )
                goto LABEL_59;
              if ( (unsigned int)(v15 - (_DWORD)Instance) >= LODWORD(v21->max_length) )
                goto LABEL_56;
              v38 = v21->m_Items[v15 - (int)Instance];
              if ( !v38 )
                goto LABEL_59;
              ++v38->fields.num;
            }
          }
          else if ( type == 1 && (v37->fields.atk || v37->fields.adjustAtk) )
          {
            goto LABEL_50;
          }
        }
      }
      if ( v34 == v35 )
        return v21;
      if ( (unsigned int)++v35 >= LODWORD(svtList->max_length) )
        goto LABEL_56;
    }
  }
  return v21;
}


void CombineExpUpInfo__OnClickCenter(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x5

  if ( (byte_4CCB698 & 1) == 0 )
  {
    sub_1C713B0(&Method_CombineExpUpInfo_OnClickCenter__);
    byte_4CCB698 = 1;
  }
  if ( this->fields.nowType != 1 )
  {
    v3 = Method_CombineExpUpInfo_OnClickCenter__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickCenter__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CombineExpUpInfo_OnClickCenter__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 1, 1, 0, v5);
  }
}


void CombineExpUpInfo__OnClickChangeButton(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x5
  int32_t nowKind; // w8
  int32_t v7; // w1

  if ( (byte_4CCB69A & 1) == 0 )
  {
    sub_1C713B0(&Method_CombineExpUpInfo_OnClickChangeButton__);
    byte_4CCB69A = 1;
  }
  v3 = Method_CombineExpUpInfo_OnClickChangeButton__;
  if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickChangeButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_CombineExpUpInfo_OnClickChangeButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  nowKind = this->fields.nowKind;
  if ( nowKind )
    v7 = 2 * (nowKind == 1);
  else
    v7 = 1;
  CombineExpUpInfo__ExpUpInfoSet(this, v7, this->fields.nowType, 0, 0, v5);
}


void CombineExpUpInfo__OnClickLeft(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x5

  if ( (byte_4CCB697 & 1) == 0 )
  {
    sub_1C713B0(&Method_CombineExpUpInfo_OnClickLeft__);
    byte_4CCB697 = 1;
  }
  if ( this->fields.nowType )
  {
    v3 = Method_CombineExpUpInfo_OnClickLeft__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickLeft__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CombineExpUpInfo_OnClickLeft__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 0, 1, 0, v5);
  }
}


void CombineExpUpInfo__OnClickRight(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x5

  if ( (byte_4CCB699 & 1) == 0 )
  {
    sub_1C713B0(&Method_CombineExpUpInfo_OnClickRight__);
    byte_4CCB699 = 1;
  }
  if ( this->fields.nowType != 2 )
  {
    v3 = Method_CombineExpUpInfo_OnClickRight__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickRight__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CombineExpUpInfo_OnClickRight__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 2, 1, 0, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineExpUpInfo__SetBtnState(CombineExpUpInfo_o *this, int32_t kind, int32_t type, const MethodInfo *method)
{
  CombineExpUpInfo_o *v6; // x19
  unsigned __int64 v7; // x22
  unsigned __int64 v8; // x28
  struct UnityEngine_GameObject_array *btnObjList; // x8
  struct UISprite_array *btnSpriteList; // x8
  struct UISprite_array *v11; // x8
  UIWidget_o *v12; // x21
  struct UISprite_array *btnTxtSpriteList; // x8
  struct System_String_array *btnSpriteNameList; // x9
  UISprite_o *v15; // x21
  System_String_o *v16; // x0
  System_String_o *v17; // x1
  struct UISprite_array *v18; // x8
  struct UISprite_array *v19; // x8
  UIWidget_o *v20; // x21
  struct UISprite_array *v21; // x8
  struct System_String_array *v22; // x9
  __int64 *v23; // x8

  v6 = this;
  if ( (byte_4CCB696 & 1) == 0 )
  {
    sub_1C713B0(&CombineExpUpInfo_TypeInfo);
    sub_1C713B0(&StringLiteral_22469/*"off"*/);
    sub_1C713B0(&StringLiteral_17459/*"btn_bg_02_on"*/);
    sub_1C713B0(&StringLiteral_22496/*"on"*/);
    sub_1C713B0(&StringLiteral_17683/*"button_total"*/);
    sub_1C713B0(&StringLiteral_17682/*"button_storage"*/);
    sub_1C713B0(&StringLiteral_17677/*"button_possess"*/);
    this = (CombineExpUpInfo_o *)sub_1C713B0(&StringLiteral_17458/*"btn_bg_02_off"*/);
    byte_4CCB696 = 1;
  }
  v7 = 0;
  v8 = (unsigned int)type;
  do
  {
    btnObjList = v6->fields.btnObjList;
    if ( !btnObjList )
      goto LABEL_47;
    if ( v7 >= LODWORD(btnObjList->max_length) )
      goto LABEL_48;
    this = (CombineExpUpInfo_o *)btnObjList->m_Items[v7];
    if ( !this )
      goto LABEL_47;
    if ( v8 == v7 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      btnSpriteList = v6->fields.btnSpriteList;
      if ( !btnSpriteList )
        goto LABEL_47;
      if ( LODWORD(btnSpriteList->max_length) <= v8 )
        goto LABEL_48;
      this = (CombineExpUpInfo_o *)btnSpriteList->m_Items[v8];
      if ( !this )
        goto LABEL_47;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17459/*"btn_bg_02_on"*/, 0);
      v11 = v6->fields.btnSpriteList;
      if ( !v11 )
        goto LABEL_47;
      if ( LODWORD(v11->max_length) <= v8 )
        goto LABEL_48;
      this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      v12 = (UIWidget_o *)v11->m_Items[v8];
      if ( !CombineExpUpInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineExpUpInfo_TypeInfo);
        this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      }
      if ( !v12 )
        goto LABEL_47;
      UIWidget__SetDimensions(
        v12,
        (int32_t)this[1].fields.btnSpriteNameList->obj.klass,
        HIDWORD(this[1].fields.btnSpriteNameList->obj.klass),
        0);
      btnTxtSpriteList = v6->fields.btnTxtSpriteList;
      if ( !btnTxtSpriteList )
        goto LABEL_47;
      if ( LODWORD(btnTxtSpriteList->max_length) <= v8 )
        goto LABEL_48;
      btnSpriteNameList = v6->fields.btnSpriteNameList;
      if ( !btnSpriteNameList )
        goto LABEL_47;
      if ( LODWORD(btnSpriteNameList->max_length) <= v8 )
        goto LABEL_48;
      v15 = btnTxtSpriteList->m_Items[v8];
      v16 = btnSpriteNameList->m_Items[v8];
      v17 = (System_String_o *)StringLiteral_22496/*"on"*/;
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v18 = v6->fields.btnSpriteList;
      if ( !v18 )
        goto LABEL_47;
      if ( v7 >= LODWORD(v18->max_length) )
LABEL_48:
        sub_1C71610(this);
      this = (CombineExpUpInfo_o *)v18->m_Items[v7];
      if ( !this )
        goto LABEL_47;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17458/*"btn_bg_02_off"*/, 0);
      v19 = v6->fields.btnSpriteList;
      if ( !v19 )
        goto LABEL_47;
      if ( v7 >= LODWORD(v19->max_length) )
        goto LABEL_48;
      this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      v20 = (UIWidget_o *)v19->m_Items[v7];
      if ( !CombineExpUpInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineExpUpInfo_TypeInfo);
        this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      }
      if ( !v20 )
        goto LABEL_47;
      UIWidget__SetDimensions(
        v20,
        (int32_t)this[1].fields.btnSpriteNameList->obj.monitor,
        HIDWORD(this[1].fields.btnSpriteNameList->obj.monitor),
        0);
      v21 = v6->fields.btnTxtSpriteList;
      if ( !v21 )
        goto LABEL_47;
      if ( v7 >= LODWORD(v21->max_length) )
        goto LABEL_48;
      v22 = v6->fields.btnSpriteNameList;
      if ( !v22 )
        goto LABEL_47;
      if ( v7 >= LODWORD(v22->max_length) )
        goto LABEL_48;
      v15 = v21->m_Items[v7];
      v16 = v22->m_Items[v7];
      v17 = (System_String_o *)StringLiteral_22469/*"off"*/;
    }
    this = (CombineExpUpInfo_o *)System_String__Concat_64031724(v16, v17, 0);
    if ( !v15 )
      goto LABEL_47;
    UISprite__set_spriteName(v15, (System_String_o *)this, 0);
    ++v7;
  }
  while ( v7 != 3 );
  switch ( kind )
  {
    case 2:
      this = (CombineExpUpInfo_o *)v6->fields.btnChangeSprite;
      if ( this )
      {
        v23 = &StringLiteral_17683/*"button_total"*/;
        goto LABEL_45;
      }
LABEL_47:
      sub_1C71608(this, *(_QWORD *)&kind);
    case 1:
      this = (CombineExpUpInfo_o *)v6->fields.btnChangeSprite;
      if ( this )
      {
        v23 = &StringLiteral_17682/*"button_storage"*/;
        goto LABEL_45;
      }
      goto LABEL_47;
    case 0:
      this = (CombineExpUpInfo_o *)v6->fields.btnChangeSprite;
      if ( this )
      {
        v23 = &StringLiteral_17677/*"button_possess"*/;
LABEL_45:
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v23, 0);
        return;
      }
      goto LABEL_47;
  }
}


void CombineExpUpInfo_MaterialData___ctor(CombineExpUpInfo_MaterialData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}