void ServantMaster___ctor(ServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_int__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_597126B & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_597126B = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.servantEquipIdList = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.servantEquipIdList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.servantCollectionIdList = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantCollectionIdList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    1,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int___ctor__);
}


void ServantMaster__AddServantCache(ServantMaster_o *this, ServantEntity_o *servantEntity, const MethodInfo *method)
{
  ServantMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x22
  __int64 v7; // x23
  System_Collections_Generic_List_int__o *servantEquipIdList; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  __int64 v12; // x1
  __int64 v13; // x19
  __int64 v14; // x21
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x20
  struct System_Int32_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  v4 = this;
  if ( (byte_597126E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    this = (ServantMaster_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_597126E = 1;
  }
  if ( !servantEntity )
    goto LABEL_22;
  if ( servantEntity->fields.collectionNo < 1 )
    return;
  if ( ServantEntity__get_IsServantEquip(servantEntity, 0) )
  {
    v6 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v7 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    servantEquipIdList = v4->fields.servantEquipIdList;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    *(_QWORD *)&v19.fields.currentCryptoKey = v6;
    *(_QWORD *)&v19.fields.fakeValue = v7;
    this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v19, 0);
    if ( !servantEquipIdList )
      goto LABEL_22;
    items = servantEquipIdList->fields._items;
    v10 = Method_System_Collections_Generic_List_int__Add__;
    ++servantEquipIdList->fields._version;
    if ( !items )
      goto LABEL_22;
    size = servantEquipIdList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        servantEquipIdList,
        (int32_t)this,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    }
    else
    {
      servantEquipIdList->fields._size = size + 1;
      items->m_Items[size] = (int)this;
    }
  }
  if ( !ServantEntity__get_IsServantCollection(servantEntity, 0) )
    return;
  v14 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v13 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  servantCollectionIdList = v4->fields.servantCollectionIdList;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v20.fields.currentCryptoKey = v14;
  *(_QWORD *)&v20.fields.fakeValue = v13;
  this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v20, 0);
  if ( !servantCollectionIdList
    || (v16 = servantCollectionIdList->fields._items,
        v17 = Method_System_Collections_Generic_List_int__Add__,
        ++servantCollectionIdList->fields._version,
        !v16) )
  {
LABEL_22:
    sub_2213CDC(this, servantEntity);
  }
  v18 = servantCollectionIdList->fields._size;
  if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      servantCollectionIdList,
      (int32_t)this,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    servantCollectionIdList->fields._size = v18 + 1;
    v16->m_Items[v18] = (int)this;
  }
}


bool ServantMaster__CheckFriendShipSvtEquip(
        ServantMaster_o *this,
        ServantEntity_o *servant,
        ServantEntity_o *equip,
        const MethodInfo *method)
{
  __int64 v6; // x19
  ServantEntity_o *IsOrganization; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  __int64 v18; // x21
  __int64 v19; // x22
  ServantSkillMaster_o *v20; // x20
  const MethodInfo *v21; // x5
  __int64 v22; // x1
  System_Int32_array *ActIndividuality; // x20
  System_Func_int__bool__o *v24; // x21
  SkillEntity_o *v27; // [xsp+0h] [xbp-40h] BYREF
  ServantSkillEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_5971277 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_ServantMaster___c__DisplayClass14_0__CheckFriendShipSvtEquip_b__0__);
    sub_2213A60(&ServantMaster___c__DisplayClass14_0_TypeInfo);
    byte_5971277 = 1;
  }
  v27 = 0;
  entity = 0;
  v6 = sub_2213CCC(ServantMaster___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_23;
  *(_QWORD *)(v6 + 16) = servant;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)servant, v9, v10, v11, v12, v13, v14);
  IsOrganization = *(ServantEntity_o **)(v6 + 16);
  if ( !IsOrganization )
    goto LABEL_23;
  IsOrganization = (ServantEntity_o *)ServantEntity__get_IsOrganization(IsOrganization, 0);
  if ( ((unsigned __int8)IsOrganization & 1) == 0 )
    return 0;
  if ( !equip )
    goto LABEL_23;
  if ( !ServantEntity__get_IsFriendShipSvtEquip(equip, 0) )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v18 = *(_QWORD *)&equip->fields.id.fields.currentCryptoKey;
  v19 = *(_QWORD *)&equip->fields.id.fields.fakeValue;
  v20 = (ServantSkillMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
  *(_QWORD *)&v29.fields.currentCryptoKey = v18;
  *(_QWORD *)&v29.fields.fakeValue = v19;
  IsOrganization = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v29, 0);
  if ( !v20 )
