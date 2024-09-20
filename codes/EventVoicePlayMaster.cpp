void __fastcall EventVoicePlayMaster___ctor(EventVoicePlayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B37C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string___ctor__);
    byte_4A5B37C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    186,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayMaster__GetConfirmVoiceData(
        EventVoicePlayMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t svtId,
        int32_t svtLimitCnt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantVoiceData____o *result; // x0
  const MethodInfo *v9; // x3

  result = (System_Collections_Generic_List_ServantVoiceData____o *)EventVoicePlayMaster__GetValidEventVoicePlayEntity(
                                                                      this,
                                                                      eventId,
                                                                      slot,
                                                                      svtId,
                                                                      *(const MethodInfo **)&svtLimitCnt);
  if ( result )
    return EventVoicePlayEntity__GetConfirmVoiceData((EventVoicePlayEntity_o *)result, svtId, svtLimitCnt, v9);
  return result;
}


// local variable allocation has failed, the output may be wrong!
EventVoicePlayEntity_o *__fastcall EventVoicePlayMaster__GetEntity(
        EventVoicePlayMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t idx,
        int32_t guideImageId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B37A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__GetEntity__);
    byte_4A5B37A = 1;
  }
  PK = (Il2CppObject *)EventVoicePlayEntity__CreatePK(
                         eventId,
                         slot,
                         idx,
                         guideImageId,
                         *(const MethodInfo **)&guideImageId);
  return (EventVoicePlayEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_311DC8C *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayMaster__GetEventRewardWelcomeVoiceData(
        EventVoicePlayMaster_o *this,
        EventVoicePlayEntity_o **eventVoicePlayEntity,
        int32_t eventId,
        int32_t slot,
        int32_t svtId,
        int32_t svtLimitCnt,
        const MethodInfo *method)
{
  EventVoicePlayEntity_o *ValidEventVoicePlayEntity; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  EventVoicePlayEntity_o *v13; // x22
  const MethodInfo *v14; // x3

  ValidEventVoicePlayEntity = EventVoicePlayMaster__GetValidEventVoicePlayEntity(
                                this,
                                eventId,
                                slot,
                                svtId,
                                *(const MethodInfo **)&svtId);
  if ( ValidEventVoicePlayEntity )
  {
    v13 = ValidEventVoicePlayEntity;
    *eventVoicePlayEntity = ValidEventVoicePlayEntity;
    sub_1B88554((ServantStatusBattleListViewItem_o *)eventVoicePlayEntity, (int32_t)ValidEventVoicePlayEntity, v11, v12);
    return EventVoicePlayEntity__GetEventRewardVoiceRandList(v13, svtId, svtLimitCnt, v14);
  }
  else
  {
    *eventVoicePlayEntity = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)eventVoicePlayEntity, 0, v11, v12);
    return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayMaster__GetEventTradeWelcomeVoiceData(
        EventVoicePlayMaster_o *this,
        EventVoicePlayEntity_o **eventVoicePlayEntity,
        int32_t eventId,
        int32_t slot,
        int32_t svtId,
        int32_t svtLimitCnt,
        const MethodInfo *method)
{
  EventVoicePlayEntity_o *ValidEventVoicePlayEntity; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  EventVoicePlayEntity_o *v13; // x22
  const MethodInfo *v14; // x3

  ValidEventVoicePlayEntity = EventVoicePlayMaster__GetValidEventVoicePlayEntity(
                                this,
                                eventId,
                                slot,
                                svtId,
                                *(const MethodInfo **)&svtId);
  if ( ValidEventVoicePlayEntity )
  {
    v13 = ValidEventVoicePlayEntity;
    *eventVoicePlayEntity = ValidEventVoicePlayEntity;
    sub_1B88554((ServantStatusBattleListViewItem_o *)eventVoicePlayEntity, (int32_t)ValidEventVoicePlayEntity, v11, v12);
    return EventVoicePlayEntity__GetEventTradeWelcomeVoiceList(v13, svtId, svtLimitCnt, v14);
  }
  else
  {
    *eventVoicePlayEntity = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)eventVoicePlayEntity, 0, v11, v12);
    return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall EventVoicePlayMaster__GetShopWelcomeVoiceData(
        EventVoicePlayMaster_o *this,
        EventVoicePlayEntity_o **eventVoicePlayEntity,
        int32_t eventId,
        int32_t slot,
        int32_t svtId,
        int32_t svtLimitCnt,
        const MethodInfo *method)
{
  EventVoicePlayEntity_o *ValidEventVoicePlayEntity; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  EventVoicePlayEntity_o *v13; // x22
  const MethodInfo *v14; // x3

  ValidEventVoicePlayEntity = EventVoicePlayMaster__GetValidEventVoicePlayEntity(
                                this,
                                eventId,
                                slot,
                                svtId,
                                *(const MethodInfo **)&svtId);
  if ( ValidEventVoicePlayEntity )
  {
    v13 = ValidEventVoicePlayEntity;
    *eventVoicePlayEntity = ValidEventVoicePlayEntity;
    sub_1B88554((ServantStatusBattleListViewItem_o *)eventVoicePlayEntity, (int32_t)ValidEventVoicePlayEntity, v11, v12);
    return EventVoicePlayEntity__GetEventShopWelcomeVoiceList(v13, svtId, svtLimitCnt, v14);
  }
  else
  {
    *eventVoicePlayEntity = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)eventVoicePlayEntity, 0, v11, v12);
    return 0LL;
  }
}


