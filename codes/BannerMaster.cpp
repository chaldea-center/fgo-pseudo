void BannerMaster___ctor(BannerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C375CC & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__);
    byte_4C375CC = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    123,
    (const MethodInfo_3394514 *)Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__);
}


BannerEntity_array *BannerMaster__GetEnableEntitiyList(BannerMaster_o *this, const MethodInfo *method)
{
  void *Master_object; // x0
  System_Collections_Generic_List_object__o *ValidGachaEntityList; // x21
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t Count; // w0
  int32_t v7; // w22
  int32_t v8; // w23
  Il2CppObject *Item; // x0
  const MethodInfo *v10; // x1
  BannerEntity_o *v11; // x24
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  System_String_o **v14; // x25
  System_String_o *v15; // x26
  __int64 v16; // x26
  System_Predicate_object__o *v17; // x25
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Comparison_T__o *v22; // x19
  Il2CppObject *v23; // x21
  struct BannerMaster___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4C375CB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_BannerEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_BannerEntity__get_Item__);
    sub_1C32C20(&System_Comparison_BannerEntity__TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BannerEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GachaEntity__Find__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BannerEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BannerEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BannerEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BannerEntity__TypeInfo);
    sub_1C32C20(&System_Predicate_GachaEntity__TypeInfo);
    sub_1C32C20(&SceneList_TypeInfo);
    sub_1C32C20(&Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__);
    sub_1C32C20(&Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__);
    sub_1C32C20(&BannerMaster___c__DisplayClass0_0_TypeInfo);
    sub_1C32C20(&BannerMaster___c_TypeInfo);
    byte_4C375CB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_36;
  ValidGachaEntityList = (System_Collections_Generic_List_object__o *)GachaMaster__GetValidGachaEntityList(
                                                                        (GachaMaster_o *)Master_object,
                                                                        0);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BannerEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BannerEntity___ctor__);
  Master_object = this->fields.list;
  if ( !Master_object )
    goto LABEL_36;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Master_object,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_BannerEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      Master_object = this->fields.list;
      if ( !Master_object )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Master_object,
               v8,
               (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_BannerEntity__get_Item__);
      if ( Item )
      {
        v11 = (BannerEntity_o *)Item;
        Master_object = (void *)BannerEntity__IsEnable((BannerEntity_o *)Item, v10);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( v11->fields.linkType != 2 )
            goto LABEL_39;
          Master_object = BannerEntity__GetLinkBody(v11, 0x2Fu, v12);
          if ( !Master_object )
            break;
          v14 = (System_String_o **)Master_object;
          if ( *((int *)Master_object + 6) >= 1 )
          {
            v15 = (System_String_o *)*((_QWORD *)Master_object + 4);
            if ( !SceneList_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
            Master_object = (void *)SceneList__getSceneType(v15, 0);
            if ( (_DWORD)Master_object != 20 )
              goto LABEL_39;
            v16 = sub_1C32E6C(BannerMaster___c__DisplayClass0_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v16, 0);
            if ( *((int *)v14 + 6) >= 2 )
            {
              if ( !v16 )
                break;
              System_Int32__TryParse(v14[5], (int32_t *)(v16 + 16), 0);
              v17 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_GachaEntity__TypeInfo);
              System_Predicate_object____ctor(
                v17,
                (Il2CppObject *)v16,
                Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__,
                0);
              if ( !ValidGachaEntityList )
                break;
              Master_object = System_Collections_Generic_List_object___Find(
                                ValidGachaEntityList,
                                (System_Predicate_T__o *)v17,
                                (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_GachaEntity__Find__);
              if ( Master_object )
              {
LABEL_39:
                if ( !v5 )
                  break;
                items = v5->fields._items;
                v19 = Method_System_Collections_Generic_List_BannerEntity__Add__;
                ++v5->fields._version;
                if ( !items )
                  break;
                size = v5->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v5,
                    (Il2CppObject *)v11,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
                }
                else
                {
                  v21 = &items->obj.klass + size;
                  v5->fields._size = size + 1;
                  v21[4] = (Il2CppClass *)v11;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, (int32_t)v12, v13);
                }
              }
            }
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_28;
    }
LABEL_36:
    sub_1C32E7C(Master_object);
  }
LABEL_28:
  Master_object = BannerMaster___c_TypeInfo;
  if ( !BannerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BannerMaster___c_TypeInfo);
    Master_object = BannerMaster___c_TypeInfo;
  }
  v22 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 8LL);
  if ( !v22 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = BannerMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v22 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_BannerEntity__TypeInfo);
    System_Comparison_object____ctor(v22, v23, Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__, 0);
    static_fields = BannerMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Comparison_BannerEntity__o *)v22;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)v22, v25, v26);
  }
  if ( !v5 )
    goto LABEL_36;
  System_Collections_Generic_List_object___Sort_58303104(
    v5,
    v22,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_BannerEntity__Sort__);
  return (BannerEntity_array *)System_Collections_Generic_List_object___ToArray(
                                 v5,
                                 (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BannerEntity__ToArray__);
}


void BannerMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C375CD & 1) == 0 )
  {
    sub_1C32C20(&BannerMaster___c_TypeInfo);
    byte_4C375CD = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(BannerMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BannerMaster___c_TypeInfo->static_fields->__9 = (struct BannerMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)BannerMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BannerMaster___c___ctor(BannerMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BannerMaster___c___GetEnableEntitiyList_b__0_0(
        BannerMaster___c_o *this,
        BannerEntity_o *a,
        BannerEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C32E7C(this);
  return b->fields.terminalBannerPriority - a->fields.terminalBannerPriority;
}


void BannerMaster___c__DisplayClass0_0___ctor(BannerMaster___c__DisplayClass0_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BannerMaster___c__DisplayClass0_0___GetEnableEntitiyList_b__1(
        BannerMaster___c__DisplayClass0_0_o *this,
        GachaEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C32E7C(this);
  return n->fields.id == this->fields.gachaId;
}