void __fastcall CombineExpUpInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FFD80 & 1) == 0 )
  {
    sub_1B640C8(&CombineExpUpInfo_TypeInfo, v1);
    byte_49FFD80 = 1;
  }
  *CombineExpUpInfo_TypeInfo->static_fields = (struct CombineExpUpInfo_StaticFields)xmmword_BA2500;
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
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_T__o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x9
  _QWORD *v29; // x8
  __int64 size; // x10
  __int64 v31; // x10
  __int64 v32; // x10
  __int64 v33; // x10
  __int64 v34; // x10
  __int64 v35; // x10
  __int64 v36; // x10
  __int64 v37; // x10

  if ( (byte_49FFD7F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__, v3);
    sub_1B640C8(&System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo, v4);
    sub_1B640C8(&string___TypeInfo, v5);
    sub_1B640C8(&StringLiteral_17443/*"btn_hp_"*/, v6);
    sub_1B640C8(&StringLiteral_17393/*"btn_atk_"*/, v7);
    sub_1B640C8(&StringLiteral_17439/*"btn_experience_"*/, v8);
    byte_49FFD7F = 1;
  }
  v9 = sub_1B64170(string___TypeInfo, 3LL);
  if ( !v9 )
    goto LABEL_34;
  v13 = v9;
  if ( !*(_DWORD *)(v9 + 24)
    || (v14 = StringLiteral_17439/*"btn_experience_"*/,
        *(_QWORD *)(v9 + 32) = StringLiteral_17439/*"btn_experience_"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 32), v14, v11, v12),
        *(_DWORD *)(v13 + 24) <= 1u)
    || (v17 = StringLiteral_17393/*"btn_atk_"*/,
        *(_QWORD *)(v13 + 40) = StringLiteral_17393/*"btn_atk_"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 40), v17, v15, v16),
        *(_DWORD *)(v13 + 24) <= 2u) )
  {
    sub_1B6432C(v9, v10);
  }
  v20 = StringLiteral_17443/*"btn_hp_"*/;
  *(_QWORD *)(v13 + 48) = StringLiteral_17443/*"btn_hp_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 48), v20, v18, v19);
  this->fields.btnSpriteNameList = (struct System_String_array *)v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.btnSpriteNameList, v13, v21, v22);
  v25 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                  System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo,
                                                  v23,
                                                  v24);
  System_Collections_Generic_List_Int32Enum____ctor(
    v25,
    (const MethodInfo_3491F54 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__);
  if ( !v25 )
    goto LABEL_34;
  items = v25->fields._items;
  v29 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
  ++v25->fields._version;
  if ( !items )
    goto LABEL_34;
  size = v25->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v25,
      1,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    items = v25->fields._items;
    v29 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v25->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v25->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 1;
    ++v25->fields._version;
  }
  v31 = v25->fields._size;
  if ( (unsigned int)v31 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v25,
      2,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    items = v25->fields._items;
    v29 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v25->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v25->fields._size = v31 + 1;
    *((_DWORD *)items->m_Items + v31) = 2;
    ++v25->fields._version;
  }
  v32 = v25->fields._size;
  if ( (unsigned int)v32 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v25,
      3,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    items = v25->fields._items;
    v29 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v25->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v25->fields._size = v32 + 1;
    *((_DWORD *)items->m_Items + v32) = 3;
    ++v25->fields._version;
  }
  v33 = v25->fields._size;
  if ( (unsigned int)v33 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v25,
      4,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    items = v25->fields._items;
    v29 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v25->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v25->fields._size = v33 + 1;
    *((_DWORD *)items->m_Items + v33) = 4;
    ++v25->fields._version;
  }
  v34 = v25->fields._size;
  if ( (unsigned int)v34 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v25,
      5,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    items = v25->fields._items;
    v29 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v25->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v25->fields._size = v34 + 1;
    *((_DWORD *)items->m_Items + v34) = 5;
    ++v25->fields._version;
  }
  v35 = v25->fields._size;
  if ( (unsigned int)v35 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v25,
      6,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    items = v25->fields._items;
    v29 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v25->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v25->fields._size = v35 + 1;
    *((_DWORD *)items->m_Items + v35) = 6;
    ++v25->fields._version;
  }
  v36 = v25->fields._size;
  if ( (unsigned int)v36 < items->max_length )
  {
    v25->fields._size = v36 + 1;
    *((_DWORD *)items->m_Items + v36) = 7;
    ++v25->fields._version;
    goto LABEL_30;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v25,
    7,
    *(const MethodInfo_34927A8 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  items = v25->fields._items;
  v29 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
  ++v25->fields._version;
  if ( !items )
LABEL_34:
    sub_1B64324(v9);
LABEL_30:
  v37 = v25->fields._size;
  if ( (unsigned int)v37 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v25,
      1001,
      *(const MethodInfo_34927A8 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v25->fields._size = v37 + 1;
    *((_DWORD *)items->m_Items + v37) = 1001;
  }
  this->fields.SortClassOrder = (struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *)v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.SortClassOrder, (int32_t)v25, v26, v27);
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
  const MethodInfo *v28; // x3
  struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *SortClassOrder; // x9
  int32_t nowKind; // w8
  __int64 size; // x27
  System_Int32_array *v32; // x22
  UserServantEntity_array *List; // x0
  Il2CppObject *MasterData_object; // x24
  UserServantStorageMaster_o *v35; // x23
  System_Collections_Generic_IEnumerable_T__o *CombineMaterialList; // x25
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_object__o *v39; // x24
  UserServantEntity_array *v40; // x23
  unsigned __int64 i; // x24
  int32_t Item; // w25
  CombineExpUpInfo_o *ClassId; // x0
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x4
  int32_t nowType; // w8
  int32_t v47; // w25
  __int64 v48; // x1
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

  if ( (byte_49FFD77 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&kind);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v11);
    sub_1B640C8(&int___TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int_____ctor__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor___75673192, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Count__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Item__, v18);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v19);
    sub_1B640C8(&System_Collections_Generic_List_int____TypeInfo, v20);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B640C8(&SvtClassAttri_TypeInfo, v22);
    byte_49FFD77 = 1;
  }
  this->fields.nowKind = kind;
  this->fields.nowType = type;
  if ( afterAction )
  {
    this->fields.changeAction = afterAction;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.changeAction, (int32_t)afterAction, type, isFirst);
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
  v24 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_int____TypeInfo,
                                                       *(_QWORD *)&kind,
                                                       *(_QWORD *)&type);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_int_____ctor__);
  v25 = SvtClassAttri_TypeInfo;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v25 = SvtClassAttri_TypeInfo;
  }
  v26 = sub_1B64170(int___TypeInfo, v25->static_fields->MAX_EXP_UP_RARITY);
  Instance = (DataManager_o *)sub_1B64170(int___TypeInfo, SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY);
  SortClassOrder = this->fields.SortClassOrder;
  if ( !SortClassOrder )
    goto LABEL_76;
  nowKind = this->fields.nowKind;
  size = (unsigned int)SortClassOrder->fields._size;
  v32 = (System_Int32_array *)Instance;
  switch ( nowKind )
  {
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !MasterData_object )
        goto LABEL_76;
      v35 = (UserServantStorageMaster_o *)Instance;
      CombineMaterialList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                             (UserServantMaster_o *)MasterData_object,
                                                                             0LL);
      v39 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                           v37,
                                                           v38);
      System_Collections_Generic_List_object____ctor_55234504(
        v39,
        CombineMaterialList,
        (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___75673192);
      if ( !v35 )
        goto LABEL_76;
      Instance = (DataManager_o *)UserServantStorageMaster__getList(v35, 0LL);
      if ( !v39 )
        goto LABEL_76;
      System_Collections_Generic_List_object___AddRange(
        v39,
        (System_Collections_Generic_IEnumerable_T__o *)Instance,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      List = (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v39,
                                          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      goto LABEL_25;
    case 1:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !Instance )
        goto LABEL_76;
      List = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0LL);
      goto LABEL_25;
    case 0:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_76;
      List = UserServantMaster__getCombineMaterialList((UserServantMaster_o *)Instance, 0LL);
LABEL_25:
      v40 = List;
      goto LABEL_27;
  }
  v40 = 0LL;
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
               (const MethodInfo_34924B8 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Item__);
      if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
      ClassId = (CombineExpUpInfo_o *)SvtClassAttri__getClassId(Item, 0LL);
      nowType = this->fields.nowType;
      v47 = (int)ClassId;
      if ( nowType == 1 )
      {
        v51 = 1;
      }
      else
      {
        if ( !nowType )
        {
          Instance = (DataManager_o *)CombineExpUpInfo__GetTargetClassMaterialInfo(ClassId, v40, (int32_t)ClassId, v44);
          if ( !Instance )
            return (char)Instance;
          goto LABEL_39;
        }
        v51 = 2;
      }
      Instance = (DataManager_o *)CombineExpUpInfo__GetTargetClassStatusUpInfo(ClassId, v40, (int32_t)ClassId, v51, v45);
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
          if ( !v54 || !v26 )
            break;
          if ( v53 >= *(_DWORD *)(v26 + 24) )
            goto LABEL_77;
          *(_DWORD *)(v26 + 4LL * (int)v53 + 32) = *(_DWORD *)(v54 + 16);
          if ( !v32 )
            break;
          if ( v53 >= v32->max_length )
            goto LABEL_77;
          v55 = (char *)v32 + 4 * (int)v53++;
          *((_DWORD *)v55 + 8) = *(_DWORD *)(v54 + 20);
          if ( (_DWORD)m_CancellationTokenSource == v53 )
            goto LABEL_48;
        }
LABEL_76:
        sub_1B64324(Instance);
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
            if ( v47 == 1001 )
            {
              v57 = 1001;
              v58 = 1;
              v59 = 4;
              goto LABEL_70;
            }
            v58 = 2;
LABEL_69:
            v59 = 3;
            v57 = v47;
LABEL_70:
            v62 = (System_Int32_array *)v26;
            v63 = v32;
LABEL_71:
            CombineExpUpClassInfo__Set((CombineExpUpClassInfo_o *)Instance, v57, v62, v63, v58, v59, v50);
            continue;
          }
          if ( v47 != 1001 )
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
            sub_1B6432C(Instance, v48);
          Instance = (DataManager_o *)v61->m_Items[i];
          if ( !Instance )
            goto LABEL_76;
          v59 = 5;
          v57 = v47;
        }
        v62 = (System_Int32_array *)v26;
        v63 = v32;
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
      CombineExpUpClassInfo__Set_44746192((CombineExpUpClassInfo_o *)Instance, v32, v49);
    }
  }
  CombineExpUpInfo__SetBtnState(this, this->fields.nowKind, this->fields.nowType, v28);
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
  System_Int32_array *TargetClassMaterialSvtIdList; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_Int32_array *v16; // x22
  __int64 v17; // x25
  unsigned __int64 v18; // x26
  CombineExpUpInfo_MaterialData_o **m_Items; // x27
  signed __int64 v20; // x10
  Il2CppObject *v21; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v25; // x23
  bool v26; // zf
  unsigned __int64 max_length; // x10
  __int64 v28; // x11
  unsigned __int64 v29; // x8
  __int64 v30; // x14
  int32_t v31; // w15
  __int64 v32; // x8
  int v33; // w23
  int v34; // w25
  Il2CppClass **v35; // x8
  UserServantEntity_o *v36; // x22
  SvtClassAttri_c *v37; // x0
  int32_t MAX_EXP_UP_RARITY; // w26
  CombineExpUpInfo_MaterialData_o *v39; // x8
  __int64 v40; // x0

  if ( (byte_49FFD78 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, svtList);
    sub_1B640C8(&CombineExpUpInfo_MaterialData___TypeInfo, v6);
    sub_1B640C8(&CombineExpUpInfo_MaterialData_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B640C8(&SvtClassAttri_TypeInfo, v9);
    byte_49FFD78 = 1;
  }
  v10 = SvtClassAttri_TypeInfo;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v10 = SvtClassAttri_TypeInfo;
  }
  v11 = (CombineExpUpInfo_MaterialData_array *)sub_1B64170(
                                                 CombineExpUpInfo_MaterialData___TypeInfo,
                                                 v10->static_fields->MAX_EXP_UP_RARITY);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_47;
  TargetClassMaterialSvtIdList = ServantMaster__GetTargetClassMaterialSvtIdList(
                                   (ServantMaster_o *)Instance,
                                   classId,
                                   0LL);
  if ( !TargetClassMaterialSvtIdList )
    return 0LL;
  v16 = TargetClassMaterialSvtIdList;
  if ( !*(_QWORD *)&TargetClassMaterialSvtIdList->max_length )
    return 0LL;
  v17 = 0LL;
  v18 = 0LL;
  m_Items = v11->m_Items;
  while ( 1 )
  {
    Instance = (__int64)SvtClassAttri_TypeInfo;
    if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
      Instance = (__int64)SvtClassAttri_TypeInfo;
    }
    v20 = **(int **)(Instance + 184);
    if ( (__int64)v18 >= v20 )
      break;
    v21 = (Il2CppObject *)sub_1B64314(CombineExpUpInfo_MaterialData_TypeInfo, v14, v15);
    System_Object___ctor(v21, 0LL);
    if ( !v11 )
      goto LABEL_47;
    if ( v21 )
    {
      Instance = sub_1B64204(v21, v11->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v40 = sub_1B64348(0LL);
        sub_1B641F0(v40, 0LL);
      }
    }
    if ( v18 >= v11->max_length )
      goto LABEL_46;
    m_Items[v18] = (CombineExpUpInfo_MaterialData_o *)v21;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&m_Items[v17], (int32_t)v21, v22, v23);
    ++v18;
    ++v17;
  }
  v25 = *(_QWORD *)&v16->max_length;
  if ( !*(_DWORD *)(Instance + 224) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    LODWORD(v20) = SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY;
  }
  if ( (int)v25 >= 1 )
  {
    if ( v11 )
    {
      v26 = (_DWORD)v20 == (_DWORD)v25;
      max_length = v11->max_length;
      v28 = !v26;
      v29 = 0LL;
      while ( v28 + v29 < max_length && v29 < v16->max_length )
      {
        v30 = *((_QWORD *)&v11->m_Items[(unsigned int)v28] + v29);
        if ( !v30 )
          goto LABEL_47;
        v31 = v16->m_Items[++v29];
        *(_DWORD *)(v30 + 16) = v31;
        if ( (unsigned int)v25 == v29 )
          goto LABEL_32;
      }
LABEL_46:
      sub_1B6432C(Instance, v14);
    }
LABEL_47:
    sub_1B64324(Instance);
  }
LABEL_32:
  if ( !svtList )
    goto LABEL_47;
  v32 = *(_QWORD *)&svtList->max_length;
  v33 = v32 - 1;
  if ( (int)v32 >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      v35 = &svtList->obj.klass + v34;
      v36 = (UserServantEntity_o *)v35[4];
      if ( !v36 )
        goto LABEL_47;
      Instance = UserServantEntity__IsCombineMaterial((UserServantEntity_o *)v35[4], 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = UserServantEntity__getSvtClassId(v36, 0, 0LL);
        if ( (_DWORD)Instance == classId )
        {
          v37 = SvtClassAttri_TypeInfo;
          if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
            v37 = SvtClassAttri_TypeInfo;
          }
          MAX_EXP_UP_RARITY = v37->static_fields->MAX_EXP_UP_RARITY;
          Instance = UserServantEntity__getRarity(v36, 0LL);
          if ( !v11 )
            goto LABEL_47;
          if ( (unsigned int)(MAX_EXP_UP_RARITY - Instance) >= v11->max_length )
            goto LABEL_46;
          v39 = v11->m_Items[MAX_EXP_UP_RARITY - (int)Instance];
          if ( !v39 )
            goto LABEL_47;
          ++v39->fields.num;
        }
      }
      if ( v33 == v34 )
        return v11;
      if ( ++v34 >= svtList->max_length )
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
  System_Int32_array *TargetClassStatusUpSvtIdList; // x0
  SvtClassAttri_c *v16; // x8
  System_Int32_array *v17; // x24
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x8
  Il2CppObject *v21; // x23
  int v22; // w22
  unsigned __int64 v23; // x27
  int32_t *v24; // x29
  int32_t v25; // w26
  ServantLeaderInfo_o *v26; // x25
  char *v27; // x9
  __int64 v28; // x2
  CombineExpUpInfo_MaterialData_array *v29; // x24
  il2cpp_array_size_t v30; // w27
  Il2CppObject *v31; // x25
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x29
  Il2CppClass **v35; // x26
  ServantStatusBattleListViewItem_o *v36; // x26
  __int64 v37; // x8
  int v38; // w25
  int v39; // w26
  Il2CppClass **v40; // x8
  UserServantEntity_o *v41; // x23
  CombineExpUpInfo_MaterialData_o *v42; // x8
  __int64 v44; // x0

  if ( (byte_49FFD79 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, svtList);
    sub_1B640C8(&int___TypeInfo, v8);
    sub_1B640C8(&CombineExpUpInfo_MaterialData___TypeInfo, v9);
    sub_1B640C8(&CombineExpUpInfo_MaterialData_TypeInfo, v10);
    sub_1B640C8(&ServantLeaderInfo_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&SvtClassAttri_TypeInfo, v13);
    byte_49FFD79 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_59;
  TargetClassStatusUpSvtIdList = ServantMaster__GetTargetClassStatusUpSvtIdList(
                                   (ServantMaster_o *)Instance,
                                   classId,
                                   0LL);
  v16 = SvtClassAttri_TypeInfo;
  v17 = TargetClassStatusUpSvtIdList;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v16 = SvtClassAttri_TypeInfo;
  }
  Instance = (Il2CppObject *)sub_1B64170(int___TypeInfo, v16->static_fields->MAX_EXP_UP_RARITY);
  if ( !v17 )
    goto LABEL_59;
  v20 = *(_QWORD *)&v17->max_length;
  v21 = Instance;
  if ( (int)v20 < 1 )
    return 0LL;
  v22 = 0;
  v23 = 0LL;
  v24 = &v17->m_Items[1];
  do
  {
    if ( v23 >= (unsigned int)v20 )
LABEL_56:
      sub_1B6432C(Instance, v18);
    v25 = v24[v23];
    v26 = (ServantLeaderInfo_o *)sub_1B64314(ServantLeaderInfo_TypeInfo, v18, v19);
    ServantLeaderInfo___ctor_40150640(v26, v25, 0, 1, 0LL);
    if ( type == 2 )
    {
      if ( !v26 )
        goto LABEL_59;
      if ( !v26->fields.hp && !v26->fields.adjustHp )
        goto LABEL_24;
    }
    else
    {
      if ( type != 1 )
        goto LABEL_24;
      if ( !v26 )
        goto LABEL_59;
      if ( !v26->fields.atk && !v26->fields.adjustAtk )
        goto LABEL_24;
    }
    if ( v23 >= v17->max_length )
      goto LABEL_56;
    if ( !v21 )
      goto LABEL_59;
    if ( (unsigned int)v22 >= LODWORD(v21[1].monitor) )
      goto LABEL_56;
    v27 = (char *)v21 + 4 * v22++;
    *((_DWORD *)v27 + 8) = v24[v23];
LABEL_24:
    LODWORD(v20) = v17->max_length;
    ++v23;
  }
  while ( (__int64)v23 < (int)v20 );
  if ( !v22 )
    return 0LL;
  Instance = (Il2CppObject *)sub_1B64170(CombineExpUpInfo_MaterialData___TypeInfo, (unsigned int)v22);
  v29 = (CombineExpUpInfo_MaterialData_array *)Instance;
  if ( v22 >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      v31 = (Il2CppObject *)sub_1B64314(CombineExpUpInfo_MaterialData_TypeInfo, v18, v28);
      System_Object___ctor(v31, 0LL);
      if ( !v29 )
        break;
      if ( v31 )
      {
        Instance = (Il2CppObject *)sub_1B64204(v31, v29->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v44 = sub_1B64348(0LL);
          sub_1B641F0(v44, 0LL);
        }
      }
      if ( v30 >= v29->max_length )
        goto LABEL_56;
      v34 = (int)v30;
      v35 = &v29->obj.klass + (int)v30;
      v35[4] = (Il2CppClass *)v31;
      v36 = (ServantStatusBattleListViewItem_o *)(v35 + 4);
      sub_1B6406C(v36, (int32_t)v31, v32, v33);
      if ( v30 >= v29->max_length )
        goto LABEL_56;
      if ( !v21 )
        break;
      if ( v30 >= LODWORD(v21[1].monitor) )
        goto LABEL_56;
      if ( !v36->klass )
        break;
      ++v30;
      LODWORD(v36->klass->_1.name) = *((_DWORD *)&v21[2].klass + v34);
      if ( v22 == v30 )
        goto LABEL_37;
    }
LABEL_59:
    sub_1B64324(Instance);
  }
LABEL_37:
  if ( !svtList )
    goto LABEL_59;
  v37 = *(_QWORD *)&svtList->max_length;
  v38 = v37 - 1;
  if ( (int)v37 >= 1 )
  {
    v39 = 0;
    while ( 1 )
    {
      v40 = &svtList->obj.klass + v39;
      v41 = (UserServantEntity_o *)v40[4];
      if ( !v41 )
        goto LABEL_59;
      Instance = (Il2CppObject *)UserServantEntity__IsStatusUp((UserServantEntity_o *)v40[4], 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (Il2CppObject *)UserServantEntity__getSvtClassId(v41, 0, 0LL);
        if ( (_DWORD)Instance == classId )
        {
          if ( type == 2 )
          {
            if ( v41->fields.hp || v41->fields.adjustHp )
            {
LABEL_50:
              Instance = (Il2CppObject *)UserServantEntity__getRarity(v41, 0LL);
              if ( !v29 )
                goto LABEL_59;
              if ( v22 - (int)Instance >= v29->max_length )
                goto LABEL_56;
              v42 = v29->m_Items[v22 - (int)Instance];
              if ( !v42 )
                goto LABEL_59;
              ++v42->fields.num;
            }
          }
          else if ( type == 1 && (v41->fields.atk || v41->fields.adjustAtk) )
          {
            goto LABEL_50;
          }
        }
      }
      if ( v38 == v39 )
        return v29;
      if ( ++v39 >= svtList->max_length )
        goto LABEL_56;
    }
  }
  return v29;
}


void __fastcall CombineExpUpInfo__OnClickCenter(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x5

  if ( (byte_49FFD7C & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineExpUpInfo_OnClickCenter__, method);
    byte_49FFD7C = 1;
  }
  if ( this->fields.nowType != 1 )
  {
    v3 = Method_CombineExpUpInfo_OnClickCenter__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickCenter__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_CombineExpUpInfo_OnClickCenter__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
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

  if ( (byte_49FFD7E & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineExpUpInfo_OnClickChangeButton__, method);
    byte_49FFD7E = 1;
  }
  v3 = Method_CombineExpUpInfo_OnClickChangeButton__;
  if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickChangeButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_CombineExpUpInfo_OnClickChangeButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
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

  if ( (byte_49FFD7B & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineExpUpInfo_OnClickLeft__, method);
    byte_49FFD7B = 1;
  }
  if ( this->fields.nowType )
  {
    v3 = Method_CombineExpUpInfo_OnClickLeft__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickLeft__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_CombineExpUpInfo_OnClickLeft__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 0, 1, 0LL, v5);
  }
}


void __fastcall CombineExpUpInfo__OnClickRight(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x5

  if ( (byte_49FFD7D & 1) == 0 )
  {
    sub_1B640C8(&Method_CombineExpUpInfo_OnClickRight__, method);
    byte_49FFD7D = 1;
  }
  if ( this->fields.nowType != 2 )
  {
    v3 = Method_CombineExpUpInfo_OnClickRight__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickRight__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_CombineExpUpInfo_OnClickRight__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
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
  if ( (byte_49FFD7A & 1) == 0 )
  {
    sub_1B640C8(&CombineExpUpInfo_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&StringLiteral_22117/*"off"*/, v7);
    sub_1B640C8(&StringLiteral_17399/*"btn_bg_02_on"*/, v8);
    sub_1B640C8(&StringLiteral_22147/*"on"*/, v9);
    sub_1B640C8(&StringLiteral_17596/*"button_total"*/, v10);
    sub_1B640C8(&StringLiteral_17595/*"button_storage"*/, v11);
    sub_1B640C8(&StringLiteral_17590/*"button_possess"*/, v12);
    this = (CombineExpUpInfo_o *)sub_1B640C8(&StringLiteral_17398/*"btn_bg_02_off"*/, v13);
    byte_49FFD7A = 1;
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
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17399/*"btn_bg_02_on"*/, 0LL);
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
      v24 = (System_String_o *)StringLiteral_22147/*"on"*/;
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v25 = v6->fields.btnSpriteList;
      if ( !v25 )
        goto LABEL_47;
      if ( v14 >= v25->max_length )
LABEL_48:
        sub_1B6432C(this, *(_QWORD *)&kind);
      this = (CombineExpUpInfo_o *)v25->m_Items[v14];
      if ( !this )
        goto LABEL_47;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17398/*"btn_bg_02_off"*/, 0LL);
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
      v24 = (System_String_o *)StringLiteral_22117/*"off"*/;
    }
    this = (CombineExpUpInfo_o *)System_String__Concat_61375396(v23, v24, 0LL);
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
        v30 = &StringLiteral_17596/*"button_total"*/;
        goto LABEL_45;
      }
LABEL_47:
      sub_1B64324(this);
    case 1:
      this = (CombineExpUpInfo_o *)v6->fields.btnChangeSprite;
      if ( this )
      {
        v30 = &StringLiteral_17595/*"button_storage"*/;
        goto LABEL_45;
      }
      goto LABEL_47;
    case 0:
      this = (CombineExpUpInfo_o *)v6->fields.btnChangeSprite;
      if ( this )
      {
        v30 = &StringLiteral_17590/*"button_possess"*/;
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