LABEL_23:
    sub_2213CDC(IsOrganization, v8);
  if ( !ServantSkillMaster__TryGetEntity(v20, &entity, (int32_t)IsOrganization, 1, 1, v21) )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
  IsOrganization = (ServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !entity || !IsOrganization )
    goto LABEL_23;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)IsOrganization,
          (Il2CppObject **)&v27,
          entity->fields.skillId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  IsOrganization = (ServantEntity_o *)v27;
  if ( !v27 )
    goto LABEL_23;
  ActIndividuality = SkillEntity__getActIndividuality(v27, 0);
  v24 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v24,
    (Il2CppObject *)v6,
    Method_ServantMaster___c__DisplayClass14_0__CheckFriendShipSvtEquip_b__0__,
    0);
  return BasicHelper__Any_int__58784608(
           ActIndividuality,
           (System_Func_T__bool__o *)v24,
           (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248);
}


void ServantMaster__CreateServantCache(ServantMaster_o *this, const MethodInfo *method)
{
  ServantMaster_o *v2; // x19
  struct System_Collections_Generic_List_int__o *servantEquipIdList; // x9
  struct System_Collections_Generic_List_int__o *servantCollectionIdList; // x8
  int v5; // w10
  int v6; // w9
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  ServantEntity_o *v20; // x0
  const MethodInfo *v21; // x2
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  System_Collections_Generic_IEnumerator_T__o *v26; // [xsp+18h] [xbp-28h]

  v2 = this;
  if ( (byte_597126D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    this = (ServantMaster_o *)sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    byte_597126D = 1;
  }
  servantEquipIdList = v2->fields.servantEquipIdList;
  if ( !servantEquipIdList )
    goto LABEL_36;
  servantCollectionIdList = v2->fields.servantCollectionIdList;
  v5 = servantEquipIdList->fields._version + 1;
  servantEquipIdList->fields._size = 0;
  servantEquipIdList->fields._version = v5;
  if ( !servantCollectionIdList
    || (this = (ServantMaster_o *)v2->fields.list,
        v6 = servantCollectionIdList->fields._version + 1,
        servantCollectionIdList->fields._size = 0,
        servantCollectionIdList->fields._version = v6,
        !this) )
  {
LABEL_36:
    sub_2213CDC(this, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__GetEnumerator__);
  v26 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v8);
  for ( i = Enumerator; ; i = v26 )
  {
    klass = i->klass;
    v11 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_12;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v13 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            i,
            *(_QWORD *)(v13 + 8));
    if ( (v14 & 1) == 0 )
      break;
    if ( !v26 )
      sub_2213CDC(v14, v15);
    v16 = v26->klass;
    v17 = *(unsigned __int16 *)&v26->klass->_2.rank;
    if ( *(_WORD *)&v26->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_20;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_20:
      v19 = sub_224BC3C(v26, System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo, 0);
    }
    v20 = (ServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                               v26,
                               *(_QWORD *)(v19 + 8));
    if ( v20 )
      ServantMaster__AddServantCache(v2, v20, v21);
  }
  if ( v26 )
  {
    v22 = v26->klass;
    v23 = *(unsigned __int16 *)&v26->klass->_2.rank;
    if ( *(_WORD *)&v26->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_31;
      }
      v25 = (__int64)&v22->vtable[*v24];
    }
    else
    {
LABEL_31:
      v25 = sub_224BC3C(v26, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(v26, *(_QWORD *)(v25 + 8));
  }
}


System_Int32_array *ServantMaster__GetCollectionList(ServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_int__o *v5; // x21
  int32_t v6; // w22
  struct System_Collections_Generic_IList_T__o *items; // x23
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Int32_array *v9; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_5971272 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971272 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
  v5 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
      if ( !list )
        break;
      if ( (unsigned int)(HIDWORD(list[3].monitor) - 1) <= 1 )
      {
        items = list->fields.items;
        klass = list[1].klass;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
        *(_QWORD *)&v13.fields.currentCryptoKey = items;
        *(_QWORD *)&v13.fields.fakeValue = klass;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                   v13,
                                                                   0);
        if ( !v5 )
          break;
        v9 = v5->fields._items;
        v10 = Method_System_Collections_Generic_List_int__Add__;
        ++v5->fields._version;
        if ( !v9 )
          break;
        size = v5->fields._size;
        method = (const MethodInfo *)(unsigned int)list;
        if ( (unsigned int)size >= LODWORD(v9->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            (int32_t)list,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = size + 1;
          v9->m_Items[size] = (int)list;
        }
      }
      if ( Count == ++v6 )
        goto LABEL_17;
    }
LABEL_19:
    sub_2213CDC(list, method);
  }
