void __fastcall BannerMaster___ctor(BannerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC08B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__, method);
    byte_49FC08B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    119,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__);
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
  System_Collections_Generic_List_object__o *ValidGachaEntityList; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t Count; // w0
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2
  int32_t v28; // w22
  int32_t v29; // w23
  Il2CppObject *Item; // x0
  BannerEntity_o *v31; // x24
  __int64 methodPtr_low; // x10
  int32_t v33; // w3
  System_String_o **v34; // x25
  System_String_o *v35; // x26
  __int64 v36; // x1
  __int64 v37; // x26
  __int64 v38; // x1
  __int64 v39; // x2
  System_Predicate_object__o *v40; // x25
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Comparison_T__o *v45; // x19
  Il2CppObject *v46; // x21
  struct BannerMaster___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  int32_t v49; // w3

  if ( (byte_49FC08A & 1) == 0 )
  {
    sub_1B640C8(&BannerEntity_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_1B640C8(&System_Comparison_BannerEntity__TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_GachaMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BannerEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaEntity__Find__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BannerEntity__Sort__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BannerEntity__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_BannerEntity___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_BannerEntity__TypeInfo, v13);
    sub_1B640C8(&System_Predicate_GachaEntity__TypeInfo, v14);
    sub_1B640C8(&SceneList_TypeInfo, v15);
    sub_1B640C8(&Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__, v16);
    sub_1B640C8(&Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__, v17);
    sub_1B640C8(&BannerMaster___c__DisplayClass0_0_TypeInfo, v18);
    sub_1B640C8(&BannerMaster___c_TypeInfo, v19);
    byte_49FC08A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_38;
  ValidGachaEntityList = (System_Collections_Generic_List_object__o *)GachaMaster__GetValidGachaEntityList(
                                                                        (GachaMaster_o *)Master_object,
                                                                        0LL);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BannerEntity__TypeInfo,
                                                       v22,
                                                       v23);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BannerEntity___ctor__);
  Master_object = this->fields.list;
  if ( !Master_object )
    goto LABEL_38;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Master_object,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v28 = Count;
    v29 = 0;
    while ( 1 )
    {
      Master_object = this->fields.list;
      if ( !Master_object )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Master_object,
               v29,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v31 = (BannerEntity_o *)Item;
        methodPtr_low = LOBYTE(BannerEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (BannerEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == BannerEntity_TypeInfo )
        {
          Master_object = (void *)BannerEntity__IsEnable((BannerEntity_o *)Item, v26);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            if ( v31->fields.linkType != 2 )
              goto LABEL_41;
            Master_object = BannerEntity__GetLinkBody(v31, 0x2Fu, v27);
            if ( !Master_object )
              break;
            v34 = (System_String_o **)Master_object;
            if ( *((int *)Master_object + 6) >= 1 )
            {
              v35 = (System_String_o *)*((_QWORD *)Master_object + 4);
              if ( !SceneList_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
              Master_object = (void *)SceneList__getSceneType(v35, 0LL);
              if ( (_DWORD)Master_object != 20 )
                goto LABEL_41;
              v37 = sub_1B64314(BannerMaster___c__DisplayClass0_0_TypeInfo, v36, v27);
              System_Object___ctor((Il2CppObject *)v37, 0LL);
              if ( *((int *)v34 + 6) >= 2 )
              {
                if ( !v37 )
                  break;
                System_Int32__TryParse(v34[5], (int32_t *)(v37 + 16), 0LL);
                v40 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_GachaEntity__TypeInfo, v38, v39);
                System_Predicate_object____ctor(
                  v40,
                  (Il2CppObject *)v37,
                  Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__,
                  0LL);
                if ( !ValidGachaEntityList )
                  break;
                Master_object = System_Collections_Generic_List_object___Find(
                                  ValidGachaEntityList,
                                  (System_Predicate_T__o *)v40,
                                  (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_GachaEntity__Find__);
                if ( Master_object )
                {
LABEL_41:
                  if ( !v24 )
                    break;
                  items = v24->fields._items;
                  v42 = Method_System_Collections_Generic_List_BannerEntity__Add__;
                  ++v24->fields._version;
                  if ( !items )
                    break;
                  size = v24->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v24,
                      (Il2CppObject *)v31,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v44 = &items->obj.klass + size;
                    v24->fields._size = size + 1;
                    v44[4] = (Il2CppClass *)v31;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v31, (int32_t)v27, v33);
                  }
                }
              }
            }
          }
        }
      }
      if ( v28 == ++v29 )
        goto LABEL_30;
    }
LABEL_38:
    sub_1B64324(Master_object);
  }
LABEL_30:
  Master_object = BannerMaster___c_TypeInfo;
  if ( !BannerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BannerMaster___c_TypeInfo);
    Master_object = BannerMaster___c_TypeInfo;
  }
  v45 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 8LL);
  if ( !v45 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = BannerMaster___c_TypeInfo;
    }
    v46 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v45 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_BannerEntity__TypeInfo, v26, v27);
    System_Comparison_object____ctor(v45, v46, Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__, 0LL);
    static_fields = BannerMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Comparison_BannerEntity__o *)v45;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)v45, v48, v49);
  }
  if ( !v24 )
    goto LABEL_38;
  System_Collections_Generic_List_object___Sort_55243320(
    v24,
    v45,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_BannerEntity__Sort__);
  return (BannerEntity_array *)System_Collections_Generic_List_object___ToArray(
                                 v24,
                                 (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BannerEntity__ToArray__);
}


void __fastcall BannerMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC08C & 1) == 0 )
  {
    sub_1B640C8(&BannerMaster___c_TypeInfo, v1);
    byte_49FC08C = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BannerMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BannerMaster___c_TypeInfo->static_fields->__9 = (struct BannerMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BannerMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return n->fields.id == this->fields.gachaId;
}