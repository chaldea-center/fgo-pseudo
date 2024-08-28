void __fastcall BannerMaster___ctor(BannerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A1F744 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__, method);
    byte_4A1F744 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    119,
    (const MethodInfo_30F8720 *)Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__);
}


BannerEntity_array *__fastcall BannerMaster__GetEnableEntitiyList(BannerMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  void *Master_object; // x0
  const MethodInfo *v21; // x1
  System_Collections_Generic_List_object__o *ValidGachaEntityList; // x21
  System_Collections_Generic_List_object__o *v23; // x20
  int32_t Count; // w0
  int32_t v25; // w22
  int32_t v26; // w23
  Il2CppObject *Item; // x0
  BannerEntity_o *v28; // x24
  __int64 methodPtr_low; // x10
  const MethodInfo *v30; // x2
  int32_t v31; // w3
  System_String_o **v32; // x25
  System_String_o *v33; // x26
  __int64 v34; // x26
  System_Predicate_object__o *v35; // x25
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Comparison_T__o *v40; // x19
  Il2CppObject *v41; // x21
  struct BannerMaster___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  int32_t v44; // w3

  if ( (byte_4A1F743 & 1) == 0 )
  {
    sub_1B715CC(&BannerEntity_TypeInfo, method);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v3);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_1B715CC(&System_Comparison_BannerEntity__TypeInfo, v5);
    sub_1B715CC(&Method_DataManager_GetMaster_GachaMaster___, v6);
    sub_1B715CC(&DataManager_TypeInfo, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_BannerEntity__Add__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_GachaEntity__Find__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_BannerEntity__Sort__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_BannerEntity__ToArray__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_BannerEntity___ctor__, v12);
    sub_1B715CC(&System_Collections_Generic_List_BannerEntity__TypeInfo, v13);
    sub_1B715CC(&System_Predicate_GachaEntity__TypeInfo, v14);
    sub_1B715CC(&SceneList_TypeInfo, v15);
    sub_1B715CC(&Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__, v16);
    sub_1B715CC(&Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__, v17);
    sub_1B715CC(&BannerMaster___c__DisplayClass0_0_TypeInfo, v18);
    sub_1B715CC(&BannerMaster___c_TypeInfo, v19);
    byte_4A1F743 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_38;
  ValidGachaEntityList = (System_Collections_Generic_List_object__o *)GachaMaster__GetValidGachaEntityList(
                                                                        (GachaMaster_o *)Master_object,
                                                                        0LL);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_BannerEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_BannerEntity___ctor__);
  Master_object = this->fields.list;
  if ( !Master_object )
    goto LABEL_38;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Master_object,
            (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v25 = Count;
    v26 = 0;
    while ( 1 )
    {
      Master_object = this->fields.list;
      if ( !Master_object )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Master_object,
               v26,
               (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v28 = (BannerEntity_o *)Item;
        methodPtr_low = LOBYTE(BannerEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (BannerEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == BannerEntity_TypeInfo )
        {
          Master_object = (void *)BannerEntity__IsEnable((BannerEntity_o *)Item, v21);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            if ( v28->fields.linkType != 2 )
              goto LABEL_41;
            Master_object = BannerEntity__GetLinkBody(v28, 0x2Fu, v30);
            if ( !Master_object )
              break;
            v32 = (System_String_o **)Master_object;
            if ( *((int *)Master_object + 6) >= 1 )
            {
              v33 = (System_String_o *)*((_QWORD *)Master_object + 4);
              if ( !SceneList_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
              Master_object = (void *)SceneList__getSceneType(v33, 0LL);
              if ( (_DWORD)Master_object != 20 )
                goto LABEL_41;
              v34 = sub_1B71818(BannerMaster___c__DisplayClass0_0_TypeInfo);
              System_Object___ctor((Il2CppObject *)v34, 0LL);
              if ( *((int *)v32 + 6) >= 2 )
              {
                if ( !v34 )
                  break;
                System_Int32__TryParse(v32[5], (int32_t *)(v34 + 16), 0LL);
                v35 = (System_Predicate_object__o *)sub_1B71818(System_Predicate_GachaEntity__TypeInfo);
                System_Predicate_object____ctor(
                  v35,
                  (Il2CppObject *)v34,
                  Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__,
                  0LL);
                if ( !ValidGachaEntityList )
                  break;
                Master_object = System_Collections_Generic_List_object___Find(
                                  ValidGachaEntityList,
                                  (System_Predicate_T__o *)v35,
                                  (const MethodInfo_34D08C8 *)Method_System_Collections_Generic_List_GachaEntity__Find__);
                if ( Master_object )
                {
LABEL_41:
                  if ( !v23 )
                    break;
                  items = v23->fields._items;
                  v37 = Method_System_Collections_Generic_List_BannerEntity__Add__;
                  ++v23->fields._version;
                  if ( !items )
                    break;
                  size = v23->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v23,
                      (Il2CppObject *)v28,
                      *(const MethodInfo_34D0260 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v39 = &items->obj.klass + size;
                    v23->fields._size = size + 1;
                    v39[4] = (Il2CppClass *)v28;
                    sub_1B71570((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v28, (int32_t)v30, v31);
                  }
                }
              }
            }
          }
        }
      }
      if ( v25 == ++v26 )
        goto LABEL_30;
    }
LABEL_38:
    sub_1B71828(Master_object, v21);
  }
LABEL_30:
  Master_object = BannerMaster___c_TypeInfo;
  if ( !BannerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BannerMaster___c_TypeInfo);
    Master_object = BannerMaster___c_TypeInfo;
  }
  v40 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 8LL);
  if ( !v40 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = BannerMaster___c_TypeInfo;
    }
    v41 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v40 = (System_Comparison_T__o *)sub_1B71818(System_Comparison_BannerEntity__TypeInfo);
    System_Comparison_object____ctor(v40, v41, Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__, 0LL);
    static_fields = BannerMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Comparison_BannerEntity__o *)v40;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)v40, v43, v44);
  }
  if ( !v23 )
    goto LABEL_38;
  System_Collections_Generic_List_object___Sort_55385380(
    v23,
    v40,
    (const MethodInfo_34D1D24 *)Method_System_Collections_Generic_List_BannerEntity__Sort__);
  return (BannerEntity_array *)System_Collections_Generic_List_object___ToArray(
                                 v23,
                                 (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_BannerEntity__ToArray__);
}


void __fastcall BannerMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A1F745 & 1) == 0 )
  {
    sub_1B715CC(&BannerMaster___c_TypeInfo, v1);
    byte_4A1F745 = 1;
  }
  v2 = (Il2CppObject *)sub_1B71818(BannerMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BannerMaster___c_TypeInfo->static_fields->__9 = (struct BannerMaster___c_o *)v2;
  sub_1B71570((ServantStatusBattleListViewItem_o *)BannerMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B71828(this, a);
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
    sub_1B71828(this, 0LL);
  return n->fields.id == this->fields.gachaId;
}