LABEL_17:
  if ( !v5 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *ServantMaster__GetCollectionList_49746676(
        ServantMaster_o *this,
        bool isEquip,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x0

  if ( (byte_5971273 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_5971273 = 1;
  }
  if ( !isEquip )
  {
    servantCollectionIdList = this->fields.servantCollectionIdList;
    if ( servantCollectionIdList )
      return System_Collections_Generic_List_int___ToArray(
               servantCollectionIdList,
               (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_7:
    sub_2213CDC(servantCollectionIdList, isEquip);
  }
  servantCollectionIdList = this->fields.servantEquipIdList;
  if ( !servantCollectionIdList )
    goto LABEL_7;
  return System_Collections_Generic_List_int___ToArray(
           servantCollectionIdList,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_Dictionary_int__int__o *ServantMaster__GetLimitCountMaxList(
        ServantMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_Dictionary_int__int__o *v5; // x21
  int32_t v6; // w22
  System_Collections_ObjectModel_Collection_T__o *v7; // x23
  struct System_Collections_Generic_IList_T__o *items; // x24
  System_Collections_ObjectModel_Collection_T__c *klass; // x25
  int32_t v10; // w24
  int32_t v11; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_5971271 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971271 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
  v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v5,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( Count >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
      if ( !list )
        break;
      v7 = list;
      if ( !ServantEntity__get_IsEnemy((ServantEntity_o *)list, 0) )
      {
        items = v7->fields.items;
        klass = v7[1].klass;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
        *(_QWORD *)&v13.fields.currentCryptoKey = items;
        *(_QWORD *)&v13.fields.fakeValue = klass;
        v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v13, 0);
        list = (System_Collections_ObjectModel_Collection_T__o *)ServantEntity__get_IsServant((ServantEntity_o *)v7, 0);
        if ( ((unsigned __int8)list & 1) != 0 )
          v11 = (int32_t)v7[3].fields.items;
        else
          v11 = 0;
        if ( !v5 )
          break;
        System_Collections_Generic_Dictionary_int__int___Add(
          v5,
          v10,
          v11,
          (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      }
      if ( Count == ++v6 )
        return v5;
    }
LABEL_18:
    sub_2213CDC(list, method);
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *ServantMaster__GetTargetClassMaterialSvtIdList(
        ServantMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_int__o *v7; // x20
  int32_t v8; // w23
  _QWORD *v9; // x24
  __int64 v10; // x24
  __int64 v11; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  struct ServantMaster___c_StaticFields *static_fields; // x8
  System_Comparison_int__o *_9__12_0; // x19
  Il2CppObject *v17; // x21
  struct ServantMaster___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v3 = classId;
  if ( (byte_5971275 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
    sub_2213A60(&System_Comparison_int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Sort___91653640);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_ServantMaster___c__GetTargetClassMaterialSvtIdList_b__12_0__);
    sub_2213A60(&ServantMaster___c_TypeInfo);
    byte_5971275 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
  v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v8,
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
      if ( !list )
        break;
      v9 = list;
      if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)list, 0) && *((_DWORD *)v9 + 20) == v3 )
      {
        v11 = v9[2];
        v10 = v9[3];
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&classId);
        *(_QWORD *)&v26.fields.currentCryptoKey = v11;
        *(_QWORD *)&v26.fields.fakeValue = v10;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v26, 0);
        if ( !v7 )
          break;
        items = v7->fields._items;
        v13 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        *(_QWORD *)&classId = (unsigned int)list;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            (int32_t)list,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size] = (int)list;
        }
      }
      if ( Count == ++v8 )
        goto LABEL_18;
    }
LABEL_26:
    sub_2213CDC(list, *(_QWORD *)&classId);
  }
LABEL_18:
  list = ServantMaster___c_TypeInfo;
  if ( !*(&ServantMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantMaster___c_TypeInfo, *(_QWORD *)&classId);
    list = ServantMaster___c_TypeInfo;
  }
  static_fields = (struct ServantMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__12_0 = static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, *(_QWORD *)&classId);
      static_fields = ServantMaster___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_int__o *)sub_2213CCC(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(_9__12_0, v17, Method_ServantMaster___c__GetTargetClassMaterialSvtIdList_b__12_0__, 0);
    v18 = ServantMaster___c_TypeInfo->static_fields;
    v18->__9__12_0 = _9__12_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->__9__12_0, (int32_t)_9__12_0, v19, v20, v21, v22, v23, v24);
  }
  if ( !v7 )
    goto LABEL_26;
  System_Collections_Generic_List_int___Sort_71732312(
    v7,
    (System_Comparison_T__o *)_9__12_0,
    (const MethodInfo_4468C58 *)Method_System_Collections_Generic_List_int__Sort___91653640);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *ServantMaster__GetTargetClassStatusUpSvtIdList(
        ServantMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_int__o *v7; // x20
  int32_t v8; // w23
  _QWORD *v9; // x24
  __int64 v10; // x24
  __int64 v11; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  struct ServantMaster___c_StaticFields *static_fields; // x8
  System_Comparison_int__o *_9__13_0; // x19
  Il2CppObject *v17; // x21
  struct ServantMaster___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v3 = classId;
  if ( (byte_5971276 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
    sub_2213A60(&System_Comparison_int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Sort___91653640);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_ServantMaster___c__GetTargetClassStatusUpSvtIdList_b__13_0__);
    sub_2213A60(&ServantMaster___c_TypeInfo);
    byte_5971276 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
  v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v8,
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
      if ( !list )
        break;
      v9 = list;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)list, 0) && *((_DWORD *)v9 + 20) == v3 )
      {
        v11 = v9[2];
        v10 = v9[3];
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&classId);
        *(_QWORD *)&v26.fields.currentCryptoKey = v11;
        *(_QWORD *)&v26.fields.fakeValue = v10;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v26, 0);
        if ( !v7 )
          break;
        items = v7->fields._items;
        v13 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        *(_QWORD *)&classId = (unsigned int)list;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            (int32_t)list,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size] = (int)list;
        }
      }
      if ( Count == ++v8 )
        goto LABEL_18;
    }
