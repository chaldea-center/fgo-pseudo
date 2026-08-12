void CombineExpUpInfo___cctor(const MethodInfo *method)
{
  if ( (byte_596A28C & 1) == 0 )
  {
    sub_2213A60(&CombineExpUpInfo_TypeInfo);
    byte_596A28C = 1;
  }
  *CombineExpUpInfo_TypeInfo->static_fields = (struct CombineExpUpInfo_StaticFields)xmmword_E9D7B0;
}


void CombineExpUpInfo___ctor(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x20
  int32_t v12; // w1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // w1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_List_T__o *v33; // x20
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  __int64 v43; // x10
  __int64 v44; // x10
  __int64 v45; // x10
  __int64 v46; // x10
  __int64 v47; // x10
  __int64 v48; // x10
  __int64 v49; // x10

  if ( (byte_596A28B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_18261/*"btn_hp_"*/);
    sub_2213A60(&StringLiteral_18193/*"btn_atk_"*/);
    sub_2213A60(&StringLiteral_18249/*"btn_experience_"*/);
    byte_596A28B = 1;
  }
  v3 = sub_2213B20(string___TypeInfo, 3);
  if ( !v3 )
    goto LABEL_34;
  v11 = v3;
  if ( !*(_DWORD *)(v3 + 24)
    || (v12 = StringLiteral_18249/*"btn_experience_"*/,
        *(_QWORD *)(v3 + 32) = StringLiteral_18249/*"btn_experience_"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), v12, v5, v6, v7, v8, v9, v10),
        (*(_DWORD *)(v11 + 24) & 0xFFFFFFFE) == 0)
    || (v19 = StringLiteral_18193/*"btn_atk_"*/,
        *(_QWORD *)(v11 + 40) = StringLiteral_18193/*"btn_atk_"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 40), v19, v13, v14, v15, v16, v17, v18),
        *(_DWORD *)(v11 + 24) <= 2u) )
  {
    sub_2213CE4(v3);
  }
  v26 = StringLiteral_18261/*"btn_hp_"*/;
  *(_QWORD *)(v11 + 48) = StringLiteral_18261/*"btn_hp_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 48), v26, v20, v21, v22, v23, v24, v25);
  this->fields.btnSpriteNameList = (struct System_String_array *)v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.btnSpriteNameList, v11, v27, v28, v29, v30, v31, v32);
  v33 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v33,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__);
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
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
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
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
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
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
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
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
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
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
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
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
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
    *(const MethodInfo_4469A88 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  items = v33->fields._items;
  v41 = Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__;
  ++v33->fields._version;
  if ( !items )
LABEL_34:
    sub_2213CDC(v3, v4);
LABEL_30:
  v49 = v33->fields._size;
  if ( (unsigned int)v49 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v33,
      1001,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v33->fields._size = v49 + 1;
    *((_DWORD *)items->m_Items + v49) = 1001;
  }
  this->fields.SortClassOrder = (struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *)v33;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.SortClassOrder,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
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
  bool v6; // w6
  bool v7; // w7
  struct System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *changeAction; // x8
  System_Collections_Generic_List_object__o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  SvtClassAttri_c *v17; // x0
  __int64 v18; // x21
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *SortClassOrder; // x9
  int32_t nowKind; // w8
  unsigned __int64 size; // x29
  DataManager_o *v25; // x22
  UserServantEntity_array *List; // x0
  Il2CppObject *MasterData_object; // x24
  UserServantStorageMaster_o *v28; // x23
  System_Collections_Generic_IEnumerable_T__o *CombineMaterialList; // x25
  System_Collections_Generic_List_object__o *v30; // x24
  UserServantEntity_array *v31; // x23
  unsigned __int64 v32; // x24
  bool v33; // w28
  __int64 v34; // x1
  __int64 v35; // x2
  int32_t Item; // w25
  CombineExpUpInfo_o *ClassId; // x0
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x4
  int32_t nowType; // w8
  int32_t v41; // w25
  CombineExpUpInfo_MaterialData_array *TargetClassMaterialInfo; // x0
  CombineExpUpInfo_o *v43; // x0
  UserServantEntity_array *v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  CombineExpUpInfo_MaterialData_array *v47; // x26
  il2cpp_array_size_t max_length; // x1
  int32_t v49; // w2
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x6
  il2cpp_array_size_t v52; // x5
  __int64 v53; // x9
  CombineExpUpInfo_MaterialData_o *v54; // x13
  unsigned int m_CancellationTokenSource; // w14
  struct CombineExpUpClassInfo_array *expUpClassInfoList; // x9
  int32_t v57; // w1
  System_Int32_array *v58; // x2
  System_Int32_array *v59; // x3
  int32_t v60; // w4
  struct CombineExpUpClassInfo_array *v61; // x8
  struct CombineExpUpClassInfo_array *v62; // x8

  if ( (byte_596A282 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity___ctor___91670816);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_int____TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SvtClassAttri_TypeInfo);
    byte_596A282 = 1;
  }
  this->fields.nowKind = kind;
  this->fields.nowType = type;
  if ( afterAction )
  {
    this->fields.changeAction = afterAction;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.changeAction,
      (int32_t)afterAction,
      *(System_String_o **)&type,
      (System_String_o *)isFirst,
      (int32_t)afterAction,
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
  v14 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_int_____ctor__);
  v17 = SvtClassAttri_TypeInfo;
  if ( !*(&SvtClassAttri_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v15, v16);
    v17 = SvtClassAttri_TypeInfo;
  }
  v18 = sub_2213B20(int___TypeInfo, (unsigned int)v17->static_fields->MAX_EXP_UP_RARITY);
  Instance = (DataManager_o *)sub_2213B20(
                                int___TypeInfo,
                                (unsigned int)SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY);
  SortClassOrder = this->fields.SortClassOrder;
  if ( !SortClassOrder )
    goto LABEL_80;
  nowKind = this->fields.nowKind;
  size = (unsigned int)SortClassOrder->fields._size;
  v25 = Instance;
  switch ( nowKind )
  {
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_80;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_80;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !MasterData_object )
        goto LABEL_80;
      v28 = (UserServantStorageMaster_o *)Instance;
      CombineMaterialList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                             (UserServantMaster_o *)MasterData_object,
                                                                             0);
      v30 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor_71841080(
        v30,
        CombineMaterialList,
        (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___91670816);
      if ( !v28 )
        goto LABEL_80;
      Instance = (DataManager_o *)UserServantStorageMaster__getList(v28, 0);
      if ( !v30 )
        goto LABEL_80;
      System_Collections_Generic_List_object___AddRange(
        v30,
        (System_Collections_Generic_IEnumerable_T__o *)Instance,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      List = (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v30,
                                          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      goto LABEL_25;
    case 1:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_80;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !Instance )
        goto LABEL_80;
      List = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0);
      goto LABEL_25;
    case 0:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_80;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_80;
      List = UserServantMaster__getCombineMaterialList((UserServantMaster_o *)Instance, 0);
LABEL_25:
      v31 = List;
      goto LABEL_27;
  }
  v31 = 0;
LABEL_27:
  if ( (int)size >= 1 )
  {
    v32 = 0;
    v33 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.SortClassOrder;
      if ( !Instance )
        goto LABEL_80;
      Item = System_Collections_Generic_List_Int32Enum___get_Item(
               (System_Collections_Generic_List_T__o *)Instance,
               v32,
               (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Item__);
      if ( !*(&SvtClassAttri_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v34, v35);
      ClassId = (CombineExpUpInfo_o *)SvtClassAttri__getClassId(Item, 0);
      nowType = this->fields.nowType;
      v41 = (int)ClassId;
      if ( nowType == 1 )
        break;
      if ( nowType )
      {
        v43 = this;
        v44 = v31;
        v45 = v41;
        v46 = 2;
        goto LABEL_37;
      }
      TargetClassMaterialInfo = CombineExpUpInfo__GetTargetClassMaterialInfo(ClassId, v31, (int32_t)ClassId, v38);
LABEL_38:
      v47 = TargetClassMaterialInfo;
      if ( !TargetClassMaterialInfo )
        return v33;
      max_length = TargetClassMaterialInfo->max_length;
      if ( !max_length )
        return v33;
      if ( !v18 || (v49 = *(_DWORD *)(v18 + 24), v49 != (_DWORD)max_length) )
      {
        v18 = sub_2213B20(int___TypeInfo, max_length);
        Instance = (DataManager_o *)sub_2213B20(int___TypeInfo, LODWORD(v47->max_length));
        if ( !v18 )
          goto LABEL_80;
        v49 = *(_DWORD *)(v18 + 24);
        v25 = Instance;
      }
      System_Array__Clear((System_Array_o *)v18, 0, v49, 0);
      if ( !v25 )
        goto LABEL_80;
      System_Array__Clear((System_Array_o *)v25, 0, (int32_t)v25->fields.m_CancellationTokenSource, 0);
      v52 = v47->max_length;
      if ( (int)v52 >= 1 )
      {
        v53 = 0;
        while ( 1 )
        {
          v54 = v47->m_Items[v53];
          if ( !v54 )
            break;
          if ( (unsigned int)v53 >= *(_DWORD *)(v18 + 24) )
            goto LABEL_79;
          m_CancellationTokenSource = (unsigned int)v25->fields.m_CancellationTokenSource;
          *(_DWORD *)(v18 + 32 + 4 * v53) = v54->fields.svtId;
          if ( (unsigned int)v53 >= m_CancellationTokenSource )
            goto LABEL_79;
          *((_DWORD *)&v25->fields._DispLog + v53++) = v54->fields.num;
          if ( (_DWORD)v52 == (_DWORD)v53 )
            goto LABEL_51;
        }
LABEL_80:
        sub_2213CDC(Instance, v20);
      }
LABEL_51:
      if ( isFirst )
      {
        if ( this->fields.nowType )
        {
          expUpClassInfoList = this->fields.expUpClassInfoList;
          if ( v41 == 1001 )
          {
            if ( !expUpClassInfoList )
              goto LABEL_80;
            if ( v32 >= LODWORD(expUpClassInfoList->max_length) )
              goto LABEL_79;
            Instance = (DataManager_o *)expUpClassInfoList->m_Items[v32];
            if ( !Instance )
              goto LABEL_80;
            v57 = 1001;
            v58 = (System_Int32_array *)v18;
            v59 = (System_Int32_array *)v25;
            v60 = 0;
          }
          else
          {
            if ( !expUpClassInfoList )
              goto LABEL_80;
            if ( v32 >= LODWORD(expUpClassInfoList->max_length) )
LABEL_79:
              sub_2213CE4(Instance);
            Instance = (DataManager_o *)expUpClassInfoList->m_Items[v32];
            if ( !Instance )
              goto LABEL_80;
            v57 = v41;
            if ( (unsigned int)v52 == 6 )
              v60 = 2;
            else
              v60 = 1;
            v58 = (System_Int32_array *)v18;
            v59 = (System_Int32_array *)v25;
            LODWORD(v52) = 3;
          }
        }
        else
        {
          v62 = this->fields.expUpClassInfoList;
          if ( !v62 )
            goto LABEL_80;
          if ( v32 >= LODWORD(v62->max_length) )
            goto LABEL_79;
          Instance = (DataManager_o *)v62->m_Items[v32];
          if ( !Instance )
            goto LABEL_80;
          v57 = v41;
          v58 = (System_Int32_array *)v18;
          v59 = (System_Int32_array *)v25;
          v60 = 0;
          LODWORD(v52) = 5;
        }
        CombineExpUpClassInfo__Set((CombineExpUpClassInfo_o *)Instance, v57, v58, v59, v60, v52, v51);
      }
      else
      {
        v61 = this->fields.expUpClassInfoList;
        if ( !v61 )
          goto LABEL_80;
        if ( v32 >= LODWORD(v61->max_length) )
          goto LABEL_79;
        Instance = (DataManager_o *)v61->m_Items[v32];
        if ( !Instance )
          goto LABEL_80;
        CombineExpUpClassInfo__Set_37724768((CombineExpUpClassInfo_o *)Instance, (System_Int32_array *)v25, v50);
      }
      v33 = ++v32 >= size;
      if ( v32 == size )
        goto LABEL_77;
    }
    v43 = this;
    v44 = v31;
    v45 = v41;
    v46 = 1;
LABEL_37:
    TargetClassMaterialInfo = CombineExpUpInfo__GetTargetClassStatusUpInfo(v43, v44, v45, v46, v39);
    goto LABEL_38;
  }
  v33 = 1;
LABEL_77:
  CombineExpUpInfo__SetBtnState(this, this->fields.nowKind, this->fields.nowType, v21);
  return v33;
}


int32_t CombineExpUpInfo__GetStatusUpDispIndex(
        CombineExpUpInfo_o *this,
        UserServantEntity_o *entity,
        int32_t rarityNum,
        int32_t type,
        bool isAllClass,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t *v12; // x8
  int32_t v13; // w22
  Il2CppObject *Master_object; // x21
  struct UnityEngine_GameObject_array **p_btnObjList; // x8
  int32_t Rarity; // w0
  int32_t atkAdjustLimit[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596A285 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantRarityMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    this = (CombineExpUpInfo_o *)sub_2213A60(&Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
    byte_596A285 = 1;
  }
  *(_QWORD *)atkAdjustLimit = 0;
  if ( !isAllClass )
  {
    if ( entity )
      return rarityNum - UserServantEntity__getRarity(entity, 0);
    goto LABEL_22;
  }
  if ( !entity )
    goto LABEL_22;
  if ( UserServantEntity__getRarity(entity, 0) != 5 )
  {
    Rarity = UserServantEntity__getRarity(entity, 0);
    return (rarityNum - Rarity) & ~((rarityNum - Rarity) >> 31);
  }
  UserServantEntity__GetStatusUpAdjustLimit(entity, &atkAdjustLimit[1], atkAdjustLimit, 0);
  v12 = type == 2 ? &atkAdjustLimit[1] : atkAdjustLimit;
  v13 = *v12;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v11);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantRarityMaster___);
  this = (CombineExpUpInfo_o *)UserServantEntity__getRarity(entity, 0);
  if ( !Master_object )
LABEL_22:
    sub_2213CDC(this, entity);
  this = (CombineExpUpInfo_o *)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                 (int32_t)this,
                                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantRarityMaster__ServantRarityEntity__int__GetEntity__);
  if ( type != 2 )
  {
    if ( this )
    {
      p_btnObjList = &this->fields.btnObjList;
      return v13 <= *(_DWORD *)p_btnObjList;
    }
    goto LABEL_22;
  }
  if ( !this )
    goto LABEL_22;
  p_btnObjList = (struct UnityEngine_GameObject_array **)((char *)&this->fields.m_CancellationTokenSource + 4);
  return v13 <= *(_DWORD *)p_btnObjList;
}


// local variable allocation has failed, the output may be wrong!
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
  unsigned __int64 v13; // x25
  __int64 i; // x27
  signed __int64 v15; // x9
  Il2CppObject *v16; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  il2cpp_array_size_t max_length; // x23
  unsigned int v25; // w10
  unsigned int v26; // w11
  unsigned __int64 v27; // x8
  bool v28; // cf
  __int64 v29; // x10
  __int64 v30; // x13
  int32_t v31; // w14
  il2cpp_array_size_t v32; // x23
  __int64 v33; // x25
  UserServantEntity_o *v34; // x22
  __int64 v35; // x2
  SvtClassAttri_c *v36; // x0
  int32_t MAX_EXP_UP_RARITY; // w27
  __int64 v38; // x8
  __int64 v40; // x0

  if ( (byte_596A283 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&CombineExpUpInfo_MaterialData___TypeInfo);
    sub_2213A60(&CombineExpUpInfo_MaterialData_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SvtClassAttri_TypeInfo);
    byte_596A283 = 1;
  }
  v6 = SvtClassAttri_TypeInfo;
  if ( !*(&SvtClassAttri_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, svtList, *(_QWORD *)&classId);
    v6 = SvtClassAttri_TypeInfo;
  }
  v7 = (unsigned int *)sub_2213B20(
                         CombineExpUpInfo_MaterialData___TypeInfo,
                         (unsigned int)v6->static_fields->MAX_EXP_UP_RARITY);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_46;
  TargetClassMaterialSvtIdList = ServantMaster__GetTargetClassMaterialSvtIdList((ServantMaster_o *)Instance, classId, 0);
  if ( !TargetClassMaterialSvtIdList )
    return 0;
  v12 = TargetClassMaterialSvtIdList;
  if ( !TargetClassMaterialSvtIdList->max_length )
    return 0;
  v13 = 0;
  for ( i = 8; ; i += 2 )
  {
    Instance = (__int64)SvtClassAttri_TypeInfo;
    if ( !*(&SvtClassAttri_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v9, v11);
      Instance = (__int64)SvtClassAttri_TypeInfo;
    }
    v15 = *(int *)(*(_QWORD *)(Instance + 184) + 4LL);
    if ( (__int64)v13 >= v15 )
      break;
    v16 = (Il2CppObject *)sub_2213CCC(CombineExpUpInfo_MaterialData_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v7 )
      goto LABEL_46;
    if ( v16 )
    {
      Instance = sub_2213BB4(v16, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
      if ( !Instance )
      {
        v40 = sub_2213D00(0, v23);
        sub_2213BA0(v40, 0);
      }
    }
    if ( v13 >= v7[6] )
      goto LABEL_45;
    *(_QWORD *)&v7[2 * v13 + 8] = v16;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7[i], (int32_t)v16, v17, v18, v19, v20, v21, v22);
    ++v13;
  }
  max_length = v12->max_length;
  if ( !*(_DWORD *)(Instance + 228) )
  {
    j_il2cpp_runtime_class_init_0(Instance, v9, v11);
    LODWORD(v15) = SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY;
  }
  v25 = v15 != max_length;
  if ( (int)max_length >= 1 )
  {
    if ( v7 )
    {
      v26 = v7[6];
      v27 = 0;
      v28 = v26 >= v25;
      LODWORD(v29) = v26 - v25;
      if ( v28 )
        v29 = (unsigned int)v29;
      else
        v29 = 0;
      while ( v29 != v27 && v27 < LODWORD(v12->max_length) )
      {
        v30 = *(_QWORD *)&v7[2 * ((_DWORD)v15 != (_DWORD)max_length) + 8 + 2 * v27];
        if ( !v30 )
          goto LABEL_46;
        v31 = v12->m_Items[v27++];
        *(_DWORD *)(v30 + 16) = v31;
        if ( (unsigned int)max_length == v27 )
          goto LABEL_30;
      }
LABEL_45:
      sub_2213CE4(Instance);
    }
LABEL_46:
    sub_2213CDC(Instance, v9);
  }
LABEL_30:
  if ( !svtList )
    goto LABEL_46;
  v32 = svtList->max_length;
  if ( (int)v32 >= 1 )
  {
    v33 = 0;
    while ( (unsigned int)v33 < LODWORD(svtList->max_length) )
    {
      v34 = svtList->m_Items[v33];
      if ( !v34 )
        goto LABEL_46;
      Instance = UserServantEntity__IsCombineMaterial(svtList->m_Items[v33], 0);
      if ( (Instance & 1) != 0 )
      {
        Instance = UserServantEntity__getSvtClassId(v34, 0, 0, 0);
        if ( (_DWORD)Instance == classId )
        {
          v36 = SvtClassAttri_TypeInfo;
          if ( !*(&SvtClassAttri_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v9, v35);
            v36 = SvtClassAttri_TypeInfo;
          }
          MAX_EXP_UP_RARITY = v36->static_fields->MAX_EXP_UP_RARITY;
          Instance = UserServantEntity__getRarity(v34, 0);
          if ( !v7 )
            goto LABEL_46;
          if ( MAX_EXP_UP_RARITY - (int)Instance >= v7[6] )
            goto LABEL_45;
          v38 = *(_QWORD *)&v7[2 * (MAX_EXP_UP_RARITY - (int)Instance) + 8];
          if ( !v38 )
            goto LABEL_46;
          ++*(_DWORD *)(v38 + 20);
        }
      }
      if ( (_DWORD)v32 == (_DWORD)++v33 )
        return (CombineExpUpInfo_MaterialData_array *)v7;
    }
    goto LABEL_45;
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_Int32_array *TargetClassStatusUpSvtIdList; // x25
  bool v13; // cf
  char v14; // w28
  SvtClassAttri_c *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  bool v18; // w8
  int v19; // w9
  struct SvtClassAttri_StaticFields *static_fields; // x8
  il2cpp_array_size_t max_length; // x8
  Il2CppObject *v22; // x24
  char v23; // w22
  int v24; // w23
  unsigned __int64 v25; // x29
  int32_t *m_Items; // x21
  int32_t v27; // w27
  ServantLeaderInfo_o *v28; // x26
  char *v29; // x9
  CombineExpUpInfo_MaterialData_array *v30; // x25
  __int64 v31; // x20
  MissionNaviTransitionBoardItem_o *v32; // x26
  Il2CppObject *v33; // x27
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x1
  MissionNaviTransitionBoardItem_c *klass; // x8
  int v42; // w9
  il2cpp_array_size_t v43; // x20
  __int64 i; // x21
  UserServantEntity_o *v45; // x24
  const MethodInfo *v46; // x5
  bool v47; // w4
  UserServantEntity_o *v48; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  CombineExpUpInfo_MaterialData_o *v51; // x8
  __int64 v53; // x0
  int32_t v54; // [xsp+0h] [xbp-70h]
  bool IsFlag20260802; // [xsp+4h] [xbp-6Ch]
  UserServantEntity_array *v56; // [xsp+8h] [xbp-68h]

  if ( (byte_596A284 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&CombineExpUpInfo_MaterialData___TypeInfo);
    sub_2213A60(&CombineExpUpInfo_MaterialData_TypeInfo);
    sub_2213A60(&ServantLeaderInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SvtClassAttri_TypeInfo);
    byte_596A284 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  v56 = svtList;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_82;
  TargetClassStatusUpSvtIdList = ServantMaster__GetTargetClassStatusUpSvtIdList((ServantMaster_o *)Instance, classId, 0);
  v13 = classId == 1001 && (unsigned int)(type - 3) >= 0xFFFFFFFE;
  v14 = !v13;
  if ( v13 )
  {
    IsFlag20260802 = ConstantMaster__IsFlag20260802(0);
    v18 = ConstantMaster__IsFlag20260802(0);
    v15 = SvtClassAttri_TypeInfo;
    v19 = *(&SvtClassAttri_TypeInfo->_2.cctor_finished + 1);
    if ( v18 )
    {
      if ( !v19 )
      {
        j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v16, v17);
        v15 = SvtClassAttri_TypeInfo;
      }
      static_fields = v15->static_fields;
      goto LABEL_22;
    }
    if ( !v19 )
    {
      j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v16, v17);
      v15 = SvtClassAttri_TypeInfo;
    }
  }
  else
  {
    v15 = SvtClassAttri_TypeInfo;
    if ( !*(&SvtClassAttri_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v10, v11);
      v15 = SvtClassAttri_TypeInfo;
    }
    IsFlag20260802 = 0;
  }
  static_fields = (struct SvtClassAttri_StaticFields *)&v15->static_fields->MAX_EXP_UP_RARITY;
LABEL_22:
  Instance = (Il2CppObject *)sub_2213B20(int___TypeInfo, (unsigned int)static_fields->MAX_ALL_CLASS_STATUS_UP_NUM);
  if ( !TargetClassStatusUpSvtIdList )
    goto LABEL_82;
  max_length = TargetClassStatusUpSvtIdList->max_length;
  v22 = Instance;
  v54 = classId;
  if ( (int)max_length < 1 )
    return 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  m_Items = TargetClassStatusUpSvtIdList->m_Items;
  do
  {
    if ( v25 >= (unsigned int)max_length )
LABEL_81:
      sub_2213CE4(Instance);
    v27 = m_Items[v25];
    v28 = (ServantLeaderInfo_o *)sub_2213CCC(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_50583572(v28, v27, 0, 1, 0);
    if ( type == 2 )
    {
      if ( !v28 )
        goto LABEL_82;
      if ( !v28->fields.hp && !v28->fields.adjustHp )
        goto LABEL_44;
    }
    else
    {
      if ( type != 1 )
        goto LABEL_44;
      if ( !v28 )
        goto LABEL_82;
      if ( !v28->fields.atk && !v28->fields.adjustAtk )
        goto LABEL_44;
    }
    if ( (v14 & 1) == 0 )
    {
      Instance = (Il2CppObject *)ConstantMaster__IsFlag20260802(0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = (Il2CppObject *)ServantLeaderInfo__getRarity(v28, 0);
        if ( (((_DWORD)Instance == 5) & (unsigned __int8)v23) != 0 )
        {
          v23 = 1;
          goto LABEL_44;
        }
        v23 |= (_DWORD)Instance == 5;
      }
    }
    if ( v25 >= LODWORD(TargetClassStatusUpSvtIdList->max_length) )
      goto LABEL_81;
    if ( !v22 )
      goto LABEL_82;
    if ( (unsigned int)v24 >= LODWORD(v22[1].monitor) )
      goto LABEL_81;
    v29 = (char *)v22 + 4 * v24++;
    *((_DWORD *)v29 + 8) = m_Items[v25];
LABEL_44:
    LODWORD(max_length) = TargetClassStatusUpSvtIdList->max_length;
    ++v25;
  }
  while ( (__int64)v25 < (int)max_length );
  if ( !v24 )
    return 0;
  Instance = (Il2CppObject *)sub_2213B20(CombineExpUpInfo_MaterialData___TypeInfo, (unsigned int)v24);
  v30 = (CombineExpUpInfo_MaterialData_array *)Instance;
  if ( v24 >= 1 )
  {
    v31 = 0;
    v32 = (MissionNaviTransitionBoardItem_o *)&Instance[2];
    while ( 1 )
    {
      v33 = (Il2CppObject *)sub_2213CCC(CombineExpUpInfo_MaterialData_TypeInfo);
      System_Object___ctor(v33, 0);
      if ( !v30 )
        break;
      if ( v33 )
      {
        Instance = (Il2CppObject *)sub_2213BB4(v33, v30->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v53 = sub_2213D00(0, v40);
          sub_2213BA0(v53, 0);
        }
      }
      if ( (unsigned int)v31 >= LODWORD(v30->max_length) )
        goto LABEL_81;
      v32->klass = (MissionNaviTransitionBoardItem_c *)v33;
      sub_2213A04(v32, (int32_t)v33, v34, v35, v36, v37, v38, v39);
      if ( (unsigned int)v31 >= LODWORD(v30->max_length) )
        goto LABEL_81;
      if ( !v22 )
        break;
      if ( (unsigned int)v31 >= LODWORD(v22[1].monitor) )
        goto LABEL_81;
      klass = v32->klass;
      if ( !v32->klass )
        break;
      v42 = *((_DWORD *)&v22[2].klass + v31++);
      v32 = (MissionNaviTransitionBoardItem_o *)((char *)v32 + 8);
      LODWORD(klass->_1.name) = v42;
      if ( v24 == (_DWORD)v31 )
        goto LABEL_57;
    }
LABEL_82:
    sub_2213CDC(Instance, v9);
  }
LABEL_57:
  if ( !v56 )
    goto LABEL_82;
  v43 = v56->max_length;
  if ( (int)v43 >= 1 )
  {
    for ( i = 0; (_DWORD)v43 != (_DWORD)i; ++i )
    {
      if ( (unsigned int)i >= LODWORD(v56->max_length) )
        goto LABEL_81;
      v45 = v56->m_Items[i];
      if ( !v45 )
        goto LABEL_82;
      Instance = (Il2CppObject *)UserServantEntity__IsStatusUp(v56->m_Items[i], 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (Il2CppObject *)UserServantEntity__getSvtClassId(v45, 0, 0, 0);
        if ( (_DWORD)Instance == v54 )
        {
          if ( type == 2 )
          {
            if ( v45->fields.hp || v45->fields.adjustHp )
            {
              v47 = IsFlag20260802;
              v48 = v45;
              v49 = v24;
              v50 = 2;
              goto LABEL_72;
            }
          }
          else if ( type == 1 && (v45->fields.atk || v45->fields.adjustAtk) )
          {
            v47 = IsFlag20260802;
            v48 = v45;
            v49 = v24;
            v50 = 1;
LABEL_72:
            Instance = (Il2CppObject *)CombineExpUpInfo__GetStatusUpDispIndex(
                                         (CombineExpUpInfo_o *)Instance,
                                         v48,
                                         v49,
                                         v50,
                                         v47,
                                         v46);
            if ( ((unsigned int)Instance & 0x80000000) == 0 )
            {
              if ( !v30 )
                goto LABEL_82;
              if ( (int)Instance < SLODWORD(v30->max_length) )
              {
                v51 = v30->m_Items[(unsigned int)Instance];
                if ( !v51 )
                  goto LABEL_82;
                ++v51->fields.num;
              }
            }
          }
        }
      }
    }
  }
  return v30;
}


void CombineExpUpInfo__OnClickCenter(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x5

  if ( (byte_596A288 & 1) == 0 )
  {
    sub_2213A60(&Method_CombineExpUpInfo_OnClickCenter__);
    byte_596A288 = 1;
  }
  if ( this->fields.nowType != 1 )
  {
    v3 = Method_CombineExpUpInfo_OnClickCenter__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickCenter__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CombineExpUpInfo_OnClickCenter__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596A28A & 1) == 0 )
  {
    sub_2213A60(&Method_CombineExpUpInfo_OnClickChangeButton__);
    byte_596A28A = 1;
  }
  v3 = Method_CombineExpUpInfo_OnClickChangeButton__;
  if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickChangeButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_CombineExpUpInfo_OnClickChangeButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596A287 & 1) == 0 )
  {
    sub_2213A60(&Method_CombineExpUpInfo_OnClickLeft__);
    byte_596A287 = 1;
  }
  if ( this->fields.nowType )
  {
    v3 = Method_CombineExpUpInfo_OnClickLeft__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickLeft__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CombineExpUpInfo_OnClickLeft__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 0, 1, 0, v5);
  }
}


void CombineExpUpInfo__OnClickRight(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x5

  if ( (byte_596A289 & 1) == 0 )
  {
    sub_2213A60(&Method_CombineExpUpInfo_OnClickRight__);
    byte_596A289 = 1;
  }
  if ( this->fields.nowType != 2 )
  {
    v3 = Method_CombineExpUpInfo_OnClickRight__;
    if ( (*((_BYTE *)Method_CombineExpUpInfo_OnClickRight__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CombineExpUpInfo_OnClickRight__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  __int64 v11; // x2
  struct UISprite_array *v12; // x8
  UIWidget_o *v13; // x21
  struct UISprite_array *btnTxtSpriteList; // x8
  struct System_String_array *btnSpriteNameList; // x9
  Il2CppClass **v16; // x8
  Il2CppClass **v17; // x9
  System_String_o *v18; // x1
  struct UISprite_array *v19; // x8
  __int64 v20; // x2
  struct UISprite_array *v21; // x8
  UIWidget_o *v22; // x21
  struct UISprite_array *v23; // x8
  struct System_String_array *v24; // x9
  UISprite_o *v25; // x21
  __int64 *v26; // x8

  v6 = this;
  if ( (byte_596A286 & 1) == 0 )
  {
    sub_2213A60(&CombineExpUpInfo_TypeInfo);
    sub_2213A60(&StringLiteral_23498/*"off"*/);
    sub_2213A60(&StringLiteral_18199/*"btn_bg_02_on"*/);
    sub_2213A60(&StringLiteral_23525/*"on"*/);
    sub_2213A60(&StringLiteral_18436/*"button_total"*/);
    sub_2213A60(&StringLiteral_18435/*"button_storage"*/);
    sub_2213A60(&StringLiteral_18430/*"button_possess"*/);
    this = (CombineExpUpInfo_o *)sub_2213A60(&StringLiteral_18198/*"btn_bg_02_off"*/);
    byte_596A286 = 1;
  }
  v7 = 0;
  v8 = (unsigned int)type;
  do
  {
    btnObjList = v6->fields.btnObjList;
    if ( v8 == v7 )
    {
      if ( !btnObjList )
        goto LABEL_50;
      if ( LODWORD(btnObjList->max_length) <= v8 )
        goto LABEL_51;
      this = (CombineExpUpInfo_o *)btnObjList->m_Items[v8];
      if ( !this )
        goto LABEL_50;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      btnSpriteList = v6->fields.btnSpriteList;
      if ( !btnSpriteList )
        goto LABEL_50;
      if ( LODWORD(btnSpriteList->max_length) <= v8 )
        goto LABEL_51;
      this = (CombineExpUpInfo_o *)btnSpriteList->m_Items[v8];
      if ( !this )
        goto LABEL_50;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_18199/*"btn_bg_02_on"*/, 0);
      v12 = v6->fields.btnSpriteList;
      if ( !v12 )
        goto LABEL_50;
      if ( LODWORD(v12->max_length) <= v8 )
        goto LABEL_51;
      this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      v13 = (UIWidget_o *)v12->m_Items[v8];
      if ( !*(&CombineExpUpInfo_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CombineExpUpInfo_TypeInfo, *(_QWORD *)&kind, v11);
      if ( !v13 )
        goto LABEL_50;
      UIWidget__SetDimensions(
        v13,
        CombineExpUpInfo_TypeInfo->static_fields->TYPE_BUTTON_ON_WIDTH,
        CombineExpUpInfo_TypeInfo->static_fields->TYPE_BUTTON_ON_HEIGHT,
        0);
      btnTxtSpriteList = v6->fields.btnTxtSpriteList;
      if ( !btnTxtSpriteList )
        goto LABEL_50;
      if ( LODWORD(btnTxtSpriteList->max_length) <= v8 )
        goto LABEL_51;
      btnSpriteNameList = v6->fields.btnSpriteNameList;
      if ( !btnSpriteNameList )
        goto LABEL_50;
      if ( LODWORD(btnSpriteNameList->max_length) <= v8 )
        goto LABEL_51;
      v16 = &btnTxtSpriteList->obj.klass + v8;
      v17 = &btnSpriteNameList->obj.klass + v8;
      v18 = (System_String_o *)StringLiteral_23525/*"on"*/;
    }
    else
    {
      if ( !btnObjList )
        goto LABEL_50;
      if ( v7 >= LODWORD(btnObjList->max_length) )
LABEL_51:
        sub_2213CE4(this);
      this = (CombineExpUpInfo_o *)btnObjList->m_Items[v7];
      if ( !this )
        goto LABEL_50;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v19 = v6->fields.btnSpriteList;
      if ( !v19 )
        goto LABEL_50;
      if ( v7 >= LODWORD(v19->max_length) )
        goto LABEL_51;
      this = (CombineExpUpInfo_o *)v19->m_Items[v7];
      if ( !this )
        goto LABEL_50;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_18198/*"btn_bg_02_off"*/, 0);
      v21 = v6->fields.btnSpriteList;
      if ( !v21 )
        goto LABEL_50;
      if ( v7 >= LODWORD(v21->max_length) )
        goto LABEL_51;
      this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      v22 = (UIWidget_o *)v21->m_Items[v7];
      if ( !*(&CombineExpUpInfo_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CombineExpUpInfo_TypeInfo, *(_QWORD *)&kind, v20);
      if ( !v22 )
        goto LABEL_50;
      UIWidget__SetDimensions(
        v22,
        CombineExpUpInfo_TypeInfo->static_fields->TYPE_BUTTON_OFF_WIDTH,
        CombineExpUpInfo_TypeInfo->static_fields->TYPE_BUTTON_OFF_HEIGHT,
        0);
      v23 = v6->fields.btnTxtSpriteList;
      if ( !v23 )
        goto LABEL_50;
      if ( v7 >= LODWORD(v23->max_length) )
        goto LABEL_51;
      v24 = v6->fields.btnSpriteNameList;
      if ( !v24 )
        goto LABEL_50;
      if ( v7 >= LODWORD(v24->max_length) )
        goto LABEL_51;
      v16 = &v23->obj.klass + v7;
      v17 = &v24->obj.klass + v7;
      v18 = (System_String_o *)StringLiteral_23498/*"off"*/;
    }
    v25 = (UISprite_o *)v16[4];
    this = (CombineExpUpInfo_o *)System_String__Concat_75651716((System_String_o *)v17[4], v18, 0);
    if ( !v25 )
      goto LABEL_50;
    UISprite__set_spriteName(v25, (System_String_o *)this, 0);
    ++v7;
  }
  while ( v7 != 3 );
  switch ( kind )
  {
    case 2:
      this = (CombineExpUpInfo_o *)v6->fields.btnChangeSprite;
      if ( this )
      {
        v26 = &StringLiteral_18436/*"button_total"*/;
        goto LABEL_48;
      }
      goto LABEL_50;
    case 1:
      this = (CombineExpUpInfo_o *)v6->fields.btnChangeSprite;
      if ( this )
      {
        v26 = &StringLiteral_18435/*"button_storage"*/;
        goto LABEL_48;
      }
LABEL_50:
      sub_2213CDC(this, *(_QWORD *)&kind);
    case 0:
      this = (CombineExpUpInfo_o *)v6->fields.btnChangeSprite;
      if ( this )
      {
        v26 = &StringLiteral_18430/*"button_possess"*/;
LABEL_48:
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v26, 0);
        return;
      }
      goto LABEL_50;
  }
}


void CombineExpUpInfo_MaterialData___ctor(CombineExpUpInfo_MaterialData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}