EventVoicePlayEntity_array *__fastcall EventVoicePlayMaster__GetTargetEventIdEntityList(
        EventVoicePlayMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4A5B37E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventVoicePlayEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventVoicePlayEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
    byte_4A5B37E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v6 = list;
      methodPtr_low = LOBYTE(EventVoicePlayEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventVoicePlayEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventVoicePlayEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v14 = Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v16[4] = (Il2CppClass *)v6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v6, v10, v11);
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(list, v6);
  }
LABEL_17:
  if ( !v5 )
    goto LABEL_19;
  return (EventVoicePlayEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v5,
                                         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventVoicePlayEntity__ToArray__);
}


EventVoicePlayEntity_o *__fastcall EventVoicePlayMaster__GetValidEventVoicePlayEntity(
        EventVoicePlayMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x22
  System_Collections_Generic_List_object__o *v9; // x21
  int64_t v10; // x1
  int64_t list; // x0
  int32_t Count; // w26
  int64_t v13; // x25
  int32_t v14; // w27
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  int32_t v22; // w23
  Il2CppObject *v23; // x24
  __int64 v24; // x26
  __int64 v25; // x27
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  System_Comparison_T__o *v32; // x19
  Il2CppObject *v33; // x20
  struct EventVoicePlayMaster___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4A5B37F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventVoicePlayEntity__TypeInfo);
    sub_1B885B0(&EventVoicePlayEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventVoicePlayEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_EventVoicePlayMaster___c__GetValidEventVoicePlayEntity_b__6_0__);
    sub_1B885B0(&EventVoicePlayMaster___c_TypeInfo);
    byte_4A5B37F = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventVoicePlayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventVoicePlayEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_46;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  list = NetworkManager__getTime(0LL);
  v13 = list;
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v14,
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v10 = list;
      methodPtr_low = LOBYTE(EventVoicePlayEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(EventVoicePlayEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventVoicePlayEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(list + 16) == eventId && *(_DWORD *)(list + 20) == slot )
      {
        if ( !v8 )
          break;
        items = v8->fields._items;
        v19 = Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__;
        ++v8->fields._version;
        if ( !items )
          break;
        size = v8->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v10;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), v10, v15, v16);
        }
      }
      if ( Count == ++v14 )
        goto LABEL_20;
    }
LABEL_46:
    sub_1B8880C(list, v10);
  }
