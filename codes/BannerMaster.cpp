void __fastcall BannerMaster___ctor(BannerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC190 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__);
    byte_4BDC190 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    123,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__);
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
  const MethodInfo *v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_String_o **v18; // x25
  System_String_o *v19; // x26
  __int64 v20; // x26
  System_Predicate_object__o *v21; // x25
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Comparison_T__o *v26; // x19
  Il2CppObject *v27; // x21
  struct BannerMaster___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4BDC18F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_BannerEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_BannerEntity__get_Item__);
    sub_1C21E38(&System_Comparison_BannerEntity__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BannerEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity__Find__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BannerEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BannerEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BannerEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BannerEntity__TypeInfo);
    sub_1C21E38(&System_Predicate_GachaEntity__TypeInfo);
    sub_1C21E38(&SceneList_TypeInfo);
    sub_1C21E38(&Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__);
    sub_1C21E38(&Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__);
    sub_1C21E38(&BannerMaster___c__DisplayClass0_0_TypeInfo);
    sub_1C21E38(&BannerMaster___c_TypeInfo);
    byte_4BDC18F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_36;
  ValidGachaEntityList = (System_Collections_Generic_List_object__o *)GachaMaster__GetValidGachaEntityList(
                                                                        (GachaMaster_o *)Master_object,
                                                                        0LL);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BannerEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BannerEntity___ctor__);
  Master_object = this->fields.list;
  if ( !Master_object )
    goto LABEL_36;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Master_object,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_BannerEntity__get_Count__);
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
               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_BannerEntity__get_Item__);
      if ( Item )
      {
        v11 = (BannerEntity_o *)Item;
        Master_object = (void *)BannerEntity__IsEnable((BannerEntity_o *)Item, v4);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( v11->fields.linkType != 2 )
            goto LABEL_39;
          Master_object = BannerEntity__GetLinkBody(v11, 0x2Fu, v12);
          if ( !Master_object )
            break;
          v18 = (System_String_o **)Master_object;
          if ( *((int *)Master_object + 6) >= 1 )
          {
            v19 = (System_String_o *)*((_QWORD *)Master_object + 4);
            if ( !SceneList_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
            Master_object = (void *)SceneList__getSceneType(v19, 0LL);
            if ( (_DWORD)Master_object != 20 )
              goto LABEL_39;
            v20 = sub_1C22084(BannerMaster___c__DisplayClass0_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v20, 0LL);
            if ( *((int *)v18 + 6) >= 2 )
            {
              if ( !v20 )
                break;
              System_Int32__TryParse(v18[5], (int32_t *)(v20 + 16), 0LL);
              v21 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_GachaEntity__TypeInfo);
              System_Predicate_object____ctor(
                v21,
                (Il2CppObject *)v20,
                Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__,
                0LL);
              if ( !ValidGachaEntityList )
                break;
              Master_object = System_Collections_Generic_List_object___Find(
                                ValidGachaEntityList,
                                (System_Predicate_T__o *)v21,
                                (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_GachaEntity__Find__);
              if ( Master_object )
              {
LABEL_39:
                if ( !v6 )
                  break;
                items = v6->fields._items;
                v23 = Method_System_Collections_Generic_List_BannerEntity__Add__;
                ++v6->fields._version;
                if ( !items )
                  break;
                size = v6->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v6,
                    (Il2CppObject *)v11,
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
                }
                else
                {
                  v25 = &items->obj.klass + size;
                  v6->fields._size = size + 1;
                  v25[4] = (Il2CppClass *)v11;
                  sub_1C21DDC(
                    (PartyOrganizationUtility_o *)(v25 + 4),
                    (int64_t)v11,
                    (int64_t)v12,
                    v13,
                    v14,
                    v15,
                    v16,
                    v17);
                }
              }
            }
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_28;
    }
LABEL_36:
    sub_1C22094(Master_object, v4);
  }
LABEL_28:
  Master_object = BannerMaster___c_TypeInfo;
  if ( !BannerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BannerMaster___c_TypeInfo);
    Master_object = BannerMaster___c_TypeInfo;
  }
  v26 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 8LL);
  if ( !v26 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = BannerMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v26 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_BannerEntity__TypeInfo);
    System_Comparison_object____ctor(v26, v27, Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__, 0LL);
    static_fields = BannerMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Comparison_BannerEntity__o *)v26;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)v26, v29, v30, v31, v32, v33, v34);
  }
  if ( !v6 )
    goto LABEL_36;
  System_Collections_Generic_List_object___Sort_56953720(
    v6,
    v26,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_BannerEntity__Sort__);
  return (BannerEntity_array *)System_Collections_Generic_List_object___ToArray(
                                 v6,
                                 (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BannerEntity__ToArray__);
}


void __fastcall BannerMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC191 & 1) == 0 )
  {
    sub_1C21E38(&BannerMaster___c_TypeInfo);
    byte_4BDC191 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BannerMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BannerMaster___c_TypeInfo->static_fields->__9 = (struct BannerMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BannerMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, a);
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
    sub_1C22094(this, 0LL);
  return n->fields.id == this->fields.gachaId;
}