void CombineExpUpInfo___cctor(const MethodInfo *method)
{
  if ( (byte_4C2B441 & 1) == 0 )
  {
    sub_1C2D490(&CombineExpUpInfo_TypeInfo);
    byte_4C2B441 = 1;
  }
  *CombineExpUpInfo_TypeInfo->static_fields = (struct CombineExpUpInfo_StaticFields)xmmword_C08C90;
}


void CombineExpUpInfo___ctor(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  __int64 v7; // x20
  int32_t v8; // w1
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_T__o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x9
  _QWORD *v19; // x8
  __int64 size; // x10
  __int64 v21; // x10
  __int64 v22; // x10
  __int64 v23; // x10
  __int64 v24; // x10
  __int64 v25; // x10
  __int64 v26; // x10
  __int64 v27; // x10

  if ( (byte_4C2B440 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_17486/*"btn_hp_"*/);
    sub_1C2D490(&StringLiteral_17425/*"btn_atk_"*/);
    sub_1C2D490(&StringLiteral_17479/*"btn_experience_"*/);
    byte_4C2B440 = 1;
  }
  v3 = sub_1C2D538(string___TypeInfo, 3);
  if ( !v3 )
    goto LABEL_34;
  v7 = v3;
  if ( !*(_DWORD *)(v3 + 24)
    || (v8 = StringLiteral_17479/*"btn_experience_"*/,
        *(_QWORD *)(v3 + 32) = StringLiteral_17479/*"btn_experience_"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), v8, v5, v6),
        *(_DWORD *)(v7 + 24) <= 1u)
    || (v10 = StringLiteral_17425/*"btn_atk_"*/,
        *(_QWORD *)(v7 + 40) = StringLiteral_17425/*"btn_atk_"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v7 + 40), v10, v5, v9),
        *(_DWORD *)(v7 + 24) <= 2u) )
  {
    sub_1C2D6F4(v3, v4, v5);
  }
  v12 = StringLiteral_17486/*"btn_hp_"*/;
  *(_QWORD *)(v7 + 48) = StringLiteral_17486/*"btn_hp_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 48), v12, v5, v11);
  this->fields.btnSpriteNameList = (struct System_String_array *)v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.btnSpriteNameList, v7, v13, v14);
  v15 = (System_Collections_Generic_List_T__o *)sub_1C2D6DC(System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v15,
    (const MethodInfo_376EB38 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__);
  if ( !v15 )
    goto LABEL_34;
  items = v15->fields._items;
  v19 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
  ++v15->fields._version;
  if ( !items )
    goto LABEL_34;
  size = v15->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      1,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    items = v15->fields._items;
    v19 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v15->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 1;
    ++v15->fields._version;
  }
  v21 = v15->fields._size;
  if ( (unsigned int)v21 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      2,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    items = v15->fields._items;
    v19 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v15->fields._size = v21 + 1;
    *((_DWORD *)items->m_Items + v21) = 2;
    ++v15->fields._version;
  }
  v22 = v15->fields._size;
  if ( (unsigned int)v22 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      3,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    items = v15->fields._items;
    v19 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v15->fields._size = v22 + 1;
    *((_DWORD *)items->m_Items + v22) = 3;
    ++v15->fields._version;
  }
  v23 = v15->fields._size;
  if ( (unsigned int)v23 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      4,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    items = v15->fields._items;
    v19 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v15->fields._size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 4;
    ++v15->fields._version;
  }
  v24 = v15->fields._size;
  if ( (unsigned int)v24 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      5,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    items = v15->fields._items;
    v19 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v15->fields._size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 5;
    ++v15->fields._version;
  }
  v25 = v15->fields._size;
  if ( (unsigned int)v25 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      6,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    items = v15->fields._items;
    v19 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v15->fields._size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 6;
    ++v15->fields._version;
  }
  v26 = v15->fields._size;
  if ( (unsigned int)v26 < LODWORD(items->max_length) )
  {
    v15->fields._size = v26 + 1;
    *((_DWORD *)items->m_Items + v26) = 7;
    ++v15->fields._version;
    goto LABEL_30;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v15,
    7,
    *(const MethodInfo_376F38C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  items = v15->fields._items;
  v19 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
  ++v15->fields._version;
  if ( !items )
LABEL_34:
    sub_1C2D6EC(v3, v4);
LABEL_30:
  v27 = v15->fields._size;
  if ( (unsigned int)v27 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      1001,
      *(const MethodInfo_376F38C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v15->fields._size = v27 + 1;
    *((_DWORD *)items->m_Items + v27) = 1001;
  }
  this->fields.SortClassOrder = (struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *)v15;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.SortClassOrder, (int32_t)v15, v16, v17);
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
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *SortClassOrder; // x9
  int32_t nowKind; // w8
  __int64 size; // x27
  DataManager_o *v21; // x22
  UserServantEntity_array *List; // x0
  Il2CppObject *MasterData_object; // x24
  UserServantStorageMaster_o *v24; // x23
  System_Collections_Generic_IEnumerable_T__o *CombineMaterialList; // x25
  System_Collections_Generic_List_object__o *v26; // x24
  UserServantEntity_array *v27; // x23
  unsigned __int64 i; // x24
  int32_t Item; // w25
  CombineExpUpInfo_o *ClassId; // x0
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x4
  int32_t nowType; // w8
  int32_t v34; // w25
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x6
  int32_t v37; // w3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned int v39; // w10
  __int64 v40; // x9
  char *v41; // x11
  struct CombineExpUpClassInfo_array *expUpClassInfoList; // x9
  int32_t v43; // w1
  int32_t v44; // w5
  struct CombineExpUpClassInfo_array *v45; // x8
  struct CombineExpUpClassInfo_array *v46; // x8
  System_Int32_array *v47; // x2
  System_Int32_array *v48; // x3
  int32_t v49; // w4

  if ( (byte_4C2B438 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor___77961784);
    sub_1C2D490(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_int____TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&SvtClassAttri_TypeInfo);
    byte_4C2B438 = 1;
  }
  this->fields.nowKind = kind;
  this->fields.nowType = type;
  if ( afterAction )
  {
    this->fields.changeAction = afterAction;
    sub_1C2D434(
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
  v12 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_int_____ctor__);
  v13 = SvtClassAttri_TypeInfo;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v13 = SvtClassAttri_TypeInfo;
  }
  v14 = sub_1C2D538(int___TypeInfo, v13->static_fields->MAX_EXP_UP_RARITY);
  Instance = (DataManager_o *)sub_1C2D538(int___TypeInfo, SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY);
  SortClassOrder = this->fields.SortClassOrder;
  if ( !SortClassOrder )
    goto LABEL_74;
  nowKind = this->fields.nowKind;
  size = (unsigned int)SortClassOrder->fields._size;
  v21 = Instance;
  switch ( nowKind )
  {
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_74;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_74;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !MasterData_object )
        goto LABEL_74;
      v24 = (UserServantStorageMaster_o *)Instance;
      CombineMaterialList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                             (UserServantMaster_o *)MasterData_object,
                                                                             0);
      v26 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor_58233976(
        v26,
        CombineMaterialList,
        (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___77961784);
      if ( !v24 )
        goto LABEL_74;
      Instance = (DataManager_o *)UserServantStorageMaster__getList(v24, 0);
      if ( !v26 )
        goto LABEL_74;
      System_Collections_Generic_List_object___AddRange(
        v26,
        (System_Collections_Generic_IEnumerable_T__o *)Instance,
        (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      List = (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v26,
                                          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      goto LABEL_25;
    case 1:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_74;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !Instance )
        goto LABEL_74;
      List = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0);
      goto LABEL_25;
    case 0:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_74;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_74;
      List = UserServantMaster__getCombineMaterialList((UserServantMaster_o *)Instance, 0);
LABEL_25:
      v27 = List;
      goto LABEL_27;
  }
  v27 = 0;
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
               (const MethodInfo_376F09C *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Item__);
      if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
      ClassId = (CombineExpUpInfo_o *)SvtClassAttri__getClassId(Item, 0);
      nowType = this->fields.nowType;
      v34 = (int)ClassId;
      if ( nowType == 1 )
      {
        v37 = 1;
      }
      else
      {
        if ( !nowType )
        {
          Instance = (DataManager_o *)CombineExpUpInfo__GetTargetClassMaterialInfo(ClassId, v27, (int32_t)ClassId, v31);
          if ( !Instance )
            return (char)Instance;
          goto LABEL_39;
        }
        v37 = 2;
      }
      Instance = (DataManager_o *)CombineExpUpInfo__GetTargetClassStatusUpInfo(ClassId, v27, (int32_t)ClassId, v37, v32);
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
        v39 = 0;
        while ( 1 )
        {
          v40 = *((_QWORD *)&Instance->fields._DispLog + (int)v39);
          if ( !v40 || !v14 )
            break;
          if ( v39 >= *(_DWORD *)(v14 + 24) )
            goto LABEL_75;
          *(_DWORD *)(v14 + 4LL * (int)v39 + 32) = *(_DWORD *)(v40 + 16);
          if ( !v21 )
            break;
          if ( v39 >= LODWORD(v21->fields.m_CancellationTokenSource) )
            goto LABEL_75;
          v41 = (char *)v21 + 4 * (int)v39++;
          *((_DWORD *)v41 + 8) = *(_DWORD *)(v40 + 20);
          if ( (_DWORD)m_CancellationTokenSource == v39 )
            goto LABEL_48;
        }
LABEL_74:
        sub_1C2D6EC(Instance, v16);
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
          if ( v34 == 1001 )
          {
            if ( !Instance )
              goto LABEL_74;
            v43 = 1001;
            v44 = 5;
            goto LABEL_63;
          }
          if ( !Instance )
            goto LABEL_74;
          if ( (_DWORD)m_CancellationTokenSource == 5 )
            v49 = 2;
          else
            v49 = 1;
          v44 = 3;
          v43 = v34;
          v47 = (System_Int32_array *)v14;
          v48 = (System_Int32_array *)v21;
        }
        else
        {
          v46 = this->fields.expUpClassInfoList;
          if ( !v46 )
            goto LABEL_74;
          if ( i >= LODWORD(v46->max_length) )
LABEL_75:
            sub_1C2D6F4(Instance, v16, v35);
          Instance = (DataManager_o *)v46->m_Items[i];
          if ( !Instance )
            goto LABEL_74;
          v44 = 5;
          v43 = v34;
LABEL_63:
          v47 = (System_Int32_array *)v14;
          v48 = (System_Int32_array *)v21;
          v49 = 0;
        }
        CombineExpUpClassInfo__Set((CombineExpUpClassInfo_o *)Instance, v43, v47, v48, v49, v44, v36);
        continue;
      }
      v45 = this->fields.expUpClassInfoList;
      if ( !v45 )
        goto LABEL_74;
      if ( i >= LODWORD(v45->max_length) )
        goto LABEL_75;
      Instance = (DataManager_o *)v45->m_Items[i];
      if ( !Instance )
        goto LABEL_74;
      CombineExpUpClassInfo__Set_48521260((CombineExpUpClassInfo_o *)Instance, (System_Int32_array *)v21, v35);
    }
  }
  CombineExpUpInfo__SetBtnState(this, this->fields.nowKind, this->fields.nowType, v17);
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
  __int64 v11; // x2
  System_Int32_array *v12; // x22
  __int64 v13; // x25
  unsigned __int64 v14; // x26
  unsigned int *v15; // x27
  signed __int64 v16; // x10
  CombineExpUpInfo_MaterialData_o *v17; // x23
  const MethodInfo *v18; // x3
  il2cpp_array_size_t max_length; // x23
  bool v21; // zf
  unsigned __int64 v22; // x10
  __int64 v23; // x11
  unsigned __int64 v24; // x8
  __int64 v25; // x14
  int32_t v26; // w15
  il2cpp_array_size_t v27; // x8
  int v28; // w23
  int v29; // w25
  Il2CppClass **v30; // x8
  UserServantEntity_o *v31; // x22
  SvtClassAttri_c *v32; // x0
  int32_t MAX_EXP_UP_RARITY; // w26
  __int64 v34; // x8
  __int64 v35; // x0

  if ( (byte_4C2B439 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&CombineExpUpInfo_MaterialData___TypeInfo);
    sub_1C2D490(&CombineExpUpInfo_MaterialData_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&SvtClassAttri_TypeInfo);
    byte_4C2B439 = 1;
  }
  v6 = SvtClassAttri_TypeInfo;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v6 = SvtClassAttri_TypeInfo;
  }
  v7 = (unsigned int *)sub_1C2D538(CombineExpUpInfo_MaterialData___TypeInfo, v6->static_fields->MAX_EXP_UP_RARITY);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_47;
  TargetClassMaterialSvtIdList = ServantMaster__GetTargetClassMaterialSvtIdList((ServantMaster_o *)Instance, classId, 0);
  if ( !TargetClassMaterialSvtIdList )
    return 0;
  v12 = TargetClassMaterialSvtIdList;
  if ( !TargetClassMaterialSvtIdList->max_length )
    return 0;
  v13 = 0;
  v14 = 0;
  v15 = v7 + 8;
  while ( 1 )
  {
    Instance = (__int64)SvtClassAttri_TypeInfo;
    if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
      Instance = (__int64)SvtClassAttri_TypeInfo;
    }
    v16 = **(int **)(Instance + 184);
    if ( (__int64)v14 >= v16 )
      break;
    v17 = (CombineExpUpInfo_MaterialData_o *)sub_1C2D6DC(CombineExpUpInfo_MaterialData_TypeInfo);
    CombineExpUpInfo_MaterialData___ctor(v17, 0);
    if ( !v7 )
      goto LABEL_47;
    if ( v17 )
    {
      Instance = sub_1C2D5CC(v17, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
      if ( !Instance )
      {
        v35 = sub_1C2D710(0);
        sub_1C2D5B8(v35, 0);
      }
    }
    if ( v14 >= v7[6] )
      goto LABEL_46;
    *(_QWORD *)&v15[2 * v14] = v17;
    sub_1C2D434((CGThumbnailListItem_o *)&v15[v13], (int32_t)v17, v11, v18);
    ++v14;
    v13 += 2;
  }
  max_length = v12->max_length;
  if ( !*(_DWORD *)(Instance + 224) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    LODWORD(v16) = SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY;
  }
  if ( (int)max_length >= 1 )
  {
    if ( v7 )
    {
      v21 = (_DWORD)v16 == (_DWORD)max_length;
      v22 = v7[6];
      v23 = !v21;
      v24 = 0;
      while ( v23 + v24 < v22 && v24 < LODWORD(v12->max_length) )
      {
        v25 = *(_QWORD *)&v7[2 * (unsigned int)v23 + 8 + 2 * v24];
        if ( !v25 )
          goto LABEL_47;
        v26 = v12->m_Items[v24++];
        *(_DWORD *)(v25 + 16) = v26;
        if ( (unsigned int)max_length == v24 )
          goto LABEL_32;
      }
LABEL_46:
      sub_1C2D6F4(Instance, v9, v11);
    }
LABEL_47:
    sub_1C2D6EC(Instance, v9);
  }
LABEL_32:
  if ( !svtList )
    goto LABEL_47;
  v27 = svtList->max_length;
  v28 = v27 - 1;
  if ( (int)v27 >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      v30 = &svtList->obj.klass + v29;
      v31 = (UserServantEntity_o *)v30[4];
      if ( !v31 )
        goto LABEL_47;
      Instance = UserServantEntity__IsCombineMaterial((UserServantEntity_o *)v30[4], 0);
      if ( (Instance & 1) != 0 )
      {
        Instance = UserServantEntity__getSvtClassId(v31, 0, 0, 0);
        if ( (_DWORD)Instance == classId )
        {
          v32 = SvtClassAttri_TypeInfo;
          if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
            v32 = SvtClassAttri_TypeInfo;
          }
          MAX_EXP_UP_RARITY = v32->static_fields->MAX_EXP_UP_RARITY;
          Instance = UserServantEntity__getRarity(v31, 0);
          if ( !v7 )
            goto LABEL_47;
          if ( MAX_EXP_UP_RARITY - (int)Instance >= v7[6] )
            goto LABEL_46;
          v34 = *(_QWORD *)&v7[2 * (MAX_EXP_UP_RARITY - (int)Instance) + 8];
          if ( !v34 )
            goto LABEL_47;
          ++*(_DWORD *)(v34 + 20);
        }
      }
      if ( v28 == v29 )
        return (CombineExpUpInfo_MaterialData_array *)v7;
      if ( (unsigned int)++v29 >= LODWORD(svtList->max_length) )
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
  __int64 v13; // x2
  il2cpp_array_size_t max_length; // x8
  Il2CppObject *v15; // x23
  int v16; // w22
  unsigned __int64 v17; // x27
  int32_t *m_Items; // x29
  int32_t v19; // w26
  ServantLeaderInfo_o *v20; // x25
  char *v21; // x9
  CombineExpUpInfo_MaterialData_array *v22; // x24
  unsigned int v23; // w27
  CombineExpUpInfo_MaterialData_o *v24; // x25
  const MethodInfo *v25; // x3
  __int64 v26; // x29
  Il2CppClass **v27; // x26
  CGThumbnailListItem_o *v28; // x26
  il2cpp_array_size_t v29; // x8
  int v30; // w25
  int v31; // w26
  Il2CppClass **v32; // x8
  UserServantEntity_o *v33; // x23
  CombineExpUpInfo_MaterialData_o *v34; // x8
  __int64 v36; // x0

  if ( (byte_4C2B43A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&CombineExpUpInfo_MaterialData___TypeInfo);
    sub_1C2D490(&CombineExpUpInfo_MaterialData_TypeInfo);
    sub_1C2D490(&ServantLeaderInfo_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&SvtClassAttri_TypeInfo);
    byte_4C2B43A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  Instance = (Il2CppObject *)sub_1C2D538(int___TypeInfo, v11->static_fields->MAX_EXP_UP_RARITY);
  if ( !v12 )
    goto LABEL_59;
  max_length = v12->max_length;
  v15 = Instance;
  if ( (int)max_length < 1 )
    return 0;
  v16 = 0;
  v17 = 0;
  m_Items = v12->m_Items;
  do
  {
    if ( v17 >= (unsigned int)max_length )
LABEL_56:
      sub_1C2D6F4(Instance, v9, v13);
    v19 = m_Items[v17];
    v20 = (ServantLeaderInfo_o *)sub_1C2D6DC(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_43240808(v20, v19, 0, 1, 0);
    if ( type == 2 )
    {
      if ( !v20 )
        goto LABEL_59;
      if ( !v20->fields.hp && !v20->fields.adjustHp )
        goto LABEL_24;
    }
    else
    {
      if ( type != 1 )
        goto LABEL_24;
      if ( !v20 )
        goto LABEL_59;
      if ( !v20->fields.atk && !v20->fields.adjustAtk )
        goto LABEL_24;
    }
    if ( v17 >= LODWORD(v12->max_length) )
      goto LABEL_56;
    if ( !v15 )
      goto LABEL_59;
    if ( (unsigned int)v16 >= LODWORD(v15[1].monitor) )
      goto LABEL_56;
    v21 = (char *)v15 + 4 * v16++;
    *((_DWORD *)v21 + 8) = m_Items[v17];
LABEL_24:
    LODWORD(max_length) = v12->max_length;
    ++v17;
  }
  while ( (__int64)v17 < (int)max_length );
  if ( !v16 )
    return 0;
  Instance = (Il2CppObject *)sub_1C2D538(CombineExpUpInfo_MaterialData___TypeInfo, (unsigned int)v16);
  v22 = (CombineExpUpInfo_MaterialData_array *)Instance;
  if ( v16 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      v24 = (CombineExpUpInfo_MaterialData_o *)sub_1C2D6DC(CombineExpUpInfo_MaterialData_TypeInfo);
      CombineExpUpInfo_MaterialData___ctor(v24, 0);
      if ( !v22 )
        break;
      if ( v24 )
      {
        Instance = (Il2CppObject *)sub_1C2D5CC(v24, v22->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v36 = sub_1C2D710(0);
          sub_1C2D5B8(v36, 0);
        }
      }
      if ( v23 >= LODWORD(v22->max_length) )
        goto LABEL_56;
      v26 = (int)v23;
      v27 = &v22->obj.klass + (int)v23;
      v27[4] = (Il2CppClass *)v24;
      v28 = (CGThumbnailListItem_o *)(v27 + 4);
      sub_1C2D434(v28, (int32_t)v24, v13, v25);
      if ( v23 >= LODWORD(v22->max_length) )
        goto LABEL_56;
      if ( !v15 )
        break;
      if ( v23 >= LODWORD(v15[1].monitor) )
        goto LABEL_56;
      if ( !v28->klass )
        break;
      ++v23;
      LODWORD(v28->klass->_1.name) = *((_DWORD *)&v15[2].klass + v26);
      if ( v16 == v23 )
        goto LABEL_37;
    }
LABEL_59:
    sub_1C2D6EC(Instance, v9);
  }
LABEL_37:
  if ( !svtList )
    goto LABEL_59;
  v29 = svtList->max_length;
  v30 = v29 - 1;
  if ( (int)v29 >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      v32 = &svtList->obj.klass + v31;
      v33 = (UserServantEntity_o *)v32[4];
      if ( !v33 )
        goto LABEL_59;
      Instance = (Il2CppObject *)UserServantEntity__IsStatusUp((UserServantEntity_o *)v32[4], 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (Il2CppObject *)UserServantEntity__getSvtClassId(v33, 0, 0, 0);
        if ( (_DWORD)Instance == classId )
        {
          if ( type == 2 )
          {
            if ( v33->fields.hp || v33->fields.adjustHp )
            {
LABEL_50:
              Instance = (Il2CppObject *)UserServantEntity__getRarity(v33, 0);
              if ( !v22 )
                goto LABEL_59;
              if ( (unsigned int)(v16 - (_DWORD)Instance) >= LODWORD(v22->max_length) )
                goto LABEL_56;
              v34 = v22->m_Items[v16 - (int)Instance];
              if ( !v34 )
                goto LABEL_59;
              ++v34->fields.num;
            }
          }
          else if ( type == 1 && (v33->fields.atk || v33->fields.adjustAtk) )
          {
            goto LABEL_50;
          }
        }
      }
      if ( v30 == v31 )
        return v22;
      if ( (unsigned int)++v31 >= LODWORD(svtList->max_length) )
        goto LABEL_56;
    }
  }
  return v22;
}


void CombineExpUpInfo__OnClickCenter(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x5

  if ( (byte_4C2B43D & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineExpUpInfo_OnClickCenter__);
    byte_4C2B43D = 1;
  }
  if ( this->fields.nowType != 1 )
  {
    v3 = Method_CombineExpUpInfo_OnClickCenter__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickCenter__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_CombineExpUpInfo_OnClickCenter__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C2B43F & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineExpUpInfo_OnClickChangeButton__);
    byte_4C2B43F = 1;
  }
  v3 = Method_CombineExpUpInfo_OnClickChangeButton__;
  if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickChangeButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_CombineExpUpInfo_OnClickChangeButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C2B43C & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineExpUpInfo_OnClickLeft__);
    byte_4C2B43C = 1;
  }
  if ( this->fields.nowType )
  {
    v3 = Method_CombineExpUpInfo_OnClickLeft__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickLeft__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_CombineExpUpInfo_OnClickLeft__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 0, 1, 0, v5);
  }
}


void CombineExpUpInfo__OnClickRight(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x5

  if ( (byte_4C2B43E & 1) == 0 )
  {
    sub_1C2D490(&Method_CombineExpUpInfo_OnClickRight__);
    byte_4C2B43E = 1;
  }
  if ( this->fields.nowType != 2 )
  {
    v3 = Method_CombineExpUpInfo_OnClickRight__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickRight__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_CombineExpUpInfo_OnClickRight__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
  if ( (byte_4C2B43B & 1) == 0 )
  {
    sub_1C2D490(&CombineExpUpInfo_TypeInfo);
    sub_1C2D490(&StringLiteral_22345/*"off"*/);
    sub_1C2D490(&StringLiteral_17431/*"btn_bg_02_on"*/);
    sub_1C2D490(&StringLiteral_22372/*"on"*/);
    sub_1C2D490(&StringLiteral_17653/*"button_total"*/);
    sub_1C2D490(&StringLiteral_17652/*"button_storage"*/);
    sub_1C2D490(&StringLiteral_17647/*"button_possess"*/);
    this = (CombineExpUpInfo_o *)sub_1C2D490(&StringLiteral_17430/*"btn_bg_02_off"*/);
    byte_4C2B43B = 1;
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
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17431/*"btn_bg_02_on"*/, 0);
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
      v17 = (System_String_o *)StringLiteral_22372/*"on"*/;
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v18 = v6->fields.btnSpriteList;
      if ( !v18 )
        goto LABEL_47;
      if ( v7 >= LODWORD(v18->max_length) )
LABEL_48:
        sub_1C2D6F4(this, *(_QWORD *)&kind, *(_QWORD *)&type);
      this = (CombineExpUpInfo_o *)v18->m_Items[v7];
      if ( !this )
        goto LABEL_47;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17430/*"btn_bg_02_off"*/, 0);
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
      v17 = (System_String_o *)StringLiteral_22345/*"off"*/;
    }
    this = (CombineExpUpInfo_o *)System_String__Concat_63457864(v16, v17, 0);
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
        v23 = &StringLiteral_17653/*"button_total"*/;
        goto LABEL_45;
      }
LABEL_47:
      sub_1C2D6EC(this, *(_QWORD *)&kind);
    case 1:
      this = (CombineExpUpInfo_o *)v6->fields.btnChangeSprite;
      if ( this )
      {
        v23 = &StringLiteral_17652/*"button_storage"*/;
        goto LABEL_45;
      }
      goto LABEL_47;
    case 0:
      this = (CombineExpUpInfo_o *)v6->fields.btnChangeSprite;
      if ( this )
      {
        v23 = &StringLiteral_17647/*"button_possess"*/;
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