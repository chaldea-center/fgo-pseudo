void CombineExpUpInfo___cctor(const MethodInfo *method)
{
  if ( (byte_4C47175 & 1) == 0 )
  {
    sub_1C37058(&CombineExpUpInfo_TypeInfo);
    byte_4C47175 = 1;
  }
  *CombineExpUpInfo_TypeInfo->static_fields = (struct CombineExpUpInfo_StaticFields)xmmword_C0DFD0;
}


void CombineExpUpInfo___ctor(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x20
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_T__o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x9
  _QWORD *v20; // x8
  __int64 size; // x10
  __int64 v22; // x10
  __int64 v23; // x10
  __int64 v24; // x10
  __int64 v25; // x10
  __int64 v26; // x10
  __int64 v27; // x10
  __int64 v28; // x10

  if ( (byte_4C47174 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__);
    sub_1C37058(&System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_17492/*"btn_hp_"*/);
    sub_1C37058(&StringLiteral_17431/*"btn_atk_"*/);
    sub_1C37058(&StringLiteral_17485/*"btn_experience_"*/);
    byte_4C47174 = 1;
  }
  v3 = sub_1C37100(string___TypeInfo, 3);
  if ( !v3 )
    goto LABEL_34;
  v6 = v3;
  if ( !*(_DWORD *)(v3 + 24)
    || (v7 = StringLiteral_17485/*"btn_experience_"*/,
        *(_QWORD *)(v3 + 32) = StringLiteral_17485/*"btn_experience_"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), v7, v4, v5),
        *(_DWORD *)(v6 + 24) <= 1u)
    || (v10 = StringLiteral_17431/*"btn_atk_"*/,
        *(_QWORD *)(v6 + 40) = StringLiteral_17431/*"btn_atk_"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 40), v10, v8, v9),
        *(_DWORD *)(v6 + 24) <= 2u) )
  {
    sub_1C372BC(v3);
  }
  v13 = StringLiteral_17492/*"btn_hp_"*/;
  *(_QWORD *)(v6 + 48) = StringLiteral_17492/*"btn_hp_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 48), v13, v11, v12);
  this->fields.btnSpriteNameList = (struct System_String_array *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.btnSpriteNameList, v6, v14, v15);
  v16 = (System_Collections_Generic_List_T__o *)sub_1C372A4(System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v16,
    (const MethodInfo_3787FD8 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__);
  if ( !v16 )
    goto LABEL_34;
  items = v16->fields._items;
  v20 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
  ++v16->fields._version;
  if ( !items )
    goto LABEL_34;
  size = v16->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      1,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v16->fields._items;
    v20 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v16->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 1;
    ++v16->fields._version;
  }
  v22 = v16->fields._size;
  if ( (unsigned int)v22 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      2,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v16->fields._items;
    v20 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v16->fields._size = v22 + 1;
    *((_DWORD *)items->m_Items + v22) = 2;
    ++v16->fields._version;
  }
  v23 = v16->fields._size;
  if ( (unsigned int)v23 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      3,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v16->fields._items;
    v20 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v16->fields._size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 3;
    ++v16->fields._version;
  }
  v24 = v16->fields._size;
  if ( (unsigned int)v24 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      4,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v16->fields._items;
    v20 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v16->fields._size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 4;
    ++v16->fields._version;
  }
  v25 = v16->fields._size;
  if ( (unsigned int)v25 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      5,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v16->fields._items;
    v20 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v16->fields._size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 5;
    ++v16->fields._version;
  }
  v26 = v16->fields._size;
  if ( (unsigned int)v26 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      6,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    items = v16->fields._items;
    v20 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v16->fields._size = v26 + 1;
    *((_DWORD *)items->m_Items + v26) = 6;
    ++v16->fields._version;
  }
  v27 = v16->fields._size;
  if ( (unsigned int)v27 < LODWORD(items->max_length) )
  {
    v16->fields._size = v27 + 1;
    *((_DWORD *)items->m_Items + v27) = 7;
    ++v16->fields._version;
    goto LABEL_30;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v16,
    7,
    *(const MethodInfo_378882C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  items = v16->fields._items;
  v20 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
  ++v16->fields._version;
  if ( !items )
LABEL_34:
    sub_1C372B4(v3);
LABEL_30:
  v28 = v16->fields._size;
  if ( (unsigned int)v28 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      1001,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v16->fields._size = v28 + 1;
    *((_DWORD *)items->m_Items + v28) = 1001;
  }
  this->fields.SortClassOrder = (struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *)v16;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.SortClassOrder, (int32_t)v16, v17, v18);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool CombineExpUpInfo__ExpUpInfoSet(
        CombineExpUpInfo_o *this,
        int32_t kind,
        int32_t type,
        bool isFirst,
        System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *afterAction,
        const MethodInfo *method)
{
  struct System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *changeAction; // x8
  System_Collections_Generic_List_object__o *v12; // x0
  SvtClassAttri_c *v13; // x0
  __int64 v14; // x21
  DataManager_o *Instance; // x0
  const MethodInfo *v16; // x3
  struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *SortClassOrder; // x9
  int32_t nowKind; // w8
  __int64 size; // x27
  DataManager_o *v20; // x22
  UserServantEntity_array *List; // x0
  Il2CppObject *MasterData_object; // x24
  UserServantStorageMaster_o *v23; // x23
  System_Collections_Generic_IEnumerable_T__o *CombineMaterialList; // x25
  System_Collections_Generic_List_object__o *v25; // x24
  UserServantEntity_array *v26; // x23
  unsigned __int64 i; // x24
  int32_t Item; // w25
  CombineExpUpInfo_o *ClassId; // x0
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x4
  int32_t nowType; // w8
  int32_t v33; // w25
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x6
  int32_t v36; // w3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned int v38; // w10
  __int64 v39; // x9
  char *v40; // x11
  struct CombineExpUpClassInfo_array *expUpClassInfoList; // x9
  int32_t v42; // w1
  int32_t v43; // w5
  struct CombineExpUpClassInfo_array *v44; // x8
  struct CombineExpUpClassInfo_array *v45; // x8
  System_Int32_array *v46; // x2
  System_Int32_array *v47; // x3
  int32_t v48; // w4

  if ( (byte_4C4716C & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantEntity___ctor___78072824);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&SvtClassAttri_TypeInfo);
    byte_4C4716C = 1;
  }
  this->fields.nowKind = kind;
  this->fields.nowType = type;
  if ( afterAction )
  {
    this->fields.changeAction = afterAction;
    sub_1C36FFC(
      (CGThumbnailListItem_o *)&this->fields.changeAction,
      (int32_t)afterAction,
      type,
      (const MethodInfo *)isFirst);
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
  v12 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_int_____ctor__);
  v13 = SvtClassAttri_TypeInfo;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v13 = SvtClassAttri_TypeInfo;
  }
  v14 = sub_1C37100(int___TypeInfo, v13->static_fields->MAX_EXP_UP_RARITY);
  Instance = (DataManager_o *)sub_1C37100(int___TypeInfo, SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY);
  SortClassOrder = this->fields.SortClassOrder;
  if ( !SortClassOrder )
    goto LABEL_74;
  nowKind = this->fields.nowKind;
  size = (unsigned int)SortClassOrder->fields._size;
  v20 = Instance;
  switch ( nowKind )
  {
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_74;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_74;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !MasterData_object )
        goto LABEL_74;
      v23 = (UserServantStorageMaster_o *)Instance;
      CombineMaterialList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                             (UserServantMaster_o *)MasterData_object,
                                                                             0);
      v25 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor_58337560(
        v25,
        CombineMaterialList,
        (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___78072824);
      if ( !v23 )
        goto LABEL_74;
      Instance = (DataManager_o *)UserServantStorageMaster__getList(v23, 0);
      if ( !v25 )
        goto LABEL_74;
      System_Collections_Generic_List_object___AddRange(
        v25,
        (System_Collections_Generic_IEnumerable_T__o *)Instance,
        (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      List = (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v25,
                                          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      goto LABEL_25;
    case 1:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_74;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !Instance )
        goto LABEL_74;
      List = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0);
      goto LABEL_25;
    case 0:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_74;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_74;
      List = UserServantMaster__getCombineMaterialList((UserServantMaster_o *)Instance, 0);
LABEL_25:
      v26 = List;
      goto LABEL_27;
  }
  v26 = 0;
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
               (const MethodInfo_378853C *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Item__);
      if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
      ClassId = (CombineExpUpInfo_o *)SvtClassAttri__getClassId(Item, 0);
      nowType = this->fields.nowType;
      v33 = (int)ClassId;
      if ( nowType == 1 )
      {
        v36 = 1;
      }
      else
      {
        if ( !nowType )
        {
          Instance = (DataManager_o *)CombineExpUpInfo__GetTargetClassMaterialInfo(ClassId, v26, (int32_t)ClassId, v30);
          if ( !Instance )
            return (char)Instance;
          goto LABEL_39;
        }
        v36 = 2;
      }
      Instance = (DataManager_o *)CombineExpUpInfo__GetTargetClassStatusUpInfo(ClassId, v26, (int32_t)ClassId, v36, v31);
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
        v38 = 0;
        while ( 1 )
        {
          v39 = *((_QWORD *)&Instance->fields._DispLog + (int)v38);
          if ( !v39 || !v14 )
            break;
          if ( v38 >= *(_DWORD *)(v14 + 24) )
            goto LABEL_75;
          *(_DWORD *)(v14 + 4LL * (int)v38 + 32) = *(_DWORD *)(v39 + 16);
          if ( !v20 )
            break;
          if ( v38 >= LODWORD(v20->fields.m_CancellationTokenSource) )
            goto LABEL_75;
          v40 = (char *)v20 + 4 * (int)v38++;
          *((_DWORD *)v40 + 8) = *(_DWORD *)(v39 + 20);
          if ( (_DWORD)m_CancellationTokenSource == v38 )
            goto LABEL_48;
        }
LABEL_74:
        sub_1C372B4(Instance);
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
          if ( v33 == 1001 )
          {
            if ( !Instance )
              goto LABEL_74;
            v42 = 1001;
            v43 = 5;
            goto LABEL_63;
          }
          if ( !Instance )
            goto LABEL_74;
          if ( (_DWORD)m_CancellationTokenSource == 5 )
            v48 = 2;
          else
            v48 = 1;
          v43 = 3;
          v42 = v33;
          v46 = (System_Int32_array *)v14;
          v47 = (System_Int32_array *)v20;
        }
        else
        {
          v45 = this->fields.expUpClassInfoList;
          if ( !v45 )
            goto LABEL_74;
          if ( i >= LODWORD(v45->max_length) )
LABEL_75:
            sub_1C372BC(Instance);
          Instance = (DataManager_o *)v45->m_Items[i];
          if ( !Instance )
            goto LABEL_74;
          v43 = 5;
          v42 = v33;
LABEL_63:
          v46 = (System_Int32_array *)v14;
          v47 = (System_Int32_array *)v20;
          v48 = 0;
        }
        CombineExpUpClassInfo__Set((CombineExpUpClassInfo_o *)Instance, v42, v46, v47, v48, v43, v35);
        continue;
      }
      v44 = this->fields.expUpClassInfoList;
      if ( !v44 )
        goto LABEL_74;
      if ( i >= LODWORD(v44->max_length) )
        goto LABEL_75;
      Instance = (DataManager_o *)v44->m_Items[i];
      if ( !Instance )
        goto LABEL_74;
      CombineExpUpClassInfo__Set_48790864((CombineExpUpClassInfo_o *)Instance, (System_Int32_array *)v20, v34);
    }
  }
  CombineExpUpInfo__SetBtnState(this, this->fields.nowKind, this->fields.nowType, v16);
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
  System_Int32_array *TargetClassMaterialSvtIdList; // x0
  System_Int32_array *v10; // x22
  __int64 v11; // x25
  unsigned __int64 v12; // x26
  unsigned int *v13; // x27
  signed __int64 v14; // x10
  Il2CppObject *v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  il2cpp_array_size_t max_length; // x23
  bool v20; // zf
  unsigned __int64 v21; // x10
  __int64 v22; // x11
  unsigned __int64 v23; // x8
  __int64 v24; // x14
  int32_t v25; // w15
  il2cpp_array_size_t v26; // x8
  int v27; // w23
  int v28; // w25
  Il2CppClass **v29; // x8
  UserServantEntity_o *v30; // x22
  SvtClassAttri_c *v31; // x0
  int32_t MAX_EXP_UP_RARITY; // w26
  __int64 v33; // x8
  __int64 v34; // x0

  if ( (byte_4C4716D & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&CombineExpUpInfo_MaterialData___TypeInfo);
    sub_1C37058(&CombineExpUpInfo_MaterialData_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&SvtClassAttri_TypeInfo);
    byte_4C4716D = 1;
  }
  v6 = SvtClassAttri_TypeInfo;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v6 = SvtClassAttri_TypeInfo;
  }
  v7 = (unsigned int *)sub_1C37100(CombineExpUpInfo_MaterialData___TypeInfo, v6->static_fields->MAX_EXP_UP_RARITY);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_47;
  TargetClassMaterialSvtIdList = ServantMaster__GetTargetClassMaterialSvtIdList((ServantMaster_o *)Instance, classId, 0);
  if ( !TargetClassMaterialSvtIdList )
    return 0;
  v10 = TargetClassMaterialSvtIdList;
  if ( !TargetClassMaterialSvtIdList->max_length )
    return 0;
  v11 = 0;
  v12 = 0;
  v13 = v7 + 8;
  while ( 1 )
  {
    Instance = (__int64)SvtClassAttri_TypeInfo;
    if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
      Instance = (__int64)SvtClassAttri_TypeInfo;
    }
    v14 = **(int **)(Instance + 184);
    if ( (__int64)v12 >= v14 )
      break;
    v15 = (Il2CppObject *)sub_1C372A4(CombineExpUpInfo_MaterialData_TypeInfo);
    System_Object___ctor(v15, 0);
    if ( !v7 )
      goto LABEL_47;
    if ( v15 )
    {
      Instance = sub_1C37194(v15, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
      if ( !Instance )
      {
        v34 = sub_1C372D8(0);
        sub_1C37180(v34, 0);
      }
    }
    if ( v12 >= v7[6] )
      goto LABEL_46;
    *(_QWORD *)&v13[2 * v12] = v15;
    sub_1C36FFC((CGThumbnailListItem_o *)&v13[v11], (int32_t)v15, v16, v17);
    ++v12;
    v11 += 2;
  }
  max_length = v10->max_length;
  if ( !*(_DWORD *)(Instance + 224) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    LODWORD(v14) = SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY;
  }
  if ( (int)max_length >= 1 )
  {
    if ( v7 )
    {
      v20 = (_DWORD)v14 == (_DWORD)max_length;
      v21 = v7[6];
      v22 = !v20;
      v23 = 0;
      while ( v22 + v23 < v21 && v23 < LODWORD(v10->max_length) )
      {
        v24 = *(_QWORD *)&v7[2 * (unsigned int)v22 + 8 + 2 * v23];
        if ( !v24 )
          goto LABEL_47;
        v25 = v10->m_Items[v23++];
        *(_DWORD *)(v24 + 16) = v25;
        if ( (unsigned int)max_length == v23 )
          goto LABEL_32;
      }
LABEL_46:
      sub_1C372BC(Instance);
    }
LABEL_47:
    sub_1C372B4(Instance);
  }
LABEL_32:
  if ( !svtList )
    goto LABEL_47;
  v26 = svtList->max_length;
  v27 = v26 - 1;
  if ( (int)v26 >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      v29 = &svtList->obj.klass + v28;
      v30 = (UserServantEntity_o *)v29[4];
      if ( !v30 )
        goto LABEL_47;
      Instance = UserServantEntity__IsCombineMaterial((UserServantEntity_o *)v29[4], 0);
      if ( (Instance & 1) != 0 )
      {
        Instance = UserServantEntity__getSvtClassId(v30, 0, 0, 0);
        if ( (_DWORD)Instance == classId )
        {
          v31 = SvtClassAttri_TypeInfo;
          if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
            v31 = SvtClassAttri_TypeInfo;
          }
          MAX_EXP_UP_RARITY = v31->static_fields->MAX_EXP_UP_RARITY;
          Instance = UserServantEntity__getRarity(v30, 0);
          if ( !v7 )
            goto LABEL_47;
          if ( MAX_EXP_UP_RARITY - (int)Instance >= v7[6] )
            goto LABEL_46;
          v33 = *(_QWORD *)&v7[2 * (MAX_EXP_UP_RARITY - (int)Instance) + 8];
          if ( !v33 )
            goto LABEL_47;
          ++*(_DWORD *)(v33 + 20);
        }
      }
      if ( v27 == v28 )
        return (CombineExpUpInfo_MaterialData_array *)v7;
      if ( (unsigned int)++v28 >= LODWORD(svtList->max_length) )
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
  System_Int32_array *TargetClassStatusUpSvtIdList; // x0
  SvtClassAttri_c *v10; // x8
  System_Int32_array *v11; // x24
  il2cpp_array_size_t max_length; // x8
  Il2CppObject *v13; // x23
  int v14; // w22
  unsigned __int64 v15; // x27
  int32_t *m_Items; // x29
  int32_t v17; // w26
  ServantLeaderInfo_o *v18; // x25
  char *v19; // x9
  CombineExpUpInfo_MaterialData_array *v20; // x24
  unsigned int v21; // w27
  Il2CppObject *v22; // x25
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x29
  Il2CppClass **v26; // x26
  CGThumbnailListItem_o *v27; // x26
  il2cpp_array_size_t v28; // x8
  int v29; // w25
  int v30; // w26
  Il2CppClass **v31; // x8
  UserServantEntity_o *v32; // x23
  CombineExpUpInfo_MaterialData_o *v33; // x8
  __int64 v35; // x0

  if ( (byte_4C4716E & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&CombineExpUpInfo_MaterialData___TypeInfo);
    sub_1C37058(&CombineExpUpInfo_MaterialData_TypeInfo);
    sub_1C37058(&ServantLeaderInfo_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&SvtClassAttri_TypeInfo);
    byte_4C4716E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_59;
  TargetClassStatusUpSvtIdList = ServantMaster__GetTargetClassStatusUpSvtIdList((ServantMaster_o *)Instance, classId, 0);
  v10 = SvtClassAttri_TypeInfo;
  v11 = TargetClassStatusUpSvtIdList;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v10 = SvtClassAttri_TypeInfo;
  }
  Instance = (Il2CppObject *)sub_1C37100(int___TypeInfo, v10->static_fields->MAX_EXP_UP_RARITY);
  if ( !v11 )
    goto LABEL_59;
  max_length = v11->max_length;
  v13 = Instance;
  if ( (int)max_length < 1 )
    return 0;
  v14 = 0;
  v15 = 0;
  m_Items = v11->m_Items;
  do
  {
    if ( v15 >= (unsigned int)max_length )
LABEL_56:
      sub_1C372BC(Instance);
    v17 = m_Items[v15];
    v18 = (ServantLeaderInfo_o *)sub_1C372A4(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_43476756(v18, v17, 0, 1, 0);
    if ( type == 2 )
    {
      if ( !v18 )
        goto LABEL_59;
      if ( !v18->fields.hp && !v18->fields.adjustHp )
        goto LABEL_24;
    }
    else
    {
      if ( type != 1 )
        goto LABEL_24;
      if ( !v18 )
        goto LABEL_59;
      if ( !v18->fields.atk && !v18->fields.adjustAtk )
        goto LABEL_24;
    }
    if ( v15 >= LODWORD(v11->max_length) )
      goto LABEL_56;
    if ( !v13 )
      goto LABEL_59;
    if ( (unsigned int)v14 >= LODWORD(v13[1].monitor) )
      goto LABEL_56;
    v19 = (char *)v13 + 4 * v14++;
    *((_DWORD *)v19 + 8) = m_Items[v15];
LABEL_24:
    LODWORD(max_length) = v11->max_length;
    ++v15;
  }
  while ( (__int64)v15 < (int)max_length );
  if ( !v14 )
    return 0;
  Instance = (Il2CppObject *)sub_1C37100(CombineExpUpInfo_MaterialData___TypeInfo, (unsigned int)v14);
  v20 = (CombineExpUpInfo_MaterialData_array *)Instance;
  if ( v14 >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      v22 = (Il2CppObject *)sub_1C372A4(CombineExpUpInfo_MaterialData_TypeInfo);
      System_Object___ctor(v22, 0);
      if ( !v20 )
        break;
      if ( v22 )
      {
        Instance = (Il2CppObject *)sub_1C37194(v22, v20->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v35 = sub_1C372D8(0);
          sub_1C37180(v35, 0);
        }
      }
      if ( v21 >= LODWORD(v20->max_length) )
        goto LABEL_56;
      v25 = (int)v21;
      v26 = &v20->obj.klass + (int)v21;
      v26[4] = (Il2CppClass *)v22;
      v27 = (CGThumbnailListItem_o *)(v26 + 4);
      sub_1C36FFC(v27, (int32_t)v22, v23, v24);
      if ( v21 >= LODWORD(v20->max_length) )
        goto LABEL_56;
      if ( !v13 )
        break;
      if ( v21 >= LODWORD(v13[1].monitor) )
        goto LABEL_56;
      if ( !v27->klass )
        break;
      ++v21;
      LODWORD(v27->klass->_1.name) = *((_DWORD *)&v13[2].klass + v25);
      if ( v14 == v21 )
        goto LABEL_37;
    }
LABEL_59:
    sub_1C372B4(Instance);
  }
LABEL_37:
  if ( !svtList )
    goto LABEL_59;
  v28 = svtList->max_length;
  v29 = v28 - 1;
  if ( (int)v28 >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      v31 = &svtList->obj.klass + v30;
      v32 = (UserServantEntity_o *)v31[4];
      if ( !v32 )
        goto LABEL_59;
      Instance = (Il2CppObject *)UserServantEntity__IsStatusUp((UserServantEntity_o *)v31[4], 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (Il2CppObject *)UserServantEntity__getSvtClassId(v32, 0, 0, 0);
        if ( (_DWORD)Instance == classId )
        {
          if ( type == 2 )
          {
            if ( v32->fields.hp || v32->fields.adjustHp )
            {
LABEL_50:
              Instance = (Il2CppObject *)UserServantEntity__getRarity(v32, 0);
              if ( !v20 )
                goto LABEL_59;
              if ( (unsigned int)(v14 - (_DWORD)Instance) >= LODWORD(v20->max_length) )
                goto LABEL_56;
              v33 = v20->m_Items[v14 - (int)Instance];
              if ( !v33 )
                goto LABEL_59;
              ++v33->fields.num;
            }
          }
          else if ( type == 1 && (v32->fields.atk || v32->fields.adjustAtk) )
          {
            goto LABEL_50;
          }
        }
      }
      if ( v29 == v30 )
        return v20;
      if ( (unsigned int)++v30 >= LODWORD(svtList->max_length) )
        goto LABEL_56;
    }
  }
  return v20;
}


void CombineExpUpInfo__OnClickCenter(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x5

  if ( (byte_4C47171 & 1) == 0 )
  {
    sub_1C37058(&Method_CombineExpUpInfo_OnClickCenter__);
    byte_4C47171 = 1;
  }
  if ( this->fields.nowType != 1 )
  {
    v3 = Method_CombineExpUpInfo_OnClickCenter__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickCenter__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_CombineExpUpInfo_OnClickCenter__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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

  if ( (byte_4C47173 & 1) == 0 )
  {
    sub_1C37058(&Method_CombineExpUpInfo_OnClickChangeButton__);
    byte_4C47173 = 1;
  }
  v3 = Method_CombineExpUpInfo_OnClickChangeButton__;
  if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickChangeButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_CombineExpUpInfo_OnClickChangeButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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

  if ( (byte_4C47170 & 1) == 0 )
  {
    sub_1C37058(&Method_CombineExpUpInfo_OnClickLeft__);
    byte_4C47170 = 1;
  }
  if ( this->fields.nowType )
  {
    v3 = Method_CombineExpUpInfo_OnClickLeft__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickLeft__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_CombineExpUpInfo_OnClickLeft__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 0, 1, 0, v5);
  }
}


void CombineExpUpInfo__OnClickRight(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x5

  if ( (byte_4C47172 & 1) == 0 )
  {
    sub_1C37058(&Method_CombineExpUpInfo_OnClickRight__);
    byte_4C47172 = 1;
  }
  if ( this->fields.nowType != 2 )
  {
    v3 = Method_CombineExpUpInfo_OnClickRight__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickRight__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_CombineExpUpInfo_OnClickRight__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 2, 1, 0, v5);
  }
}


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
  if ( (byte_4C4716F & 1) == 0 )
  {
    sub_1C37058(&CombineExpUpInfo_TypeInfo);
    sub_1C37058(&StringLiteral_22365/*"off"*/);
    sub_1C37058(&StringLiteral_17437/*"btn_bg_02_on"*/);
    sub_1C37058(&StringLiteral_22392/*"on"*/);
    sub_1C37058(&StringLiteral_17659/*"button_total"*/);
    sub_1C37058(&StringLiteral_17658/*"button_storage"*/);
    sub_1C37058(&StringLiteral_17653/*"button_possess"*/);
    this = (CombineExpUpInfo_o *)sub_1C37058(&StringLiteral_17436/*"btn_bg_02_off"*/);
    byte_4C4716F = 1;
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
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17437/*"btn_bg_02_on"*/, 0);
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
      v17 = (System_String_o *)StringLiteral_22392/*"on"*/;
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v18 = v6->fields.btnSpriteList;
      if ( !v18 )
        goto LABEL_47;
      if ( v7 >= LODWORD(v18->max_length) )
LABEL_48:
        sub_1C372BC(this);
      this = (CombineExpUpInfo_o *)v18->m_Items[v7];
      if ( !this )
        goto LABEL_47;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17436/*"btn_bg_02_off"*/, 0);
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
      v17 = (System_String_o *)StringLiteral_22365/*"off"*/;
    }
    this = (CombineExpUpInfo_o *)System_String__Concat_63561656(v16, v17, 0);
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
        v23 = &StringLiteral_17659/*"button_total"*/;
        goto LABEL_45;
      }
LABEL_47:
      sub_1C372B4(this);
    case 1:
      this = (CombineExpUpInfo_o *)v6->fields.btnChangeSprite;
      if ( this )
      {
        v23 = &StringLiteral_17658/*"button_storage"*/;
        goto LABEL_45;
      }
      goto LABEL_47;
    case 0:
      this = (CombineExpUpInfo_o *)v6->fields.btnChangeSprite;
      if ( this )
      {
        v23 = &StringLiteral_17653/*"button_possess"*/;
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