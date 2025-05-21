void __fastcall GrandServantListData___ctor(GrandServantListData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  GrandServantListData_Fields *p_fields; // x19
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  System_Object_array *Entitys; // x20
  __int64 v15; // x2
  int max_length; // w8
  unsigned int v17; // w26
  Il2CppClass **v18; // x8
  UserServantGrandEntity_o *v19; // x21
  int64_t userSvtId; // x22
  int32_t grandGraphId; // w23
  System_Int64_array *EquipUserServantIdList; // x24
  int32_t v23; // w25
  GrandServantListSlotData_o *v24; // x21
  const MethodInfo *v25; // x5
  Il2CppClass *klass; // x8
  _QWORD *v27; // x9
  __int64 monitor_low; // x10
  void **v29; // x8

  if ( (byte_4B3F967 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_GrandGraphMaster___, method);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantGrandMaster___, v3);
    sub_1BDB878(&DataManager_TypeInfo, v4);
    sub_1BDB878(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__, v5);
    sub_1BDB878(&GrandServantListSlotData_TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_GrandServantListSlotData__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_GrandServantListSlotData__TypeInfo, v9);
    byte_4B3F967 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
  this->fields.slotDataList = (struct System_Collections_Generic_List_GrandServantListSlotData__o *)v10;
  p_fields = &this->fields;
  sub_1BDB81C(&this->fields);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              (const MethodInfo_32E5B78 *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !Entitys )
    goto LABEL_19;
  max_length = Entitys->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1BDBADC(Master_object, v13, v15);
      v18 = &Entitys->obj.klass + (int)v17;
      v19 = (UserServantGrandEntity_o *)v18[4];
      if ( !v19 )
        break;
      userSvtId = v19->fields.userSvtId;
      if ( userSvtId )
      {
        grandGraphId = v19->fields.grandGraphId;
        EquipUserServantIdList = UserServantGrandEntity__GetEquipUserServantIdList(
                                   (UserServantGrandEntity_o *)v18[4],
                                   0LL);
        v23 = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(v19, 0LL);
        v24 = (GrandServantListSlotData_o *)sub_1BDBAC4(GrandServantListSlotData_TypeInfo);
        GrandServantListSlotData___ctor_32107964(v24, grandGraphId, userSvtId, EquipUserServantIdList, v23, v25);
        Master_object = (Il2CppObject *)p_fields->slotDataList;
        if ( !p_fields->slotDataList )
          break;
        klass = Master_object[1].klass;
        v27 = Method_System_Collections_Generic_List_GrandServantListSlotData__Add__;
        ++HIDWORD(Master_object[1].monitor);
        if ( !klass )
          break;
        monitor_low = SLODWORD(Master_object[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Master_object,
            (Il2CppObject *)v24,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &klass->_1.image + monitor_low;
          LODWORD(Master_object[1].monitor) = monitor_low + 1;
          v29[4] = v24;
          Master_object = (Il2CppObject *)sub_1BDB81C(v29 + 4);
        }
      }
      max_length = Entitys->max_length;
      if ( (int)++v17 >= max_length )
        return;
    }
LABEL_19:
    sub_1BDBAD4(Master_object, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
GrandServantListSlotData_o *__fastcall GrandServantListData__GetSlotData(
        GrandServantListData_o *this,
        int32_t parentClassBoardBaseId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  System_Collections_Generic_List_object__o *v11; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_List_GrandServantListSlotData__o *slotDataList; // x20
  System_Func_object__bool__o *v14; // x22
  Il2CppObject *v15; // x20
  int32_t v16; // w21
  const MethodInfo *v17; // x2
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8

  if ( (byte_4B3F968 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Linq_Enumerable_FirstOrDefault_GrandServantListSlotData___,
      *(_QWORD *)&parentClassBoardBaseId);
    sub_1BDB878(&System_Func_GrandServantListSlotData__bool__TypeInfo, v5);
    sub_1BDB878(&GrandServantListSlotData_TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_GrandServantListSlotData__Add__, v7);
    sub_1BDB878(&Method_GrandServantListData___c__DisplayClass2_0__GetSlotData_b__0__, v8);
    sub_1BDB878(&GrandServantListData___c__DisplayClass2_0_TypeInfo, v9);
    byte_4B3F968 = 1;
  }
  v10 = sub_1BDBAC4(GrandServantListData___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_12;
  *(_DWORD *)(v10 + 16) = parentClassBoardBaseId;
  slotDataList = this->fields.slotDataList;
  v14 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_GrandServantListSlotData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_GrandServantListData___c__DisplayClass2_0__GetSlotData_b__0__,
    0LL);
  v15 = System_Linq_Enumerable__FirstOrDefault_object__50698552(
          (System_Collections_Generic_IEnumerable_TSource__o *)slotDataList,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_3059938 *)Method_System_Linq_Enumerable_FirstOrDefault_GrandServantListSlotData___);
  if ( !v15 )
  {
    v16 = *(_DWORD *)(v10 + 16);
    v15 = (Il2CppObject *)sub_1BDBAC4(GrandServantListSlotData_TypeInfo);
    GrandServantListSlotData___ctor((GrandServantListSlotData_o *)v15, v16, v17);
  }
  v11 = (System_Collections_Generic_List_object__o *)this->fields.slotDataList;
  if ( !v11
    || (items = v11->fields._items,
        v19 = Method_System_Collections_Generic_List_GrandServantListSlotData__Add__,
        ++v11->fields._version,
        !items) )
  {
LABEL_12:
    sub_1BDBAD4(v11, v12);
  }
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      v15,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v15;
    sub_1BDB81C(v21 + 4);
  }
  return (GrandServantListSlotData_o *)v15;
}


void __fastcall GrandServantListData___c__DisplayClass2_0___ctor(
        GrandServantListData___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandServantListData___c__DisplayClass2_0___GetSlotData_b__0(
        GrandServantListData___c__DisplayClass2_0_o *this,
        GrandServantListSlotData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1BDBAD4(this, 0LL);
  return d->fields._ParentClassBoardBaseId_k__BackingField == this->fields.parentClassBoardBaseId;
}