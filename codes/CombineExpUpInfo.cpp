void __fastcall CombineExpUpInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A01E82 & 1) == 0 )
  {
    sub_1B64870(&CombineExpUpInfo_TypeInfo, v1);
    byte_4A01E82 = 1;
  }
  *CombineExpUpInfo_TypeInfo->static_fields = (struct CombineExpUpInfo_StaticFields)xmmword_BA2870;
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
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x20
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_T__o *v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x9
  _QWORD *v27; // x8
  __int64 size; // x10
  __int64 v29; // x10
  __int64 v30; // x10
  __int64 v31; // x10
  __int64 v32; // x10
  __int64 v33; // x10
  __int64 v34; // x10
  __int64 v35; // x10

  if ( (byte_4A01E81 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__, v3);
    sub_1B64870(&System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo, v4);
    sub_1B64870(&string___TypeInfo, v5);
    sub_1B64870(&StringLiteral_17445/*"btn_hp_"*/, v6);
    sub_1B64870(&StringLiteral_17395/*"btn_atk_"*/, v7);
    sub_1B64870(&StringLiteral_17441/*"btn_experience_"*/, v8);
    byte_4A01E81 = 1;
  }
  v9 = sub_1B64918(string___TypeInfo, 3LL);
  if ( !v9 )
    goto LABEL_34;
  v13 = v9;
  if ( !*(_DWORD *)(v9 + 24)
    || (v14 = StringLiteral_17441/*"btn_experience_"*/,
        *(_QWORD *)(v9 + 32) = StringLiteral_17441/*"btn_experience_"*/,
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v9 + 32), v14, v11, v12),
        *(_DWORD *)(v13 + 24) <= 1u)
    || (v17 = StringLiteral_17395/*"btn_atk_"*/,
        *(_QWORD *)(v13 + 40) = StringLiteral_17395/*"btn_atk_"*/,
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v13 + 40), v17, v15, v16),
        *(_DWORD *)(v13 + 24) <= 2u) )
  {
    sub_1B64AD4(v9, v10);
  }
  v20 = StringLiteral_17445/*"btn_hp_"*/;
  *(_QWORD *)(v13 + 48) = StringLiteral_17445/*"btn_hp_"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v13 + 48), v20, v18, v19);
  this->fields.btnSpriteNameList = (struct System_String_array *)v13;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.btnSpriteNameList, v13, v21, v22);
  v23 = (System_Collections_Generic_List_T__o *)sub_1B64ABC(System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v23,
    (const MethodInfo_3494230 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__);
  if ( !v23 )
    goto LABEL_34;
  items = v23->fields._items;
  v27 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
  ++v23->fields._version;
  if ( !items )
    goto LABEL_34;
  size = v23->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v23,
      1,
      *(const MethodInfo_3494A84 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    items = v23->fields._items;
    v27 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v23->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v23->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 1;
    ++v23->fields._version;
  }
  v29 = v23->fields._size;
  if ( (unsigned int)v29 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v23,
      2,
      *(const MethodInfo_3494A84 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    items = v23->fields._items;
    v27 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v23->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v23->fields._size = v29 + 1;
    *((_DWORD *)items->m_Items + v29) = 2;
    ++v23->fields._version;
  }
  v30 = v23->fields._size;
  if ( (unsigned int)v30 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v23,
      3,
      *(const MethodInfo_3494A84 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    items = v23->fields._items;
    v27 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v23->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v23->fields._size = v30 + 1;
    *((_DWORD *)items->m_Items + v30) = 3;
    ++v23->fields._version;
  }
  v31 = v23->fields._size;
  if ( (unsigned int)v31 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v23,
      4,
      *(const MethodInfo_3494A84 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    items = v23->fields._items;
    v27 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v23->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v23->fields._size = v31 + 1;
    *((_DWORD *)items->m_Items + v31) = 4;
    ++v23->fields._version;
  }
  v32 = v23->fields._size;
  if ( (unsigned int)v32 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v23,
      5,
      *(const MethodInfo_3494A84 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    items = v23->fields._items;
    v27 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v23->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v23->fields._size = v32 + 1;
    *((_DWORD *)items->m_Items + v32) = 5;
    ++v23->fields._version;
  }
  v33 = v23->fields._size;
  if ( (unsigned int)v33 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v23,
      6,
      *(const MethodInfo_3494A84 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    items = v23->fields._items;
    v27 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v23->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v23->fields._size = v33 + 1;
    *((_DWORD *)items->m_Items + v33) = 6;
    ++v23->fields._version;
  }
  v34 = v23->fields._size;
  if ( (unsigned int)v34 < items->max_length )
  {
    v23->fields._size = v34 + 1;
    *((_DWORD *)items->m_Items + v34) = 7;
    ++v23->fields._version;
    goto LABEL_30;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v23,
    7,
    *(const MethodInfo_3494A84 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  items = v23->fields._items;
  v27 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
  ++v23->fields._version;
  if ( !items )
LABEL_34:
    sub_1B64ACC(v9, v10);
LABEL_30:
  v35 = v23->fields._size;
  if ( (unsigned int)v35 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v23,
      1001,
      *(const MethodInfo_3494A84 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v23->fields._size = v35 + 1;
    *((_DWORD *)items->m_Items + v35) = 1001;
  }
  this->fields.SortClassOrder = (struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *)v23;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.SortClassOrder, (int32_t)v23, v24, v25);
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
  struct System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *changeAction; // x8
  System_Collections_Generic_List_object__o *v24; // x0
  SvtClassAttri_c *v25; // x0
  __int64 v26; // x21
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *SortClassOrder; // x9
  int32_t nowKind; // w8
  __int64 size; // x27
  System_Int32_array *v33; // x22
  UserServantEntity_array *List; // x0
  Il2CppObject *MasterData_object; // x24
  UserServantStorageMaster_o *v36; // x23
  System_Collections_Generic_IEnumerable_T__o *CombineMaterialList; // x25
  System_Collections_Generic_List_object__o *v38; // x24
  UserServantEntity_array *v39; // x23
  unsigned __int64 i; // x24
  int32_t Item; // w25
  CombineExpUpInfo_o *ClassId; // x0
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x4
  int32_t nowType; // w8
  int32_t v46; // w25
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x6
  int32_t v49; // w3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  il2cpp_array_size_t v51; // w10
  __int64 v52; // x9
  char *v53; // x11
  struct CombineExpUpClassInfo_array *expUpClassInfoList; // x9
  int32_t v55; // w1
  int32_t v56; // w4
  int32_t v57; // w5
  struct CombineExpUpClassInfo_array *v58; // x8
  struct CombineExpUpClassInfo_array *v59; // x8
  System_Int32_array *v60; // x2
  System_Int32_array *v61; // x3

  if ( (byte_4A01E79 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_1B64870(&int___TypeInfo, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_int_____ctor__, v15);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity___ctor___75681680, v16);
    sub_1B64870(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Count__, v17);
    sub_1B64870(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Item__, v18);
    sub_1B64870(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v19);
    sub_1B64870(&System_Collections_Generic_List_int____TypeInfo, v20);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B64870(&SvtClassAttri_TypeInfo, v22);
    byte_4A01E79 = 1;
  }
  this->fields.nowKind = kind;
  this->fields.nowType = type;
  if ( afterAction )
  {
    this->fields.changeAction = afterAction;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.changeAction, (int32_t)afterAction, type, isFirst);
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
  v24 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_int_____ctor__);
  v25 = SvtClassAttri_TypeInfo;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v25 = SvtClassAttri_TypeInfo;
  }
  v26 = sub_1B64918(int___TypeInfo, v25->static_fields->MAX_EXP_UP_RARITY);
  Instance = (DataManager_o *)sub_1B64918(int___TypeInfo, SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY);
  SortClassOrder = this->fields.SortClassOrder;
  if ( !SortClassOrder )
    goto LABEL_76;
  nowKind = this->fields.nowKind;
  size = (unsigned int)SortClassOrder->fields._size;
  v33 = (System_Int32_array *)Instance;
  switch ( nowKind )
  {
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !MasterData_object )
        goto LABEL_76;
      v36 = (UserServantStorageMaster_o *)Instance;
      CombineMaterialList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                             (UserServantMaster_o *)MasterData_object,
                                                                             0LL);
      v38 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor_55243428(
        v38,
        CombineMaterialList,
        (const MethodInfo_34AF2A4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___75681680);
      if ( !v36 )
        goto LABEL_76;
      Instance = (DataManager_o *)UserServantStorageMaster__getList(v36, 0LL);
      if ( !v38 )
        goto LABEL_76;
      System_Collections_Generic_List_object___AddRange(
        v38,
        (System_Collections_Generic_IEnumerable_T__o *)Instance,
        (const MethodInfo_34AFBBC *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      List = (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v38,
                                          (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      goto LABEL_25;
    case 1:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !Instance )
        goto LABEL_76;
      List = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0LL);
      goto LABEL_25;
    case 0:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_76;
      List = UserServantMaster__getCombineMaterialList((UserServantMaster_o *)Instance, 0LL);
LABEL_25:
      v39 = List;
      goto LABEL_27;
  }
  v39 = 0LL;
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
               (const MethodInfo_3494794 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Item__);
      if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
      ClassId = (CombineExpUpInfo_o *)SvtClassAttri__getClassId(Item, 0LL);
      nowType = this->fields.nowType;
      v46 = (int)ClassId;
      if ( nowType == 1 )
      {
        v49 = 1;
      }
      else
      {
        if ( !nowType )
        {
          Instance = (DataManager_o *)CombineExpUpInfo__GetTargetClassMaterialInfo(ClassId, v39, (int32_t)ClassId, v43);
          if ( !Instance )
            return (char)Instance;
          goto LABEL_39;
        }
        v49 = 2;
      }
      Instance = (DataManager_o *)CombineExpUpInfo__GetTargetClassStatusUpInfo(ClassId, v39, (int32_t)ClassId, v49, v44);
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
        v51 = 0;
        while ( 1 )
        {
          v52 = *((_QWORD *)&Instance->fields._DispLog + (int)v51);
          if ( !v52 || !v26 )
            break;
          if ( v51 >= *(_DWORD *)(v26 + 24) )
            goto LABEL_77;
          *(_DWORD *)(v26 + 4LL * (int)v51 + 32) = *(_DWORD *)(v52 + 16);
          if ( !v33 )
            break;
          if ( v51 >= v33->max_length )
            goto LABEL_77;
          v53 = (char *)v33 + 4 * (int)v51++;
          *((_DWORD *)v53 + 8) = *(_DWORD *)(v52 + 20);
          if ( (_DWORD)m_CancellationTokenSource == v51 )
            goto LABEL_48;
        }
LABEL_76:
        sub_1B64ACC(Instance, v28);
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
            if ( v46 == 1001 )
            {
              v55 = 1001;
              v56 = 1;
              v57 = 4;
              goto LABEL_70;
            }
            v56 = 2;
LABEL_69:
            v57 = 3;
            v55 = v46;
LABEL_70:
            v60 = (System_Int32_array *)v26;
            v61 = v33;
LABEL_71:
            CombineExpUpClassInfo__Set((CombineExpUpClassInfo_o *)Instance, v55, v60, v61, v56, v57, v48);
            continue;
          }
          if ( v46 != 1001 )
          {
            v56 = 1;
            goto LABEL_69;
          }
          v55 = 1001;
          v57 = 4;
        }
        else
        {
          v59 = this->fields.expUpClassInfoList;
          if ( !v59 )
            goto LABEL_76;
          if ( i >= v59->max_length )
LABEL_77:
            sub_1B64AD4(Instance, v28);
          Instance = (DataManager_o *)v59->m_Items[i];
          if ( !Instance )
            goto LABEL_76;
          v57 = 5;
          v55 = v46;
        }
        v60 = (System_Int32_array *)v26;
        v61 = v33;
        v56 = 0;
        goto LABEL_71;
      }
      v58 = this->fields.expUpClassInfoList;
      if ( !v58 )
        goto LABEL_76;
      if ( i >= v58->max_length )
        goto LABEL_77;
      Instance = (DataManager_o *)v58->m_Items[i];
      if ( !Instance )
        goto LABEL_76;
      CombineExpUpClassInfo__Set_44755116((CombineExpUpClassInfo_o *)Instance, v33, v47);
    }
  }
  CombineExpUpInfo__SetBtnState(this, this->fields.nowKind, this->fields.nowType, v29);
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
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v24; // x23
  bool v25; // zf
  unsigned __int64 max_length; // x10
  __int64 v27; // x11
  unsigned __int64 v28; // x8
  __int64 v29; // x14
  int32_t v30; // w15
  __int64 v31; // x8
  int v32; // w23
  int v33; // w25
  Il2CppClass **v34; // x8
  UserServantEntity_o *v35; // x22
  SvtClassAttri_c *v36; // x0
  int32_t MAX_EXP_UP_RARITY; // w26
  CombineExpUpInfo_MaterialData_o *v38; // x8
  __int64 v39; // x0

  if ( (byte_4A01E7A & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, svtList);
    sub_1B64870(&CombineExpUpInfo_MaterialData___TypeInfo, v6);
    sub_1B64870(&CombineExpUpInfo_MaterialData_TypeInfo, v7);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B64870(&SvtClassAttri_TypeInfo, v9);
    byte_4A01E7A = 1;
  }
  v10 = SvtClassAttri_TypeInfo;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v10 = SvtClassAttri_TypeInfo;
  }
  v11 = (CombineExpUpInfo_MaterialData_array *)sub_1B64918(
                                                 CombineExpUpInfo_MaterialData___TypeInfo,
                                                 v10->static_fields->MAX_EXP_UP_RARITY);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
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
    v20 = (Il2CppObject *)sub_1B64ABC(CombineExpUpInfo_MaterialData_TypeInfo);
    System_Object___ctor(v20, 0LL);
    if ( !v11 )
      goto LABEL_47;
    if ( v20 )
    {
      Instance = sub_1B649AC(v20, v11->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v39 = sub_1B64AF0(0LL);
        sub_1B64998(v39, 0LL);
      }
    }
    if ( v17 >= v11->max_length )
      goto LABEL_46;
    m_Items[v17] = (CombineExpUpInfo_MaterialData_o *)v20;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&m_Items[v16], (int32_t)v20, v21, v22);
    ++v17;
    ++v16;
  }
  v24 = *(_QWORD *)&v15->max_length;
  if ( !*(_DWORD *)(Instance + 224) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    LODWORD(v19) = SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY;
  }
  if ( (int)v24 >= 1 )
  {
    if ( v11 )
    {
      v25 = (_DWORD)v19 == (_DWORD)v24;
      max_length = v11->max_length;
      v27 = !v25;
      v28 = 0LL;
      while ( v27 + v28 < max_length && v28 < v15->max_length )
      {
        v29 = *((_QWORD *)&v11->m_Items[(unsigned int)v27] + v28);
        if ( !v29 )
          goto LABEL_47;
        v30 = v15->m_Items[++v28];
        *(_DWORD *)(v29 + 16) = v30;
        if ( (unsigned int)v24 == v28 )
          goto LABEL_32;
      }
LABEL_46:
      sub_1B64AD4(Instance, v13);
    }
LABEL_47:
    sub_1B64ACC(Instance, v13);
  }
LABEL_32:
  if ( !svtList )
    goto LABEL_47;
  v31 = *(_QWORD *)&svtList->max_length;
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
      Instance = UserServantEntity__IsCombineMaterial((UserServantEntity_o *)v34[4], 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = UserServantEntity__getSvtClassId(v35, 0, 0LL);
        if ( (_DWORD)Instance == classId )
        {
          v36 = SvtClassAttri_TypeInfo;
          if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
            v36 = SvtClassAttri_TypeInfo;
          }
          MAX_EXP_UP_RARITY = v36->static_fields->MAX_EXP_UP_RARITY;
          Instance = UserServantEntity__getRarity(v35, 0LL);
          if ( !v11 )
            goto LABEL_47;
          if ( (unsigned int)(MAX_EXP_UP_RARITY - Instance) >= v11->max_length )
            goto LABEL_46;
          v38 = v11->m_Items[MAX_EXP_UP_RARITY - (int)Instance];
          if ( !v38 )
            goto LABEL_47;
          ++v38->fields.num;
        }
      }
      if ( v32 == v33 )
        return v11;
      if ( ++v33 >= svtList->max_length )
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
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x29
  Il2CppClass **v33; // x26
  ServantStatusBattleListViewItem_o *v34; // x26
  __int64 v35; // x8
  int v36; // w25
  int v37; // w26
  Il2CppClass **v38; // x8
  UserServantEntity_o *v39; // x23
  CombineExpUpInfo_MaterialData_o *v40; // x8
  __int64 v42; // x0

  if ( (byte_4A01E7B & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, svtList);
    sub_1B64870(&int___TypeInfo, v8);
    sub_1B64870(&CombineExpUpInfo_MaterialData___TypeInfo, v9);
    sub_1B64870(&CombineExpUpInfo_MaterialData_TypeInfo, v10);
    sub_1B64870(&ServantLeaderInfo_TypeInfo, v11);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B64870(&SvtClassAttri_TypeInfo, v13);
    byte_4A01E7B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  Instance = (Il2CppObject *)sub_1B64918(int___TypeInfo, v17->static_fields->MAX_EXP_UP_RARITY);
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
      sub_1B64AD4(Instance, v15);
    v24 = v23[v22];
    v25 = (ServantLeaderInfo_o *)sub_1B64ABC(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_40155148(v25, v24, 0, 1, 0LL);
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
  Instance = (Il2CppObject *)sub_1B64918(CombineExpUpInfo_MaterialData___TypeInfo, (unsigned int)v21);
  v27 = (CombineExpUpInfo_MaterialData_array *)Instance;
  if ( v21 >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      v29 = (Il2CppObject *)sub_1B64ABC(CombineExpUpInfo_MaterialData_TypeInfo);
      System_Object___ctor(v29, 0LL);
      if ( !v27 )
        break;
      if ( v29 )
      {
        Instance = (Il2CppObject *)sub_1B649AC(v29, v27->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v42 = sub_1B64AF0(0LL);
          sub_1B64998(v42, 0LL);
        }
      }
      if ( v28 >= v27->max_length )
        goto LABEL_56;
      v32 = (int)v28;
      v33 = &v27->obj.klass + (int)v28;
      v33[4] = (Il2CppClass *)v29;
      v34 = (ServantStatusBattleListViewItem_o *)(v33 + 4);
      sub_1B64814(v34, (int32_t)v29, v30, v31);
      if ( v28 >= v27->max_length )
        goto LABEL_56;
      if ( !v20 )
        break;
      if ( v28 >= LODWORD(v20[1].monitor) )
        goto LABEL_56;
      if ( !v34->klass )
        break;
      ++v28;
      LODWORD(v34->klass->_1.name) = *((_DWORD *)&v20[2].klass + v32);
      if ( v21 == v28 )
        goto LABEL_37;
    }
LABEL_59:
    sub_1B64ACC(Instance, v15);
  }
LABEL_37:
  if ( !svtList )
    goto LABEL_59;
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
        goto LABEL_59;
      Instance = (Il2CppObject *)UserServantEntity__IsStatusUp((UserServantEntity_o *)v38[4], 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (Il2CppObject *)UserServantEntity__getSvtClassId(v39, 0, 0LL);
        if ( (_DWORD)Instance == classId )
        {
          if ( type == 2 )
          {
            if ( v39->fields.hp || v39->fields.adjustHp )
            {
LABEL_50:
              Instance = (Il2CppObject *)UserServantEntity__getRarity(v39, 0LL);
              if ( !v27 )
                goto LABEL_59;
              if ( v21 - (int)Instance >= v27->max_length )
                goto LABEL_56;
              v40 = v27->m_Items[v21 - (int)Instance];
              if ( !v40 )
                goto LABEL_59;
              ++v40->fields.num;
            }
          }
          else if ( type == 1 && (v39->fields.atk || v39->fields.adjustAtk) )
          {
            goto LABEL_50;
          }
        }
      }
      if ( v36 == v37 )
        return v27;
      if ( ++v37 >= svtList->max_length )
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

  if ( (byte_4A01E7E & 1) == 0 )
  {
    sub_1B64870(&Method_CombineExpUpInfo_OnClickCenter__, method);
    byte_4A01E7E = 1;
  }
  if ( this->fields.nowType != 1 )
  {
    v3 = Method_CombineExpUpInfo_OnClickCenter__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickCenter__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_CombineExpUpInfo_OnClickCenter__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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

  if ( (byte_4A01E80 & 1) == 0 )
  {
    sub_1B64870(&Method_CombineExpUpInfo_OnClickChangeButton__, method);
    byte_4A01E80 = 1;
  }
  v3 = Method_CombineExpUpInfo_OnClickChangeButton__;
  if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickChangeButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B64888(Method_CombineExpUpInfo_OnClickChangeButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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

  if ( (byte_4A01E7D & 1) == 0 )
  {
    sub_1B64870(&Method_CombineExpUpInfo_OnClickLeft__, method);
    byte_4A01E7D = 1;
  }
  if ( this->fields.nowType )
  {
    v3 = Method_CombineExpUpInfo_OnClickLeft__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickLeft__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_CombineExpUpInfo_OnClickLeft__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 0, 1, 0LL, v5);
  }
}


void __fastcall CombineExpUpInfo__OnClickRight(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x5

  if ( (byte_4A01E7F & 1) == 0 )
  {
    sub_1B64870(&Method_CombineExpUpInfo_OnClickRight__, method);
    byte_4A01E7F = 1;
  }
  if ( this->fields.nowType != 2 )
  {
    v3 = Method_CombineExpUpInfo_OnClickRight__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickRight__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_CombineExpUpInfo_OnClickRight__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
  if ( (byte_4A01E7C & 1) == 0 )
  {
    sub_1B64870(&CombineExpUpInfo_TypeInfo, *(_QWORD *)&kind);
    sub_1B64870(&StringLiteral_22120/*"off"*/, v7);
    sub_1B64870(&StringLiteral_17401/*"btn_bg_02_on"*/, v8);
    sub_1B64870(&StringLiteral_22150/*"on"*/, v9);
    sub_1B64870(&StringLiteral_17598/*"button_total"*/, v10);
    sub_1B64870(&StringLiteral_17597/*"button_storage"*/, v11);
    sub_1B64870(&StringLiteral_17592/*"button_possess"*/, v12);
    this = (CombineExpUpInfo_o *)sub_1B64870(&StringLiteral_17400/*"btn_bg_02_off"*/, v13);
    byte_4A01E7C = 1;
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
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17401/*"btn_bg_02_on"*/, 0LL);
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
      v24 = (System_String_o *)StringLiteral_22150/*"on"*/;
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v25 = v6->fields.btnSpriteList;
      if ( !v25 )
        goto LABEL_47;
      if ( v14 >= v25->max_length )
LABEL_48:
        sub_1B64AD4(this, *(_QWORD *)&kind);
      this = (CombineExpUpInfo_o *)v25->m_Items[v14];
      if ( !this )
        goto LABEL_47;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17400/*"btn_bg_02_off"*/, 0LL);
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
      v24 = (System_String_o *)StringLiteral_22120/*"off"*/;
    }
    this = (CombineExpUpInfo_o *)System_String__Concat_61383576(v23, v24, 0LL);
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
        v30 = &StringLiteral_17598/*"button_total"*/;
        goto LABEL_45;
      }
LABEL_47:
      sub_1B64ACC(this, *(_QWORD *)&kind);
    case 1:
      this = (CombineExpUpInfo_o *)v6->fields.btnChangeSprite;
      if ( this )
      {
        v30 = &StringLiteral_17597/*"button_storage"*/;
        goto LABEL_45;
      }
      goto LABEL_47;
    case 0:
      this = (CombineExpUpInfo_o *)v6->fields.btnChangeSprite;
      if ( this )
      {
        v30 = &StringLiteral_17592/*"button_possess"*/;
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