LABEL_26:
    sub_2213CDC(list, *(_QWORD *)&classId);
  }
LABEL_18:
  list = ServantMaster___c_TypeInfo;
  if ( !*(&ServantMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantMaster___c_TypeInfo, *(_QWORD *)&classId);
    list = ServantMaster___c_TypeInfo;
  }
  static_fields = (struct ServantMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__13_0 = static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, *(_QWORD *)&classId);
      static_fields = ServantMaster___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Comparison_int__o *)sub_2213CCC(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(_9__13_0, v17, Method_ServantMaster___c__GetTargetClassStatusUpSvtIdList_b__13_0__, 0);
    v18 = ServantMaster___c_TypeInfo->static_fields;
    v18->__9__13_0 = _9__13_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->__9__13_0, (int32_t)_9__13_0, v19, v20, v21, v22, v23, v24);
  }
  if ( !v7 )
    goto LABEL_26;
  System_Collections_Generic_List_int___Sort_71732312(
    v7,
    (System_Comparison_T__o *)_9__13_0,
    (const MethodInfo_4468C58 *)Method_System_Collections_Generic_List_int__Sort___91653640);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


bool ServantMaster__IsEnableSupportLimitCountToDispLimitCount(
        ServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5971278 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    byte_5971278 = 1;
  }
  entity = 0;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         svtId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_2213CDC(0, v5);
    return ServantEntity__IsEnableSupportLimitCountToDispLimitCount((ServantEntity_o *)entity, 0);
  }
  else
  {
    return 0;
  }
}


