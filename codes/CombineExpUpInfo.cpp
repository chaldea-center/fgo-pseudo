void __fastcall CombineExpUpInfo___cctor(const MethodInfo *method)
{
  if ( (byte_4A5EB69 & 1) == 0 )
  {
    sub_1B885B0(&CombineExpUpInfo_TypeInfo);
    byte_4A5EB69 = 1;
  }
  *CombineExpUpInfo_TypeInfo->static_fields = (struct CombineExpUpInfo_StaticFields)xmmword_BB3CF0;
}


void __fastcall CombineExpUpInfo___ctor(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x20
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_List_T__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x9
  _QWORD *v21; // x8
  __int64 size; // x10
  __int64 v23; // x10
  __int64 v24; // x10
  __int64 v25; // x10
  __int64 v26; // x10
  __int64 v27; // x10
  __int64 v28; // x10
  __int64 v29; // x10

  if ( (byte_4A5EB68 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_17513/*"btn_hp_"*/);
    sub_1B885B0(&StringLiteral_17463/*"btn_atk_"*/);
    sub_1B885B0(&StringLiteral_17509/*"btn_experience_"*/);
    byte_4A5EB68 = 1;
  }
  v3 = sub_1B88658(string___TypeInfo, 3LL);
  if ( !v3 )
    goto LABEL_34;
  v7 = v3;
  if ( !*(_DWORD *)(v3 + 24)
    || (v8 = StringLiteral_17509/*"btn_experience_"*/,
        *(_QWORD *)(v3 + 32) = StringLiteral_17509/*"btn_experience_"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), v8, v5, v6),
        *(_DWORD *)(v7 + 24) <= 1u)
    || (v11 = StringLiteral_17463/*"btn_atk_"*/,
        *(_QWORD *)(v7 + 40) = StringLiteral_17463/*"btn_atk_"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), v11, v9, v10),
        *(_DWORD *)(v7 + 24) <= 2u) )
  {
    sub_1B88814(v3, v4);
  }
  v14 = StringLiteral_17513/*"btn_hp_"*/;
  *(_QWORD *)(v7 + 48) = StringLiteral_17513/*"btn_hp_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), v14, v12, v13);
  this->fields.btnSpriteNameList = (struct System_String_array *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.btnSpriteNameList, v7, v15, v16);
  v17 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v17,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__);
  if ( !v17 )
    goto LABEL_34;
  items = v17->fields._items;
  v21 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
  ++v17->fields._version;
  if ( !items )
    goto LABEL_34;
  size = v17->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v17,
      1,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    items = v17->fields._items;
    v21 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v17->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v17->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 1;
    ++v17->fields._version;
  }
  v23 = v17->fields._size;
  if ( (unsigned int)v23 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v17,
      2,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    items = v17->fields._items;
    v21 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v17->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v17->fields._size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 2;
    ++v17->fields._version;
  }
  v24 = v17->fields._size;
  if ( (unsigned int)v24 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v17,
      3,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    items = v17->fields._items;
    v21 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v17->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v17->fields._size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 3;
    ++v17->fields._version;
  }
  v25 = v17->fields._size;
  if ( (unsigned int)v25 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v17,
      4,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    items = v17->fields._items;
    v21 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v17->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v17->fields._size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 4;
    ++v17->fields._version;
  }
  v26 = v17->fields._size;
  if ( (unsigned int)v26 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v17,
      5,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    items = v17->fields._items;
    v21 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v17->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v17->fields._size = v26 + 1;
    *((_DWORD *)items->m_Items + v26) = 5;
    ++v17->fields._version;
  }
  v27 = v17->fields._size;
  if ( (unsigned int)v27 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v17,
      6,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    items = v17->fields._items;
    v21 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
    ++v17->fields._version;
    if ( !items )
      goto LABEL_34;
  }
  else
  {
    v17->fields._size = v27 + 1;
    *((_DWORD *)items->m_Items + v27) = 6;
    ++v17->fields._version;
  }
  v28 = v17->fields._size;
  if ( (unsigned int)v28 < items->max_length )
  {
    v17->fields._size = v28 + 1;
    *((_DWORD *)items->m_Items + v28) = 7;
    ++v17->fields._version;
    goto LABEL_30;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v17,
    7,
    *(const MethodInfo_34E303C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  items = v17->fields._items;
  v21 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
  ++v17->fields._version;
  if ( !items )
LABEL_34:
    sub_1B8880C(v3, v4);
LABEL_30:
  v29 = v17->fields._size;
  if ( (unsigned int)v29 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v17,
      1001,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v17->fields._size = v29 + 1;
    *((_DWORD *)items->m_Items + v29) = 1001;
  }
  this->fields.SortClassOrder = (struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.SortClassOrder, (int32_t)v17, v18, v19);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall CombineExpUpInfo__ExpUpInfoSet(
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
  System_Int32_array *v21; // x22
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
  il2cpp_array_size_t v39; // w10
  __int64 v40; // x9
  char *v41; // x11
  struct CombineExpUpClassInfo_array *expUpClassInfoList; // x9
  int32_t v43; // w1
  int32_t v44; // w4
  int32_t v45; // w5
  struct CombineExpUpClassInfo_array *v46; // x8
  struct CombineExpUpClassInfo_array *v47; // x8
  System_Int32_array *v48; // x2
  System_Int32_array *v49; // x3

  if ( (byte_4A5EB60 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76052560);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_int____TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SvtClassAttri_TypeInfo);
    byte_4A5EB60 = 1;
  }
  this->fields.nowKind = kind;
  this->fields.nowType = type;
  if ( afterAction )
  {
    this->fields.changeAction = afterAction;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.changeAction, (int32_t)afterAction, type, isFirst);
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
  v12 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_int_____ctor__);
  v13 = SvtClassAttri_TypeInfo;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v13 = SvtClassAttri_TypeInfo;
  }
  v14 = sub_1B88658(int___TypeInfo, v13->static_fields->MAX_EXP_UP_RARITY);
  Instance = (DataManager_o *)sub_1B88658(int___TypeInfo, SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY);
  SortClassOrder = this->fields.SortClassOrder;
  if ( !SortClassOrder )
    goto LABEL_76;
  nowKind = this->fields.nowKind;
  size = (unsigned int)SortClassOrder->fields._size;
  v21 = (System_Int32_array *)Instance;
  switch ( nowKind )
  {
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !MasterData_object )
        goto LABEL_76;
      v24 = (UserServantStorageMaster_o *)Instance;
      CombineMaterialList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                             (UserServantMaster_o *)MasterData_object,
                                                                             0LL);
      v26 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor_55562536(
        v26,
        CombineMaterialList,
        (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76052560);
      if ( !v24 )
        goto LABEL_76;
      Instance = (DataManager_o *)UserServantStorageMaster__getList(v24, 0LL);
      if ( !v26 )
        goto LABEL_76;
      System_Collections_Generic_List_object___AddRange(
        v26,
        (System_Collections_Generic_IEnumerable_T__o *)Instance,
        (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      List = (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v26,
                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      goto LABEL_25;
    case 1:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !Instance )
        goto LABEL_76;
      List = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0LL);
      goto LABEL_25;
    case 0:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_76;
      List = UserServantMaster__getCombineMaterialList((UserServantMaster_o *)Instance, 0LL);
LABEL_25:
      v27 = List;
      goto LABEL_27;
  }
  v27 = 0LL;
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
               (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Item__);
      if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
      ClassId = (CombineExpUpInfo_o *)SvtClassAttri__getClassId(Item, 0LL);
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
            goto LABEL_77;
          *(_DWORD *)(v14 + 4LL * (int)v39 + 32) = *(_DWORD *)(v40 + 16);
          if ( !v21 )
            break;
          if ( v39 >= v21->max_length )
            goto LABEL_77;
          v41 = (char *)v21 + 4 * (int)v39++;
          *((_DWORD *)v41 + 8) = *(_DWORD *)(v40 + 20);
          if ( (_DWORD)m_CancellationTokenSource == v39 )
            goto LABEL_48;
        }
LABEL_76:
        sub_1B8880C(Instance, v16);
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
            if ( v34 == 1001 )
            {
              v43 = 1001;
              v44 = 1;
              v45 = 4;
              goto LABEL_70;
            }
            v44 = 2;
LABEL_69:
            v45 = 3;
            v43 = v34;
LABEL_70:
            v48 = (System_Int32_array *)v14;
            v49 = v21;
LABEL_71:
            CombineExpUpClassInfo__Set((CombineExpUpClassInfo_o *)Instance, v43, v48, v49, v44, v45, v36);
            continue;
          }
          if ( v34 != 1001 )
          {
            v44 = 1;
            goto LABEL_69;
          }
          v43 = 1001;
          v45 = 4;
        }
        else
        {
          v47 = this->fields.expUpClassInfoList;
          if ( !v47 )
            goto LABEL_76;
          if ( i >= v47->max_length )
LABEL_77:
            sub_1B88814(Instance, v16);
          Instance = (DataManager_o *)v47->m_Items[i];
          if ( !Instance )
            goto LABEL_76;
          v45 = 5;
          v43 = v34;
        }
        v48 = (System_Int32_array *)v14;
        v49 = v21;
        v44 = 0;
        goto LABEL_71;
      }
      v46 = this->fields.expUpClassInfoList;
      if ( !v46 )
        goto LABEL_76;
      if ( i >= v46->max_length )
        goto LABEL_77;
      Instance = (DataManager_o *)v46->m_Items[i];
      if ( !Instance )
        goto LABEL_76;
      CombineExpUpClassInfo__Set_45121896((CombineExpUpClassInfo_o *)Instance, v21, v35);
    }
  }
  CombineExpUpInfo__SetBtnState(this, this->fields.nowKind, this->fields.nowType, v17);
  LOBYTE(Instance) = 1;
  return (char)Instance;
}


CombineExpUpInfo_MaterialData_array *__fastcall CombineExpUpInfo__GetTargetClassMaterialInfo(
        CombineExpUpInfo_o *this,
        UserServantEntity_array *svtList,
        int32_t classId,
        const MethodInfo *method)
{
  SvtClassAttri_c *v6; // x0
  CombineExpUpInfo_MaterialData_array *v7; // x21
  __int64 Instance; // x0
  __int64 v9; // x1
  System_Int32_array *TargetClassMaterialSvtIdList; // x0
  System_Int32_array *v11; // x22
  __int64 v12; // x25
  unsigned __int64 v13; // x26
  CombineExpUpInfo_MaterialData_o **m_Items; // x27
  signed __int64 v15; // x10
  Il2CppObject *v16; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v20; // x23
  bool v21; // zf
  unsigned __int64 max_length; // x10
  __int64 v23; // x11
  unsigned __int64 v24; // x8
  __int64 v25; // x14
  int32_t v26; // w15
  __int64 v27; // x8
  int v28; // w23
  int v29; // w25
  Il2CppClass **v30; // x8
  UserServantEntity_o *v31; // x22
  SvtClassAttri_c *v32; // x0
  int32_t MAX_EXP_UP_RARITY; // w26
  CombineExpUpInfo_MaterialData_o *v34; // x8
  __int64 v35; // x0

  if ( (byte_4A5EB61 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&CombineExpUpInfo_MaterialData___TypeInfo);
    sub_1B885B0(&CombineExpUpInfo_MaterialData_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SvtClassAttri_TypeInfo);
    byte_4A5EB61 = 1;
  }
  v6 = SvtClassAttri_TypeInfo;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v6 = SvtClassAttri_TypeInfo;
  }
  v7 = (CombineExpUpInfo_MaterialData_array *)sub_1B88658(
                                                CombineExpUpInfo_MaterialData___TypeInfo,
                                                v6->static_fields->MAX_EXP_UP_RARITY);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_47;
  TargetClassMaterialSvtIdList = ServantMaster__GetTargetClassMaterialSvtIdList(
                                   (ServantMaster_o *)Instance,
                                   classId,
                                   0LL);
  if ( !TargetClassMaterialSvtIdList )
    return 0LL;
  v11 = TargetClassMaterialSvtIdList;
  if ( !*(_QWORD *)&TargetClassMaterialSvtIdList->max_length )
    return 0LL;
  v12 = 0LL;
  v13 = 0LL;
  m_Items = v7->m_Items;
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
    v16 = (Il2CppObject *)sub_1B887FC(CombineExpUpInfo_MaterialData_TypeInfo);
    System_Object___ctor(v16, 0LL);
    if ( !v7 )
      goto LABEL_47;
    if ( v16 )
    {
      Instance = sub_1B886EC(v16, v7->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v35 = sub_1B88830(0LL);
        sub_1B886D8(v35, 0LL);
      }
    }
    if ( v13 >= v7->max_length )
      goto LABEL_46;
    m_Items[v13] = (CombineExpUpInfo_MaterialData_o *)v16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&m_Items[v12], (int32_t)v16, v17, v18);
    ++v13;
    ++v12;
  }
  v20 = *(_QWORD *)&v11->max_length;
  if ( !*(_DWORD *)(Instance + 224) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    LODWORD(v15) = SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY;
  }
  if ( (int)v20 >= 1 )
  {
    if ( v7 )
    {
      v21 = (_DWORD)v15 == (_DWORD)v20;
      max_length = v7->max_length;
      v23 = !v21;
      v24 = 0LL;
      while ( v23 + v24 < max_length && v24 < v11->max_length )
      {
        v25 = *((_QWORD *)&v7->m_Items[(unsigned int)v23] + v24);
        if ( !v25 )
          goto LABEL_47;
        v26 = v11->m_Items[++v24];
        *(_DWORD *)(v25 + 16) = v26;
        if ( (unsigned int)v20 == v24 )
          goto LABEL_32;
      }
LABEL_46:
      sub_1B88814(Instance, v9);
    }
LABEL_47:
    sub_1B8880C(Instance, v9);
  }
LABEL_32:
  if ( !svtList )
    goto LABEL_47;
  v27 = *(_QWORD *)&svtList->max_length;
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
      Instance = UserServantEntity__IsCombineMaterial((UserServantEntity_o *)v30[4], 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = UserServantEntity__getSvtClassId(v31, 0, 0LL);
        if ( (_DWORD)Instance == classId )
        {
          v32 = SvtClassAttri_TypeInfo;
          if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
            v32 = SvtClassAttri_TypeInfo;
          }
          MAX_EXP_UP_RARITY = v32->static_fields->MAX_EXP_UP_RARITY;
          Instance = UserServantEntity__getRarity(v31, 0LL);
          if ( !v7 )
            goto LABEL_47;
          if ( (unsigned int)(MAX_EXP_UP_RARITY - Instance) >= v7->max_length )
            goto LABEL_46;
          v34 = v7->m_Items[MAX_EXP_UP_RARITY - (int)Instance];
          if ( !v34 )
            goto LABEL_47;
          ++v34->fields.num;
        }
      }
      if ( v28 == v29 )
        return v7;
      if ( ++v29 >= svtList->max_length )
        goto LABEL_46;
    }
  }
  return v7;
}


CombineExpUpInfo_MaterialData_array *__fastcall CombineExpUpInfo__GetTargetClassStatusUpInfo(
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
  __int64 v13; // x8
  Il2CppObject *v14; // x23
  int v15; // w22
  unsigned __int64 v16; // x27
  int32_t *v17; // x29
  int32_t v18; // w26
  ServantLeaderInfo_o *v19; // x25
  char *v20; // x9
  CombineExpUpInfo_MaterialData_array *v21; // x24
  il2cpp_array_size_t v22; // w27
  Il2CppObject *v23; // x25
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x29
  Il2CppClass **v27; // x26
  ServantStatusBattleListViewItem_o *v28; // x26
  __int64 v29; // x8
  int v30; // w25
  int v31; // w26
  Il2CppClass **v32; // x8
  UserServantEntity_o *v33; // x23
  CombineExpUpInfo_MaterialData_o *v34; // x8
  __int64 v36; // x0

  if ( (byte_4A5EB62 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&CombineExpUpInfo_MaterialData___TypeInfo);
    sub_1B885B0(&CombineExpUpInfo_MaterialData_TypeInfo);
    sub_1B885B0(&ServantLeaderInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SvtClassAttri_TypeInfo);
    byte_4A5EB62 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_59;
  TargetClassStatusUpSvtIdList = ServantMaster__GetTargetClassStatusUpSvtIdList(
                                   (ServantMaster_o *)Instance,
                                   classId,
                                   0LL);
  v11 = SvtClassAttri_TypeInfo;
  v12 = TargetClassStatusUpSvtIdList;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v11 = SvtClassAttri_TypeInfo;
  }
  Instance = (Il2CppObject *)sub_1B88658(int___TypeInfo, v11->static_fields->MAX_EXP_UP_RARITY);
  if ( !v12 )
    goto LABEL_59;
  v13 = *(_QWORD *)&v12->max_length;
  v14 = Instance;
  if ( (int)v13 < 1 )
    return 0LL;
  v15 = 0;
  v16 = 0LL;
  v17 = &v12->m_Items[1];
  do
  {
    if ( v16 >= (unsigned int)v13 )
LABEL_56:
      sub_1B88814(Instance, v9);
    v18 = v17[v16];
    v19 = (ServantLeaderInfo_o *)sub_1B887FC(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_40485696(v19, v18, 0, 1, 0LL);
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
    if ( v16 >= v12->max_length )
      goto LABEL_56;
    if ( !v14 )
      goto LABEL_59;
    if ( (unsigned int)v15 >= LODWORD(v14[1].monitor) )
      goto LABEL_56;
    v20 = (char *)v14 + 4 * v15++;
    *((_DWORD *)v20 + 8) = v17[v16];
LABEL_24:
    LODWORD(v13) = v12->max_length;
    ++v16;
  }
  while ( (__int64)v16 < (int)v13 );
  if ( !v15 )
    return 0LL;
  Instance = (Il2CppObject *)sub_1B88658(CombineExpUpInfo_MaterialData___TypeInfo, (unsigned int)v15);
  v21 = (CombineExpUpInfo_MaterialData_array *)Instance;
  if ( v15 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      v23 = (Il2CppObject *)sub_1B887FC(CombineExpUpInfo_MaterialData_TypeInfo);
      System_Object___ctor(v23, 0LL);
      if ( !v21 )
        break;
      if ( v23 )
      {
        Instance = (Il2CppObject *)sub_1B886EC(v23, v21->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v36 = sub_1B88830(0LL);
          sub_1B886D8(v36, 0LL);
        }
      }
      if ( v22 >= v21->max_length )
        goto LABEL_56;
      v26 = (int)v22;
      v27 = &v21->obj.klass + (int)v22;
      v27[4] = (Il2CppClass *)v23;
      v28 = (ServantStatusBattleListViewItem_o *)(v27 + 4);
      sub_1B88554(v28, (int32_t)v23, v24, v25);
      if ( v22 >= v21->max_length )
        goto LABEL_56;
      if ( !v14 )
        break;
      if ( v22 >= LODWORD(v14[1].monitor) )
        goto LABEL_56;
      if ( !v28->klass )
        break;
      ++v22;
      LODWORD(v28->klass->_1.name) = *((_DWORD *)&v14[2].klass + v26);
      if ( v15 == v22 )
        goto LABEL_37;
    }
LABEL_59:
    sub_1B8880C(Instance, v9);
  }
LABEL_37:
  if ( !svtList )
    goto LABEL_59;
  v29 = *(_QWORD *)&svtList->max_length;
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
      Instance = (Il2CppObject *)UserServantEntity__IsStatusUp((UserServantEntity_o *)v32[4], 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (Il2CppObject *)UserServantEntity__getSvtClassId(v33, 0, 0LL);
        if ( (_DWORD)Instance == classId )
        {
          if ( type == 2 )
          {
            if ( v33->fields.hp || v33->fields.adjustHp )
            {
LABEL_50:
              Instance = (Il2CppObject *)UserServantEntity__getRarity(v33, 0LL);
              if ( !v21 )
                goto LABEL_59;
              if ( v15 - (int)Instance >= v21->max_length )
                goto LABEL_56;
              v34 = v21->m_Items[v15 - (int)Instance];
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
        return v21;
      if ( ++v31 >= svtList->max_length )
        goto LABEL_56;
    }
  }
  return v21;
}


void __fastcall CombineExpUpInfo__OnClickCenter(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x5

  if ( (byte_4A5EB65 & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineExpUpInfo_OnClickCenter__);
    byte_4A5EB65 = 1;
  }
  if ( this->fields.nowType != 1 )
  {
    v3 = Method_CombineExpUpInfo_OnClickCenter__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickCenter__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CombineExpUpInfo_OnClickCenter__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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

  if ( (byte_4A5EB67 & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineExpUpInfo_OnClickChangeButton__);
    byte_4A5EB67 = 1;
  }
  v3 = Method_CombineExpUpInfo_OnClickChangeButton__;
  if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickChangeButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_CombineExpUpInfo_OnClickChangeButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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

  if ( (byte_4A5EB64 & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineExpUpInfo_OnClickLeft__);
    byte_4A5EB64 = 1;
  }
  if ( this->fields.nowType )
  {
    v3 = Method_CombineExpUpInfo_OnClickLeft__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickLeft__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CombineExpUpInfo_OnClickLeft__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 0, 1, 0LL, v5);
  }
}


void __fastcall CombineExpUpInfo__OnClickRight(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x5

  if ( (byte_4A5EB66 & 1) == 0 )
  {
    sub_1B885B0(&Method_CombineExpUpInfo_OnClickRight__);
    byte_4A5EB66 = 1;
  }
  if ( this->fields.nowType != 2 )
  {
    v3 = Method_CombineExpUpInfo_OnClickRight__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickRight__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CombineExpUpInfo_OnClickRight__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
  if ( (byte_4A5EB63 & 1) == 0 )
  {
    sub_1B885B0(&CombineExpUpInfo_TypeInfo);
    sub_1B885B0(&StringLiteral_22205/*"off"*/);
    sub_1B885B0(&StringLiteral_17469/*"btn_bg_02_on"*/);
    sub_1B885B0(&StringLiteral_22235/*"on"*/);
    sub_1B885B0(&StringLiteral_17666/*"button_total"*/);
    sub_1B885B0(&StringLiteral_17665/*"button_storage"*/);
    sub_1B885B0(&StringLiteral_17660/*"button_possess"*/);
    this = (CombineExpUpInfo_o *)sub_1B885B0(&StringLiteral_17468/*"btn_bg_02_off"*/);
    byte_4A5EB63 = 1;
  }
  v7 = 0LL;
  v8 = (unsigned int)type;
  do
  {
    btnObjList = v6->fields.btnObjList;
    if ( !btnObjList )
      goto LABEL_47;
    if ( v7 >= btnObjList->max_length )
      goto LABEL_48;
    this = (CombineExpUpInfo_o *)btnObjList->m_Items[v7];
    if ( !this )
      goto LABEL_47;
    if ( v8 == v7 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      btnSpriteList = v6->fields.btnSpriteList;
      if ( !btnSpriteList )
        goto LABEL_47;
      if ( btnSpriteList->max_length <= v8 )
        goto LABEL_48;
      this = (CombineExpUpInfo_o *)btnSpriteList->m_Items[v8];
      if ( !this )
        goto LABEL_47;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17469/*"btn_bg_02_on"*/, 0LL);
      v11 = v6->fields.btnSpriteList;
      if ( !v11 )
        goto LABEL_47;
      if ( v11->max_length <= v8 )
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
        0LL);
      btnTxtSpriteList = v6->fields.btnTxtSpriteList;
      if ( !btnTxtSpriteList )
        goto LABEL_47;
      if ( btnTxtSpriteList->max_length <= v8 )
        goto LABEL_48;
      btnSpriteNameList = v6->fields.btnSpriteNameList;
      if ( !btnSpriteNameList )
        goto LABEL_47;
      if ( btnSpriteNameList->max_length <= v8 )
        goto LABEL_48;
      v15 = btnTxtSpriteList->m_Items[v8];
      v16 = btnSpriteNameList->m_Items[v8];
      v17 = (System_String_o *)StringLiteral_22235/*"on"*/;
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v18 = v6->fields.btnSpriteList;
      if ( !v18 )
        goto LABEL_47;
      if ( v7 >= v18->max_length )
LABEL_48:
        sub_1B88814(this, *(_QWORD *)&kind);
      this = (CombineExpUpInfo_o *)v18->m_Items[v7];
      if ( !this )
        goto LABEL_47;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17468/*"btn_bg_02_off"*/, 0LL);
      v19 = v6->fields.btnSpriteList;
      if ( !v19 )
        goto LABEL_47;
      if ( v7 >= v19->max_length )
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
        0LL);
      v21 = v6->fields.btnTxtSpriteList;
      if ( !v21 )
        goto LABEL_47;
      if ( v7 >= v21->max_length )
        goto LABEL_48;
      v22 = v6->fields.btnSpriteNameList;
      if ( !v22 )
        goto LABEL_47;
      if ( v7 >= v22->max_length )
        goto LABEL_48;
      v15 = v21->m_Items[v7];
      v16 = v22->m_Items[v7];
      v17 = (System_String_o *)StringLiteral_22205/*"off"*/;
    }
    this = (CombineExpUpInfo_o *)System_String__Concat_61707032(v16, v17, 0LL);
    if ( !v15 )
      goto LABEL_47;
    UISprite__set_spriteName(v15, (System_String_o *)this, 0LL);
    ++v7;
  }
  while ( v7 != 3 );
  switch ( kind )
  {
    case 2:
      this = (CombineExpUpInfo_o *)v6->fields.btnChangeSprite;
      if ( this )
      {
        v23 = &StringLiteral_17666/*"button_total"*/;
        goto LABEL_45;
      }
LABEL_47:
      sub_1B8880C(this, *(_QWORD *)&kind);
    case 1:
      this = (CombineExpUpInfo_o *)v6->fields.btnChangeSprite;
      if ( this )
      {
        v23 = &StringLiteral_17665/*"button_storage"*/;
        goto LABEL_45;
      }
      goto LABEL_47;
    case 0:
      this = (CombineExpUpInfo_o *)v6->fields.btnChangeSprite;
      if ( this )
      {
        v23 = &StringLiteral_17660/*"button_possess"*/;
LABEL_45:
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v23, 0LL);
        return;
      }
      goto LABEL_47;
  }
}


void __fastcall CombineExpUpInfo_MaterialData___ctor(CombineExpUpInfo_MaterialData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}