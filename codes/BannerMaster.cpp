void __fastcall BannerMaster___ctor(BannerMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15E5A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__, method, v2);
    byte_4B15E5A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    119,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_BannerMaster__BannerEntity__int___ctor__);
}


BannerEntity_array *__fastcall BannerMaster__GetEnableEntitiyList(BannerMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  void *Master_object; // x0
  const MethodInfo *v39; // x1
  System_Collections_Generic_List_object__o *ValidGachaEntityList; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_List_object__o *v44; // x20
  int32_t Count; // w0
  const MethodInfo *v46; // x2
  __int64 v47; // x3
  int32_t v48; // w22
  int32_t v49; // w23
  Il2CppObject *Item; // x0
  BannerEntity_o *v51; // x24
  __int64 methodPtr_low; // x10
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_String_o **v57; // x25
  System_String_o *v58; // x26
  __int64 v59; // x26
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Predicate_object__o *v63; // x25
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x0
  System_Comparison_T__o *v68; // x19
  Il2CppObject *v69; // x21
  struct BannerMaster___c_StaticFields *static_fields; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7

  if ( (byte_4B15E59 & 1) == 0 )
  {
    sub_1BCA7E0(&BannerEntity_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Comparison_BannerEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BannerEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity__Find__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BannerEntity__Sort__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BannerEntity__ToArray__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BannerEntity___ctor__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_BannerEntity__TypeInfo, v24, v25);
    sub_1BCA7E0(&System_Predicate_GachaEntity__TypeInfo, v26, v27);
    sub_1BCA7E0(&SceneList_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__, v30, v31);
    sub_1BCA7E0(&Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__, v32, v33);
    sub_1BCA7E0(&BannerMaster___c__DisplayClass0_0_TypeInfo, v34, v35);
    sub_1BCA7E0(&BannerMaster___c_TypeInfo, v36, v37);
    byte_4B15E59 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_38;
  ValidGachaEntityList = (System_Collections_Generic_List_object__o *)GachaMaster__GetValidGachaEntityList(
                                                                        (GachaMaster_o *)Master_object,
                                                                        0LL);
  v44 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BannerEntity__TypeInfo,
                                                       v41,
                                                       v42,
                                                       v43);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BannerEntity___ctor__);
  Master_object = this->fields.list;
  if ( !Master_object )
    goto LABEL_38;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Master_object,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v48 = Count;
    v49 = 0;
    while ( 1 )
    {
      Master_object = this->fields.list;
      if ( !Master_object )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Master_object,
               v49,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v51 = (BannerEntity_o *)Item;
        methodPtr_low = LOBYTE(BannerEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (BannerEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == BannerEntity_TypeInfo )
        {
          Master_object = (void *)BannerEntity__IsEnable((BannerEntity_o *)Item, v39);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            if ( v51->fields.linkType != 2 )
              goto LABEL_41;
            Master_object = BannerEntity__GetLinkBody(v51, 0x2Fu, v46);
            if ( !Master_object )
              break;
            v57 = (System_String_o **)Master_object;
            if ( *((int *)Master_object + 6) >= 1 )
            {
              v58 = (System_String_o *)*((_QWORD *)Master_object + 4);
              if ( !SceneList_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v39);
              Master_object = (void *)SceneList__getSceneType(v58, 0LL);
              if ( (_DWORD)Master_object != 20 )
                goto LABEL_41;
              v59 = sub_1BCAA2C(BannerMaster___c__DisplayClass0_0_TypeInfo, v39, v46, v47);
              System_Object___ctor((Il2CppObject *)v59, 0LL);
              if ( *((int *)v57 + 6) >= 2 )
              {
                if ( !v59 )
                  break;
                System_Int32__TryParse(v57[5], (int32_t *)(v59 + 16), 0LL);
                v63 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_GachaEntity__TypeInfo, v60, v61, v62);
                System_Predicate_object____ctor(
                  v63,
                  (Il2CppObject *)v59,
                  Method_BannerMaster___c__DisplayClass0_0__GetEnableEntitiyList_b__1__,
                  0LL);
                if ( !ValidGachaEntityList )
                  break;
                Master_object = System_Collections_Generic_List_object___Find(
                                  ValidGachaEntityList,
                                  (System_Predicate_T__o *)v63,
                                  (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_GachaEntity__Find__);
                if ( Master_object )
                {
LABEL_41:
                  if ( !v44 )
                    break;
                  items = v44->fields._items;
                  v65 = Method_System_Collections_Generic_List_BannerEntity__Add__;
                  ++v44->fields._version;
                  if ( !items )
                    break;
                  size = v44->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v44,
                      (Il2CppObject *)v51,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v67 = &items->obj.klass + size;
                    v44->fields._size = size + 1;
                    v67[4] = (Il2CppClass *)v51;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)(v67 + 4),
                      (int64_t)v51,
                      (int64_t)v46,
                      v47,
                      v53,
                      v54,
                      v55,
                      v56);
                  }
                }
              }
            }
          }
        }
      }
      if ( v48 == ++v49 )
        goto LABEL_30;
    }
LABEL_38:
    sub_1BCAA3C(Master_object, v39);
  }
LABEL_30:
  Master_object = BannerMaster___c_TypeInfo;
  if ( !BannerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BannerMaster___c_TypeInfo, v39);
    Master_object = BannerMaster___c_TypeInfo;
  }
  v68 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 8LL);
  if ( !v68 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object, v39);
      Master_object = BannerMaster___c_TypeInfo;
    }
    v69 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v68 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_BannerEntity__TypeInfo, v39, v46, v47);
    System_Comparison_object____ctor(v68, v69, Method_BannerMaster___c__GetEnableEntitiyList_b__0_0__, 0LL);
    static_fields = BannerMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Comparison_BannerEntity__o *)v68;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)v68, v71, v72, v73, v74, v75, v76);
  }
  if ( !v44 )
    goto LABEL_38;
  System_Collections_Generic_List_object___Sort_56244000(
    v44,
    v68,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_BannerEntity__Sort__);
  return (BannerEntity_array *)System_Collections_Generic_List_object___ToArray(
                                 v44,
                                 (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BannerEntity__ToArray__);
}


void __fastcall BannerMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15E5B & 1) == 0 )
  {
    sub_1BCA7E0(&BannerMaster___c_TypeInfo, v1, v2);
    byte_4B15E5B = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BannerMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BannerMaster___c_TypeInfo->static_fields->__9 = (struct BannerMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BannerMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
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
    sub_1BCAA3C(this, 0LL);
  return n->fields.id == this->fields.gachaId;
}