void ServantMaster__MargeServantVoiceId(
        ServantMaster_o *this,
        System_Collections_Generic_Dictionary_int__bool__o *isVoiceList,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  struct System_Collections_Generic_IList_T__o *items; // x23
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_5971274 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971274 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
      if ( !list )
        break;
      if ( (unsigned int)(HIDWORD(list[3].monitor) - 1) <= 1 )
      {
        items = list->fields.items;
        klass = list[1].klass;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isVoiceList);
        *(_QWORD *)&v11.fields.currentCryptoKey = items;
        *(_QWORD *)&v11.fields.fakeValue = klass;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                   v11,
                                                                   0);
        if ( !isVoiceList )
          break;
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          isVoiceList,
          (int32_t)list,
          1,
          (const MethodInfo_3F89330 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( v7 == ++v8 )
        goto LABEL_14;
    }
LABEL_19:
    sub_2213CDC(list, isVoiceList);
  }
LABEL_14:
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)list,
                                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !list )
    goto LABEL_19;
  ServantChangeMaster__MargeServantVoiceId((ServantChangeMaster_o *)list, isVoiceList, 0);
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)list,
                                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
  if ( !list )
    goto LABEL_19;
  ServantVoiceRelationMaster__MargeServantVoiceId((ServantVoiceRelationMaster_o *)list, isVoiceList, 0);
}


