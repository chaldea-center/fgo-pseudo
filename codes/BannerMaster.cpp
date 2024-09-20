void __fastcall BannerMaster___ctor(BannerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5ADCE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__);
    byte_4A5ADCE = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    119,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__);
}


BannerEntity_array *__fastcall BannerMaster__GetEnableEntitiyList(BannerMaster_o *this, const MethodInfo *method)
{
  void *Master_object; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *ValidGachaEntityList; // x21
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t Count; // w0
  int32_t v8; // w22
  int32_t v9; // w23
  Il2CppObject *Item; // x0
  BannerEntity_o *v11; // x24
  __int64 methodPtr_low; // x10
  const MethodInfo *v13; // x2
  int32_t v14; // w3
  System_String_o **v15; // x25
  System_String_o *v16; // x26
  __int64 v17; // x26
  System_Predicate_object__o *v18; // x25
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Comparison_T__o *v23; // x19
  Il2CppObject *v24; // x21
  struct BannerMaster___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3

  if ( (byte_4A5ADCD & 1) == 0 )
  {
    sub_1B885B0(&BannerEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_BannerEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BannerEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GachaEntity__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BannerEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BannerEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BannerEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BannerEntity__TypeInfo);
    sub_1B885B0(&System_Predicate_GachaEntity__TypeInfo);
    sub_1B885B0(&SceneList_TypeInfo);
    sub_1B885B0(&Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__);
    sub_1B885B0(&Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__);
    sub_1B885B0(&BannerMaster___c__DisplayClass0_0_TypeInfo);
    sub_1B885B0(&BannerMaster___c_TypeInfo);
    byte_4A5ADCD = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_38;
  ValidGachaEntityList = (System_Collections_Generic_List_object__o *)GachaMaster__GetValidGachaEntityList(
                                                                        (GachaMaster_o *)Master_object,
                                                                        0LL);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BannerEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BannerEntity___ctor__);
  Master_object = this->fields.list;
  if ( !Master_object )
    goto LABEL_38;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Master_object,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    while ( 1 )
    {
      Master_object = this->fields.list;
      if ( !Master_object )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Master_object,
               v9,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v11 = (BannerEntity_o *)Item;
        methodPtr_low = LOBYTE(BannerEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (BannerEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == BannerEntity_TypeInfo )
        {
          Master_object = (void *)BannerEntity__IsEnable((BannerEntity_o *)Item, v4);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            if ( v11->fields.linkType != 2 )
              goto LABEL_41;
            Master_object = BannerEntity__GetLinkBody(v11, 0x2Fu, v13);
            if ( !Master_object )
              break;
            v15 = (System_String_o **)Master_object;
            if ( *((int *)Master_object + 6) >= 1 )
            {
              v16 = (System_String_o *)*((_QWORD *)Master_object + 4);
              if ( !SceneList_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
              Master_object = (void *)SceneList__getSceneType(v16, 0LL);
              if ( (_DWORD)Master_object != 20 )
                goto LABEL_41;
              v17 = sub_1B887FC(BannerMaster___c__DisplayClass0_0_TypeInfo);
              System_Object___ctor((Il2CppObject *)v17, 0LL);
              if ( *((int *)v15 + 6) >= 2 )
              {
                if ( !v17 )
                  break;
                System_Int32__TryParse(v15[5], (int32_t *)(v17 + 16), 0LL);
                v18 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_GachaEntity__TypeInfo);
                System_Predicate_object____ctor(
                  v18,
                  (Il2CppObject *)v17,
                  Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__,
                  0LL);
                if ( !ValidGachaEntityList )
                  break;
                Master_object = System_Collections_Generic_List_object___Find(
                                  ValidGachaEntityList,
                                  (System_Predicate_T__o *)v18,
                                  (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_GachaEntity__Find__);
                if ( Master_object )
                {
LABEL_41:
                  if ( !v6 )
                    break;
                  items = v6->fields._items;
                  v20 = Method_System_Collections_Generic_List_BannerEntity__Add__;
                  ++v6->fields._version;
                  if ( !items )
                    break;
                  size = v6->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v6,
                      (Il2CppObject *)v11,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v22 = &items->obj.klass + size;
                    v6->fields._size = size + 1;
                    v22[4] = (Il2CppClass *)v11;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v11, (int32_t)v13, v14);
                  }
                }
              }
            }
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_30;
    }
LABEL_38:
    sub_1B8880C(Master_object, v4);
  }
LABEL_30:
  Master_object = BannerMaster___c_TypeInfo;
  if ( !BannerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BannerMaster___c_TypeInfo);
    Master_object = BannerMaster___c_TypeInfo;
  }
  v23 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 8LL);
  if ( !v23 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = BannerMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v23 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_BannerEntity__TypeInfo);
    System_Comparison_object____ctor(v23, v24, Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__, 0LL);
    static_fields = BannerMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Comparison_BannerEntity__o *)v23;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)v23, v26, v27);
  }
  if ( !v6 )
    goto LABEL_38;
  System_Collections_Generic_List_object___Sort_55571192(
    v6,
    v23,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_BannerEntity__Sort__);
  return (BannerEntity_array *)System_Collections_Generic_List_object___ToArray(
                                 v6,
                                 (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BannerEntity__ToArray__);
}


void __fastcall BannerMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5ADCF & 1) == 0 )
  {
    sub_1B885B0(&BannerMaster___c_TypeInfo);
    byte_4A5ADCF = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BannerMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BannerMaster___c_TypeInfo->static_fields->__9 = (struct BannerMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BannerMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall BannerMaster___c___ctor(BannerMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BannerMaster___c___GetEnableEntitiyList_b__0_0(
        BannerMaster___c_o *this,
        BannerEntity_o *a,
        BannerEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.terminalBannerPriority - a->fields.terminalBannerPriority;
}


void __fastcall BannerMaster___c__DisplayClass0_0___ctor(
        BannerMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BannerMaster___c__DisplayClass0_0___GetEnableEntitiyList_b__1(
        BannerMaster___c__DisplayClass0_0_o *this,
        GachaEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B8880C(this, 0LL);
  return n->fields.id == this->fields.gachaId;
}