LABEL_20:
  if ( !v8 )
    goto LABEL_46;
  if ( v8->fields._size >= 1 )
  {
    v22 = 0;
    do
    {
      list = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v8,
                        v22,
                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Item__);
      if ( !list )
        goto LABEL_46;
      v23 = (Il2CppObject *)list;
      if ( *(_QWORD *)(list + 72) <= v13 && v13 <= *(_QWORD *)(list + 80) && *(_DWORD *)(list + 48) == eventId )
      {
        v24 = *(_QWORD *)(list + 28);
        v25 = *(_QWORD *)(list + 36);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v39.fields.currentCryptoKey = v24;
        *(_QWORD *)&v39.fields.fakeValue = v25;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v39, 0LL);
        if ( (_DWORD)list == svtId )
        {
          if ( !v9 )
            goto LABEL_46;
          v28 = v9->fields._items;
          v29 = Method_System_Collections_Generic_List_EventVoicePlayEntity__Add__;
          ++v9->fields._version;
          if ( !v28 )
            goto LABEL_46;
          v30 = v9->fields._size;
          if ( (unsigned int)v30 >= v28->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v23,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &v28->obj.klass + v30;
            v9->fields._size = v30 + 1;
            v31[4] = (Il2CppClass *)v23;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v23, v26, v27);
          }
        }
      }
    }
    while ( ++v22 < v8->fields._size );
  }
  list = (int64_t)EventVoicePlayMaster___c_TypeInfo;
  if ( !EventVoicePlayMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventVoicePlayMaster___c_TypeInfo);
    list = (int64_t)EventVoicePlayMaster___c_TypeInfo;
  }
  v32 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 8LL);
  if ( !v32 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = (int64_t)EventVoicePlayMaster___c_TypeInfo;
    }
    v33 = **(Il2CppObject ***)(list + 184);
    v32 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventVoicePlayEntity__TypeInfo);
    System_Comparison_object____ctor(
      v32,
      v33,
      Method_EventVoicePlayMaster___c__GetValidEventVoicePlayEntity_b__6_0__,
      0LL);
    static_fields = EventVoicePlayMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventVoicePlayEntity__o *)v32;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)v32, v35, v36);
  }
  if ( !v9 )
    goto LABEL_46;
  System_Collections_Generic_List_object___Sort_55571192(
    v9,
    v32,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__Sort__);
  if ( v9->fields._size < 1 )
    return 0LL;
  else
    return (EventVoicePlayEntity_o *)System_Collections_Generic_List_object___get_Item(
                                       v9,
                                       0,
                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventVoicePlayEntity__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventVoicePlayMaster__GetVoiceAssetName(
        EventVoicePlayMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  return EventVoicePlayMaster__getVoiceAssetName(svtId, *(const MethodInfo **)&svtId);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventVoicePlayMaster__TryGetEntity(
        EventVoicePlayMaster_o *this,
        EventVoicePlayEntity_o **entity,
        int32_t eventId,
        int32_t slot,
        int32_t idx,
        int32_t guideImageId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B37B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__TryGetEntity__);
    byte_4A5B37B = 1;
  }
  PK = (Il2CppObject *)EventVoicePlayEntity__CreatePK(eventId, slot, idx, guideImageId, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventVoicePlayMaster__EventVoicePlayEntity__string__TryGetEntity__);
}


System_String_o *__fastcall EventVoicePlayMaster__getVoiceAssetName(int32_t svtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = svtId;
  if ( (byte_4A5B37D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4464/*"ChrVoice_"*/);
    byte_4A5B37D = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_61707032((System_String_o *)StringLiteral_4464/*"ChrVoice_"*/, v2, 0LL);
}


void __fastcall EventVoicePlayMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B380 & 1) == 0 )
  {
    sub_1B885B0(&EventVoicePlayMaster___c_TypeInfo);
    byte_4A5B380 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventVoicePlayMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventVoicePlayMaster___c_TypeInfo->static_fields->__9 = (struct EventVoicePlayMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventVoicePlayMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall EventVoicePlayMaster___c___ctor(EventVoicePlayMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventVoicePlayMaster___c___GetValidEventVoicePlayEntity_b__6_0(
        EventVoicePlayMaster___c_o *this,
        EventVoicePlayEntity_o *a,
        EventVoicePlayEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.idx - a->fields.idx;
}