void ServantMaster__OnListChangedImplementation(
        ServantMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  ServantMaster_o *v4; // x19
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x0
  System_NotImplementedException_o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 i; // x21
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x8
  __int64 v24; // x9
  System_Collections_IEnumerator_c **v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  ServantEntity_o *v28; // x21
  __int64 v29; // x8
  __int64 naturalAligment; // x10
  const MethodInfo *v32; // x2
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x22
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 j; // x20
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x8
  __int64 v54; // x9
  System_Collections_IEnumerator_c **v55; // x10
  __int64 v56; // x0
  __int64 v57; // x0
  ServantEntity_o *v58; // x20
  __int64 v59; // x8
  __int64 v60; // x10
  const MethodInfo *v62; // x2
  __int64 v63; // x0
  __int64 v64; // x8
  __int64 v65; // x21
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  __int64 v69; // [xsp+28h] [xbp-48h]
  __int64 v70; // [xsp+28h] [xbp-48h]

  v4 = this;
  if ( (byte_5971270 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    this = (ServantMaster_o *)sub_2213A60(&ServantEntity_TypeInfo);
    byte_5971270 = 1;
  }
  if ( !e )
    sub_2213CDC(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action != 3 )
    {
      if ( action != 4 )
      {
        v11 = sub_2213A74(&System_NotImplementedException_TypeInfo);
        v12 = (System_NotImplementedException_o *)sub_2213CCC(v11);
        System_NotImplementedException___ctor(v12, 0);
        v13 = sub_2213A74(&Method_ServantMaster_OnListChangedImplementation__);
        sub_2213BA0(v12, v13);
      }
      ServantMaster__CreateServantCache(v4, (const MethodInfo *)e);
    }
  }
  else
  {
    oldItems = e->fields._oldItems;
    if ( oldItems )
    {
      klass = oldItems->klass;
      v8 = *(unsigned __int16 *)&oldItems->klass->_2.rank;
      if ( *(_WORD *)&oldItems->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v8;
          p_offset += 4;
          if ( !v8 )
            goto LABEL_10;
        }
        v10 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_10:
        v10 = sub_224BC3C(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0);
      }
      v14 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v10)(oldItems, *(_QWORD *)(v10 + 8));
      v69 = v14;
      if ( !v14 )
        sub_2213CDC(v14, v15);
      for ( i = v14; ; i = v69 )
      {
        v17 = *(_QWORD *)i;
        v18 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
        if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
        {
          v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v18;
            v19 += 4;
            if ( !v18 )
              goto LABEL_21;
          }
          v20 = v17 + 16LL * *v19 + 312;
        }
        else
        {
LABEL_21:
          v20 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
        }
        v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(i, *(_QWORD *)(v20 + 8));
        if ( (v21 & 1) == 0 )
          break;
        if ( !v69 )
          sub_2213CDC(v21, v22);
        v23 = *(_QWORD *)v69;
        v24 = *(unsigned __int16 *)(*(_QWORD *)v69 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v69 + 302LL) )
        {
          v25 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v23 + 176) + 8LL);
          while ( *(v25 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v24;
            v25 += 2;
            if ( !v24 )
              goto LABEL_29;
          }
          v26 = v23 + 16LL * (*(_DWORD *)v25 + 1) + 312;
        }
        else
        {
LABEL_29:
          v26 = sub_224BC3C(v69, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v69, *(_QWORD *)(v26 + 8));
        v28 = (ServantEntity_o *)v27;
        if ( v27 )
        {
          v29 = *(_QWORD *)v27;
          naturalAligment = ServantEntity_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) >= (unsigned int)naturalAligment
            && *(ServantEntity_c **)(*(_QWORD *)(v29 + 200) + 8 * naturalAligment - 8) == ServantEntity_TypeInfo )
          {
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v29 + 376))(v27, *(_QWORD *)(v29 + 384)) )
              ServantMaster__RemoveServantCache(v4, v28, v32);
          }
        }
      }
      v33 = sub_2213BB4(v69, System_IDisposable_TypeInfo);
      if ( v33 )
      {
        v34 = *(_QWORD *)v33;
        v35 = v33;
        v36 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
        {
          v37 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
          {
            --v36;
            v37 += 4;
            if ( !v36 )
              goto LABEL_43;
          }
          v38 = v34 + 16LL * *v37 + 312;
        }
        else
        {
LABEL_43:
          v38 = sub_224BC3C(v33, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
      }
    }
    newItems = e->fields._newItems;
    if ( newItems )
    {
      v40 = newItems->klass;
      v41 = *(unsigned __int16 *)&newItems->klass->_2.rank;
      if ( *(_WORD *)&newItems->klass->_2.rank )
      {
        v42 = &v40->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)v42 - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v41;
          v42 += 4;
          if ( !v41 )
            goto LABEL_51;
        }
        v43 = (__int64)&v40->vtable[*v42];
      }
      else
      {
LABEL_51:
        v43 = sub_224BC3C(newItems, System_Collections_IEnumerable_TypeInfo, 0);
      }
      v44 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v43)(newItems, *(_QWORD *)(v43 + 8));
      v70 = v44;
      if ( !v44 )
        sub_2213CDC(v44, v45);
      for ( j = v44; ; j = v70 )
      {
        v47 = *(_QWORD *)j;
        v48 = *(unsigned __int16 *)(*(_QWORD *)j + 302LL);
        if ( *(_WORD *)(*(_QWORD *)j + 302LL) )
        {
          v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v48;
            v49 += 4;
            if ( !v48 )
              goto LABEL_59;
          }
          v50 = v47 + 16LL * *v49 + 312;
        }
        else
        {
LABEL_59:
          v50 = sub_224BC3C(j, System_Collections_IEnumerator_TypeInfo, 0);
        }
        v51 = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(j, *(_QWORD *)(v50 + 8));
        if ( (v51 & 1) == 0 )
          break;
        if ( !v70 )
          sub_2213CDC(v51, v52);
        v53 = *(_QWORD *)v70;
        v54 = *(unsigned __int16 *)(*(_QWORD *)v70 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v70 + 302LL) )
        {
          v55 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v53 + 176) + 8LL);
          while ( *(v55 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v54;
            v55 += 2;
            if ( !v54 )
              goto LABEL_67;
          }
          v56 = v53 + 16LL * (*(_DWORD *)v55 + 1) + 312;
        }
        else
        {
LABEL_67:
          v56 = sub_224BC3C(v70, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v57 = (*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v70, *(_QWORD *)(v56 + 8));
        v58 = (ServantEntity_o *)v57;
        if ( v57 )
        {
          v59 = *(_QWORD *)v57;
          v60 = ServantEntity_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)v57 + 304LL) >= (unsigned int)v60
            && *(ServantEntity_c **)(*(_QWORD *)(v59 + 200) + 8 * v60 - 8) == ServantEntity_TypeInfo )
          {
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v59 + 376))(v57, *(_QWORD *)(v59 + 384)) )
              ServantMaster__AddServantCache(v4, v58, v62);
          }
        }
      }
      v63 = sub_2213BB4(v70, System_IDisposable_TypeInfo);
      if ( v63 )
      {
        v64 = *(_QWORD *)v63;
        v65 = v63;
        v66 = *(unsigned __int16 *)(*(_QWORD *)v63 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v63 + 302LL) )
        {
          v67 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
          {
            --v66;
            v67 += 4;
            if ( !v66 )
              goto LABEL_81;
          }
          v68 = v64 + 16LL * *v67 + 312;
        }
        else
        {
LABEL_81:
          v68 = sub_224BC3C(v63, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v68)(v65, *(_QWORD *)(v68 + 8));
      }
    }
  }
}


