void __fastcall BannerMaster___ctor(BannerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC76F9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__, method);
    byte_4BC76F9 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    123,
    (const MethodInfo_3246354 *)Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__);
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
  void *Master_object; // x0
  const MethodInfo *v20; // x1
  System_Collections_Generic_List_object__o *ValidGachaEntityList; // x21
  System_Collections_Generic_List_object__o *v22; // x20
  int32_t Count; // w0
  int32_t v24; // w22
  int32_t v25; // w23
  Il2CppObject *Item; // x0
  BannerEntity_o *v27; // x24
  const MethodInfo *v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_String_o **v34; // x25
  System_String_o *v35; // x26
  __int64 v36; // x26
  System_Predicate_object__o *v37; // x25
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Comparison_T__o *v42; // x19
  Il2CppObject *v43; // x21
  struct BannerMaster___c_StaticFields *static_fields; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7

  if ( (byte_4BC76F8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_BannerEntity__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_BannerEntity__get_Item__, v3);
    sub_1C1ABD4(&System_Comparison_BannerEntity__TypeInfo, v4);
    sub_1C1ABD4(&Method_DataManager_GetMaster_GachaMaster___, v5);
    sub_1C1ABD4(&DataManager_TypeInfo, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BannerEntity__Add__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GachaEntity__Find__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BannerEntity__Sort__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BannerEntity__ToArray__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BannerEntity___ctor__, v11);
    sub_1C1ABD4(&System_Collections_Generic_List_BannerEntity__TypeInfo, v12);
    sub_1C1ABD4(&System_Predicate_GachaEntity__TypeInfo, v13);
    sub_1C1ABD4(&SceneList_TypeInfo, v14);
    sub_1C1ABD4(&Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__, v15);
    sub_1C1ABD4(&Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__, v16);
    sub_1C1ABD4(&BannerMaster___c__DisplayClass0_0_TypeInfo, v17);
    sub_1C1ABD4(&BannerMaster___c_TypeInfo, v18);
    byte_4BC76F8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_36;
  ValidGachaEntityList = (System_Collections_Generic_List_object__o *)GachaMaster__GetValidGachaEntityList(
                                                                        (GachaMaster_o *)Master_object,
                                                                        0LL);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BannerEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BannerEntity___ctor__);
  Master_object = this->fields.list;
  if ( !Master_object )
    goto LABEL_36;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Master_object,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_BannerEntity__get_Count__);
  if ( Count >= 1 )
  {
    v24 = Count;
    v25 = 0;
    while ( 1 )
    {
      Master_object = this->fields.list;
      if ( !Master_object )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Master_object,
               v25,
               (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_BannerEntity__get_Item__);
      if ( Item )
      {
        v27 = (BannerEntity_o *)Item;
        Master_object = (void *)BannerEntity__IsEnable((BannerEntity_o *)Item, v20);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( v27->fields.linkType != 2 )
            goto LABEL_39;
          Master_object = BannerEntity__GetLinkBody(v27, 0x2Fu, v28);
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
              goto LABEL_39;
            v36 = sub_1C1AE20(BannerMaster___c__DisplayClass0_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v36, 0LL);
            if ( *((int *)v34 + 6) >= 2 )
            {
              if ( !v36 )
                break;
              System_Int32__TryParse(v34[5], (int32_t *)(v36 + 16), 0LL);
              v37 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_GachaEntity__TypeInfo);
              System_Predicate_object____ctor(
                v37,
                (Il2CppObject *)v36,
                Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__,
                0LL);
              if ( !ValidGachaEntityList )
                break;
              Master_object = System_Collections_Generic_List_object___Find(
                                ValidGachaEntityList,
                                (System_Predicate_T__o *)v37,
                                (const MethodInfo_363CEF8 *)Method_System_Collections_Generic_List_GachaEntity__Find__);
              if ( Master_object )
              {
LABEL_39:
                if ( !v22 )
                  break;
                items = v22->fields._items;
                v39 = Method_System_Collections_Generic_List_BannerEntity__Add__;
                ++v22->fields._version;
                if ( !items )
                  break;
                size = v22->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v22,
                    (Il2CppObject *)v27,
                    *(const MethodInfo_363C890 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
                }
                else
                {
                  v41 = &items->obj.klass + size;
                  v22->fields._size = size + 1;
                  v41[4] = (Il2CppClass *)v27;
                  sub_1C1AB78(
                    (PartyOrganizationUtility_o *)(v41 + 4),
                    (int64_t)v27,
                    (int64_t)v28,
                    v29,
                    v30,
                    v31,
                    v32,
                    v33);
                }
              }
            }
          }
        }
      }
      if ( v24 == ++v25 )
        goto LABEL_28;
    }
LABEL_36:
    sub_1C1AE30(Master_object, v20);
  }
LABEL_28:
  Master_object = BannerMaster___c_TypeInfo;
  if ( !BannerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BannerMaster___c_TypeInfo);
    Master_object = BannerMaster___c_TypeInfo;
  }
  v42 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 8LL);
  if ( !v42 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = BannerMaster___c_TypeInfo;
    }
    v43 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v42 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_BannerEntity__TypeInfo);
    System_Comparison_object____ctor(v42, v43, Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__, 0LL);
    static_fields = BannerMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Comparison_BannerEntity__o *)v42;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)v42, v45, v46, v47, v48, v49, v50);
  }
  if ( !v22 )
    goto LABEL_36;
  System_Collections_Generic_List_object___Sort_56877908(
    v22,
    v42,
    (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_BannerEntity__Sort__);
  return (BannerEntity_array *)System_Collections_Generic_List_object___ToArray(
                                 v22,
                                 (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BannerEntity__ToArray__);
}


void __fastcall BannerMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC76FA & 1) == 0 )
  {
    sub_1C1ABD4(&BannerMaster___c_TypeInfo, v1);
    byte_4BC76FA = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(BannerMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BannerMaster___c_TypeInfo->static_fields->__9 = (struct BannerMaster___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)BannerMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(this, a);
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
    sub_1C1AE30(this, 0LL);
  return n->fields.id == this->fields.gachaId;
}