void ServantMaster__RemoveServantCache(ServantMaster_o *this, ServantEntity_o *servantEntity, const MethodInfo *method)
{
  ServantMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x22
  __int64 v7; // x23
  System_Collections_Generic_List_int__o *servantEquipIdList; // x21
  __int64 v9; // x1
  __int64 v10; // x19
  __int64 v11; // x21
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v4 = this;
  if ( (byte_597126F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Remove__);
    this = (ServantMaster_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_597126F = 1;
  }
  if ( !servantEntity )
    goto LABEL_16;
  if ( servantEntity->fields.collectionNo >= 1 )
  {
    if ( ServantEntity__get_IsServantEquip(servantEntity, 0) )
    {
      v6 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v7 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      servantEquipIdList = v4->fields.servantEquipIdList;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
      *(_QWORD *)&v13.fields.currentCryptoKey = v6;
      *(_QWORD *)&v13.fields.fakeValue = v7;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v13, 0);
      if ( !servantEquipIdList )
        goto LABEL_16;
      System_Collections_Generic_List_int___Remove(
        servantEquipIdList,
        (int32_t)this,
        (const MethodInfo_4468730 *)Method_System_Collections_Generic_List_int__Remove__);
    }
    if ( ServantEntity__get_IsServantCollection(servantEntity, 0) )
    {
      v11 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v10 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      servantCollectionIdList = v4->fields.servantCollectionIdList;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
      *(_QWORD *)&v14.fields.currentCryptoKey = v11;
      *(_QWORD *)&v14.fields.fakeValue = v10;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v14, 0);
      if ( servantCollectionIdList )
      {
        System_Collections_Generic_List_int___Remove(
          servantCollectionIdList,
          (int32_t)this,
          (const MethodInfo_4468730 *)Method_System_Collections_Generic_List_int__Remove__);
        return;
      }
LABEL_16:
      sub_2213CDC(this, servantEntity);
    }
  }
}


bool ServantMaster__preProcess(ServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 v9; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  MissionNaviTransitionBoardItem_o *v23; // x19
  __int64 v24; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  System_Collections_Generic_IEnumerator_T__o *v37; // [xsp+18h] [xbp-38h]

  if ( (byte_597126C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597126C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__GetEnumerator__);
  v37 = Enumerator;
  while ( 1 )
  {
    if ( !v37 )
      sub_2213CDC(Enumerator, v5);
    klass = v37->klass;
    v7 = *(unsigned __int16 *)&v37->klass->_2.rank;
    if ( *(_WORD *)&v37->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_10;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v9 = sub_224BC3C(v37, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v9)(
            v37,
            *(_QWORD *)(v9 + 8))
        & 1) == 0 )
      break;
    v10 = v37->klass;
    v11 = *(unsigned __int16 *)&v37->klass->_2.rank;
    if ( *(_WORD *)&v37->klass->_2.rank )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantEntity__c **)v12 - 1) != System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_17;
      }
      v13 = (__int64)&v10->vtable[*v12];
    }
    else
    {
LABEL_17:
      v13 = sub_224BC3C(v37, System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            v37,
            *(_QWORD *)(v13 + 8));
    if ( !v14 )
      sub_2213CDC(0, v15);
    v23 = (MissionNaviTransitionBoardItem_o *)(v14 + 48);
    v22 = *(_QWORD *)(v14 + 48);
    *(_QWORD *)(v14 + 56) = v22;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 56), v22, v16, v17, v18, v19, v20, v21);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v24);
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit((System_String_o *)StringLiteral_1/*""*/, 0);
    v23->klass = (MissionNaviTransitionBoardItem_c *)v25;
    sub_2213A04(v23, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  }
  v32 = v37->klass;
  v33 = *(unsigned __int16 *)&v37->klass->_2.rank;
  if ( *(_WORD *)&v37->klass->_2.rank )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_27;
    }
    v35 = (__int64)&v32->vtable[*v34];
  }
  else
  {
LABEL_27:
    v35 = sub_224BC3C(v37, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(v37, *(_QWORD *)(v35 + 8));
  return 1;
}


void ServantMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971279 & 1) == 0 )
  {
    sub_2213A60(&ServantMaster___c_TypeInfo);
    byte_5971279 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ServantMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantMaster___c_TypeInfo->static_fields->__9 = (struct ServantMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantMaster___c___ctor(ServantMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantMaster___c___GetTargetClassMaterialSvtIdList_b__12_0(
        ServantMaster___c_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  return b - a;
}


int32_t ServantMaster___c___GetTargetClassStatusUpSvtIdList_b__13_0(
        ServantMaster___c_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  return b - a;
}


void ServantMaster___c__DisplayClass14_0___ctor(ServantMaster___c__DisplayClass14_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool ServantMaster___c__DisplayClass14_0___CheckFriendShipSvtEquip_b__0(
        ServantMaster___c__DisplayClass14_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  ServantMaster___c__DisplayClass14_0_o *v4; // x20
  struct ServantEntity_o *servant; // x8

  v4 = this;
  if ( (byte_597127A & 1) == 0 )
  {
    this = (ServantMaster___c__DisplayClass14_0_o *)sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_597127A = 1;
  }
  servant = v4->fields.servant;
  if ( !servant )
    sub_2213CDC(this, *(_QWORD *)&x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)servant->fields.individuality,
           x,
           (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
}