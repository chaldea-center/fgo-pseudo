void __fastcall CompleteMissionListViewManager___ctor(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A59FD6 & 1) == 0 )
  {
    sub_1B885B0(&MissionListViewManager_TypeInfo);
    byte_4A59FD6 = 1;
  }
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager__AcceptReward(
        CompleteMissionListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x22
  __int64 Master_object; // x0
  Il2CppObject *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftMaster_o *v13; // x20
  struct EventMissionEntity_o *v14; // x8
  __int64 v15; // x8
  __int64 v16; // x20
  unsigned __int64 v17; // x23
  __int64 v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  System_Object_array *v21; // x27
  __int64 v22; // x8
  char *v23; // x0
  System_Text_StringBuilder_o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_Text_StringBuilder_o *v27; // x0
  System_Text_StringBuilder_o *v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject **v34; // x21
  System_Object_array *v35; // x8
  signed int max_length; // w28
  il2cpp_array_size_t v37; // w9
  __int64 v38; // x27
  Il2CppObject *v39; // x8
  Il2CppObject *v40; // x8
  Il2CppObject *v41; // x8
  Il2CppObject *v42; // x8
  EventRewardSetEntity_o *SetRewardData; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x1
  Il2CppObject **v49; // x22
  struct GetSvts_array *getSvtList; // x8
  Il2CppObject *v51; // x21
  System_Action_o *v52; // x22
  System_Collections_Generic_List_object__o *v53; // x26
  System_Collections_Generic_List_object__o *v54; // x22
  const MethodInfo_3739718 **v55; // x23
  il2cpp_array_size_t v56; // w29
  Il2CppObject *v57; // x8
  Il2CppObject *v58; // x8
  ServantEntity_o *v59; // x24
  _BOOL4 IsCombineMaterial; // w25
  Il2CppObject *v61; // x8
  System_String_o *v62; // x0
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  Il2CppObject *v66; // x8
  Il2CppObject *v67; // x24
  Il2CppObject *v68; // x0
  Il2CppObject *v69; // x24
  System_Text_StringBuilder_o *monitor; // x25
  int32_t v71; // w2
  int32_t v72; // w3
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  Il2CppClass **v76; // x0
  Il2CppObject *v77; // x8
  Il2CppObject *v78; // x8
  bool IsCountableWithPlus; // w0
  Il2CppObject **v80; // x8
  Il2CppObject *v81; // x25
  System_Text_StringBuilder_o *v82; // x24
  const MethodInfo_3739718 **v83; // x20
  int32_t getQpValue; // w23
  Il2CppObject *v85; // x8
  System_Collections_Generic_List_object__o *v86; // x19
  System_String_o *v87; // x26
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  Il2CppObject *v91; // x0
  __int64 v92; // x8
  System_Text_StringBuilder_o *v93; // x25
  __int64 v94; // x8
  System_Collections_Generic_List_object__o *v95; // x0
  struct System_Object_array *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  System_Collections_Generic_List_object__o *v99; // x21
  int32_t v100; // w2
  int32_t v101; // w3
  System_Action_o *v102; // x21
  Il2CppObject *Instance; // x0
  EventRewardSetEntity_o *v104; // x20
  CommonUI_o *v105; // x23
  System_String_o *v106; // x0
  System_String_o *v107; // x0
  Il2CppObject *v108; // x24
  System_String_o *v109; // x21
  MissionRewardGetDialog_ClickDelegate_o *v110; // x22
  __int64 v111; // x0
  CompleteMissionListViewManager_o *v112; // [xsp+8h] [xbp-98h]
  __int64 v113; // [xsp+10h] [xbp-90h]
  int32_t monitor_high; // [xsp+1Ch] [xbp-84h] BYREF
  Il2CppObject *v115; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *v116; // [xsp+28h] [xbp-78h] BYREF
  CompleteMissionEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  System_Object_array *array; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A59FC5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Array_Resize_GiftEntity___);
    sub_1B885B0(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_CompleteMissionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity___ctor___76035112);
    sub_1B885B0(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__2__);
    sub_1B885B0(&CompleteMissionListViewManager___c__DisplayClass49_0_TypeInfo);
    sub_1B885B0(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__0__);
    sub_1B885B0(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__1__);
    sub_1B885B0(&CompleteMissionListViewManager___c__DisplayClass49_1_TypeInfo);
    sub_1B885B0(&StringLiteral_8646/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/);
    sub_1B885B0(&StringLiteral_8645/*"MISSION_ACTION_SUCCESS"*/);
    sub_1B885B0(&StringLiteral_25115/*"{0}×{1:#,0}"*/);
    sub_1B885B0(&StringLiteral_25163/*"×"*/);
    sub_1B885B0(&StringLiteral_8641/*"MISSION_ACTION_ITEM_FORMAT"*/);
    sub_1B885B0(&StringLiteral_49/*"\n "*/);
    sub_1B885B0(&StringLiteral_25458/*"＋"*/);
    byte_4A59FC5 = 1;
  }
  v116 = 0LL;
  entity = 0LL;
  v115 = 0LL;
  v5 = sub_1B887FC(CompleteMissionListViewManager___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_52;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_52;
  v13 = (GiftMaster_o *)Master_object;
  if ( !Master_object )
    goto LABEL_52;
  array = (System_Object_array *)GiftMaster__GetGiftListById(
                                   (GiftMaster_o *)Master_object,
                                   missionToRecieve->fields.giftId,
                                   0LL);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CompleteMissionMaster___);
  v14 = this->fields.missionToRecieve;
  if ( !v14 || !Master_object )
    goto LABEL_52;
  Master_object = CompleteMissionMaster__TryGetEntityFromObjectId(
                    (CompleteMissionMaster_o *)Master_object,
                    &entity,
                    v14->fields.id,
                    0LL);
  *(_BYTE *)(v5 + 48) = Master_object & 1;
  if ( (Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_52;
    Master_object = (__int64)GiftMaster__GetGiftListById(v13, entity->fields.giftId, 0LL);
    if ( !Master_object )
      goto LABEL_52;
    v15 = *(_QWORD *)(Master_object + 24);
    v16 = Master_object;
    if ( (int)v15 >= 1 )
    {
      v17 = 0LL;
      while ( v17 < (unsigned int)v15 )
      {
        if ( !array )
          goto LABEL_52;
        v18 = *(_QWORD *)(v16 + 32 + 8 * v17);
        System_Array__Resize_object_(
          &array,
          array->max_length + 1,
          (const MethodInfo_2E3F214 *)Method_System_Array_Resize_GiftEntity___);
        v21 = array;
        if ( !array )
          goto LABEL_52;
        if ( v18 )
        {
          Master_object = sub_1B886EC(v18, array->obj.klass->_1.element_class);
          if ( !Master_object )
          {
            v111 = sub_1B88830(0LL);
            sub_1B886D8(v111, 0LL);
          }
        }
        v22 = *(_QWORD *)&v21->max_length;
        if ( !(_DWORD)v22 )
          break;
        v23 = (char *)v21 + (((v22 << 32) - 0x100000000LL) >> 29);
        *((_QWORD *)v23 + 4) = v18;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 32), v18, v19, v20);
        LODWORD(v15) = *(_DWORD *)(v16 + 24);
        if ( (__int64)++v17 >= (int)v15 )
          goto LABEL_22;
      }
LABEL_156:
      sub_1B88814(Master_object, v7);
    }
  }
LABEL_22:
  v24 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v24, 0LL);
  *(_QWORD *)(v5 + 40) = v24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)v24, v25, v26);
  v27 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v27, 0LL);
  v28 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v28, 0LL);
  *(_QWORD *)(v5 + 32) = v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)v28, v29, v30);
  v31 = sub_1B887FC(CompleteMissionListViewManager___c__DisplayClass49_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  if ( !v31 )
    goto LABEL_52;
  *(_QWORD *)(v31 + 48) = v5;
  v34 = (Il2CppObject **)(v31 + 48);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 48), v5, v32, v33);
  Master_object = (__int64)this->fields.missionToRecieve;
  if ( !Master_object )
    goto LABEL_52;
  if ( *(_DWORD *)(Master_object + 80) == 1 )
  {
    Master_object = (__int64)this->fields.touchBlockObj;
    if ( Master_object )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
      *(_DWORD *)(v31 + 24) = 0;
      v35 = array;
      v113 = v31;
      if ( array )
      {
        max_length = array->max_length;
        if ( max_length >= 1 )
        {
          v37 = 0;
          while ( v37 < v35->max_length )
          {
            v38 = (int)v37;
            v39 = v35->m_Items[v37];
            if ( !v39 )
              goto LABEL_52;
            Master_object = Gift__IsServant_37687840(HIDWORD(v39[1].klass), 0LL);
            if ( (Master_object & 1) == 0 )
            {
              if ( !array )
                goto LABEL_52;
              if ( (unsigned int)v38 >= array->max_length )
                goto LABEL_156;
              v40 = array->m_Items[v38];
              if ( !v40 )
                goto LABEL_52;
              Master_object = Gift__IsCommandCode_37688232(HIDWORD(v40[1].klass), 0LL);
              if ( (Master_object & 1) == 0 )
              {
                if ( !array )
                  goto LABEL_52;
                if ( (unsigned int)v38 >= array->max_length )
                  goto LABEL_156;
                v41 = array->m_Items[v38];
                if ( !v41 )
                  goto LABEL_52;
                Master_object = Gift__IsCostumeRelease(HIDWORD(v41[1].klass), 0LL);
                if ( (Master_object & 1) == 0 )
                {
                  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !Master_object )
                    goto LABEL_52;
                  Master_object = (__int64)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Master_object,
                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
                  if ( !array )
                    goto LABEL_52;
                  if ( (unsigned int)v38 >= array->max_length )
                    goto LABEL_156;
                  v42 = array->m_Items[v38];
                  if ( !v42 || !Master_object )
                    goto LABEL_52;
                  Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &v116,
                                    (int32_t)v42[1].monitor,
                                    (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
                  if ( (Master_object & 1) != 0 )
                  {
                    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( !v116 || !Master_object )
                      goto LABEL_52;
                    Master_object = CommonUI__IsGetItemEffect((CommonUI_o *)Master_object, (int32_t)v116[1].klass, 0LL);
                    if ( (Master_object & 1) == 0 )
                      ++*(_DWORD *)(v31 + 24);
                  }
                }
              }
            }
            if ( max_length - 1 == (_DWORD)v38 )
              goto LABEL_59;
            v35 = array;
            v37 = v38 + 1;
            if ( !array )
              goto LABEL_52;
          }
          goto LABEL_156;
        }
LABEL_59:
        v53 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GiftEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v53,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        v54 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GiftEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v54,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        if ( max_length >= 1 )
        {
          v55 = (const MethodInfo_3739718 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
          v56 = 0;
          v112 = this;
          do
          {
            if ( !array )
              goto LABEL_52;
            if ( v56 >= array->max_length )
              goto LABEL_156;
            v57 = array->m_Items[v56];
            if ( !v57 )
              goto LABEL_52;
            Master_object = Gift__IsServant_37687840(HIDWORD(v57[1].klass), 0LL);
            if ( (Master_object & 1) != 0 )
            {
              Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance(*v55);
              if ( !Master_object )
                goto LABEL_52;
              Master_object = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Master_object,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( !array )
                goto LABEL_52;
              if ( v56 >= array->max_length )
                goto LABEL_156;
              v58 = array->m_Items[v56];
              if ( !v58 )
                goto LABEL_52;
              if ( !Master_object )
                goto LABEL_52;
              Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                         (int32_t)v58[1].monitor,
                                         (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !Master_object )
                goto LABEL_52;
              v59 = (ServantEntity_o *)Master_object;
              IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Master_object + 84), 0LL);
              Master_object = SvtType__IsStatusUp(v59->fields.type, 0LL);
              v61 = *v34;
              if ( !*v34 )
                goto LABEL_52;
              if ( LOBYTE(v61[3].klass) | (IsCombineMaterial | (unsigned int)Master_object) & 1 )
              {
                Master_object = (__int64)v61[2].monitor;
                if ( !Master_object )
                  goto LABEL_52;
                v62 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Master_object + 360LL))(
                                           Master_object,
                                           *(_QWORD *)(*(_QWORD *)Master_object + 368LL));
                Master_object = System_String__IsNullOrEmpty(v62, 0LL);
                if ( (Master_object & 1) == 0 )
                {
                  if ( !*v34 )
                    goto LABEL_52;
                  Master_object = (__int64)(*v34)[2].monitor;
                  if ( !Master_object )
                    goto LABEL_52;
                  System_Text_StringBuilder__Append_60868928(
                    (System_Text_StringBuilder_o *)Master_object,
                    (System_String_o *)StringLiteral_49/*"\n "*/,
                    0LL);
                }
                Master_object = (__int64)ServantEntity__getName(v59, -1, -1, 0LL);
                if ( !array )
                  goto LABEL_52;
                if ( v56 >= array->max_length )
                  goto LABEL_156;
                v66 = array->m_Items[v56];
                if ( !v66 )
                  goto LABEL_52;
                v67 = (Il2CppObject *)Master_object;
                monitor_high = HIDWORD(v66[1].monitor);
                v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v63, v64, v65);
                Master_object = (__int64)System_String__Format_61721404(
                                           (System_String_o *)StringLiteral_25115/*"{0}×{1:#,0}"*/,
                                           v67,
                                           v68,
                                           0LL);
                if ( !*v34 )
                  goto LABEL_52;
                v69 = (Il2CppObject *)Master_object;
                monitor = (System_Text_StringBuilder_o *)(*v34)[2].monitor;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8641/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                if ( !monitor )
                  goto LABEL_52;
                Master_object = (__int64)System_Text_StringBuilder__AppendFormat(
                                           monitor,
                                           (System_String_o *)Master_object,
                                           v69,
                                           0LL);
                if ( !array )
                  goto LABEL_52;
                if ( v56 >= array->max_length )
                  goto LABEL_156;
                if ( !v54 )
                  goto LABEL_52;
                v7 = array->m_Items[v56];
                items = v54->fields._items;
                v74 = Method_System_Collections_Generic_List_GiftEntity__Add__;
                ++v54->fields._version;
                if ( !items )
                  goto LABEL_52;
                size = v54->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  v94 = v74[4];
                  v95 = v54;
LABEL_132:
                  System_Collections_Generic_List_object___AddWithResize(
                    v95,
                    v7,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v94 + 192) + 112LL));
                  goto LABEL_133;
                }
                v76 = &items->obj.klass + size;
                v54->fields._size = size + 1;
LABEL_91:
                v76[4] = (Il2CppClass *)v7;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v76 + 4), (int32_t)v7, v71, v72);
              }
            }
            else
            {
              if ( !array )
                goto LABEL_52;
              if ( v56 >= array->max_length )
                goto LABEL_156;
              v77 = array->m_Items[v56];
              if ( !v77 )
                goto LABEL_52;
              Master_object = Gift__IsItem_37687788(HIDWORD(v77[1].klass), 0LL);
              if ( (Master_object & 1) != 0 )
              {
                Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance(*v55);
                if ( !Master_object )
                  goto LABEL_52;
                Master_object = (__int64)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Master_object,
                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
                if ( !array )
                  goto LABEL_52;
                if ( v56 >= array->max_length )
                  goto LABEL_156;
                v78 = array->m_Items[v56];
                if ( !v78 || !Master_object )
                  goto LABEL_52;
                Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  &v115,
                                  (int32_t)v78[1].monitor,
                                  (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
                if ( (Master_object & 1) != 0 )
                {
                  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !v115 || !Master_object )
                    goto LABEL_52;
                  Master_object = CommonUI__IsGetItemEffect((CommonUI_o *)Master_object, (int32_t)v115[1].klass, 0LL);
                  if ( (Master_object & 1) == 0 )
                  {
                    if ( !array )
                      goto LABEL_52;
                    if ( v56 >= array->max_length )
                      goto LABEL_156;
                    Master_object = (__int64)array->m_Items[v56];
                    if ( !Master_object )
                      goto LABEL_52;
                    Master_object = GiftEntity__isQp((GiftEntity_o *)Master_object, 0LL);
                    if ( (Master_object & 1) == 0 || !this->fields.isQpAlreadyMax )
                    {
                      if ( !v115 )
                        goto LABEL_52;
                      IsCountableWithPlus = ItemType__IsCountableWithPlus((int32_t)v115[3].klass, 0LL);
                      v80 = (Il2CppObject **)&StringLiteral_25458/*"＋"*/;
                      if ( !IsCountableWithPlus )
                        v80 = (Il2CppObject **)&StringLiteral_25163/*"×"*/;
                      v81 = *v80;
                      v82 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
                      System_Text_StringBuilder___ctor(v82, 0LL);
                      if ( !v115 )
                        goto LABEL_52;
                      if ( !v82 )
                        goto LABEL_52;
                      Master_object = (__int64)System_Text_StringBuilder__Append_60868928(
                                                 v82,
                                                 (System_String_o *)v115[1].monitor,
                                                 0LL);
                      if ( !array )
                        goto LABEL_52;
                      if ( v56 >= array->max_length )
                        goto LABEL_156;
                      Master_object = (__int64)array->m_Items[v56];
                      if ( !Master_object )
                        goto LABEL_52;
                      v83 = v55;
                      Master_object = GiftEntity__isQp((GiftEntity_o *)Master_object, 0LL);
                      if ( (Master_object & 1) == 0
                        || !this->fields.isQpMaxAlert
                        || (getQpValue = this->fields.getQpValue) == 0 )
                      {
                        if ( !array )
                          goto LABEL_52;
                        if ( v56 >= array->max_length )
                          goto LABEL_156;
                        v85 = array->m_Items[v56];
                        if ( !v85 )
                          goto LABEL_52;
                        getQpValue = HIDWORD(v85[1].monitor);
                      }
                      v86 = v53;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v87 = LocalizationManager__Get((System_String_o *)StringLiteral_8646/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0LL);
                      monitor_high = getQpValue;
                      v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v88, v89, v90);
                      Master_object = (__int64)System_Text_StringBuilder__AppendFormat_60875280(v82, v87, v81, v91, 0LL);
                      v92 = *(_QWORD *)(v113 + 48);
                      if ( !v92 )
                        goto LABEL_52;
                      v93 = *(System_Text_StringBuilder_o **)(v92 + 32);
                      v53 = v86;
                      v55 = v83;
                      if ( *(int *)(v113 + 24) >= 2 )
                      {
                        this = v112;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8641/*"MISSION_ACTION_ITEM_FORMAT"*/, 0LL);
                        if ( !v93 )
                          goto LABEL_52;
                        Master_object = (__int64)System_Text_StringBuilder__AppendFormat(
                                                   v93,
                                                   (System_String_o *)Master_object,
                                                   (Il2CppObject *)v82,
                                                   0LL);
                        if ( !*v34 )
                          goto LABEL_52;
                        Master_object = (__int64)(*v34)[2].klass;
                        if ( !Master_object )
                          goto LABEL_52;
                        Master_object = (__int64)System_Text_StringBuilder__Append_60868928(
                                                   (System_Text_StringBuilder_o *)Master_object,
                                                   (System_String_o *)StringLiteral_49/*"\n "*/,
                                                   0LL);
                      }
                      else
                      {
                        Master_object = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v82->klass->vtable._3_ToString.method)(
                                          v82,
                                          v82->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                        this = v112;
                        if ( !v93 )
                          goto LABEL_52;
                        Master_object = (__int64)System_Text_StringBuilder__Append_60868928(
                                                   v93,
                                                   (System_String_o *)Master_object,
                                                   0LL);
                      }
                      if ( !array )
                        goto LABEL_52;
                      if ( v56 >= array->max_length )
                        goto LABEL_156;
                      if ( !v53 )
                        goto LABEL_52;
                      v7 = array->m_Items[v56];
                      v96 = v53->fields._items;
                      v97 = Method_System_Collections_Generic_List_GiftEntity__Add__;
                      ++v53->fields._version;
                      if ( !v96 )
                        goto LABEL_52;
                      v98 = v53->fields._size;
                      if ( (unsigned int)v98 >= v96->max_length )
                      {
                        v94 = v97[4];
                        v95 = v53;
                        goto LABEL_132;
                      }
                      v76 = &v96->obj.klass + v98;
                      v53->fields._size = v98 + 1;
                      goto LABEL_91;
                    }
                  }
                }
              }
            }
LABEL_133:
            ++v56;
          }
          while ( max_length != v56 );
        }
        v99 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GiftEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor_55562536(
          v99,
          (System_Collections_Generic_IEnumerable_T__o *)v53,
          (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_GiftEntity___ctor___76035112);
        *(_QWORD *)(v113 + 16) = v99;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v113 + 16), (int32_t)v99, v100, v101);
        Master_object = *(_QWORD *)(v113 + 16);
        if ( Master_object )
        {
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)Master_object,
            (System_Collections_Generic_IEnumerable_T__o *)v54,
            (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
          v102 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v102,
            (Il2CppObject *)v113,
            Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__0__,
            0LL);
          MissionListViewManager__StartItemGetEffectAction(
            (MissionListViewManager_o *)this,
            (GiftEntity_array *)array,
            0,
            v102,
            0LL);
          goto LABEL_155;
        }
      }
    }
LABEL_52:
    sub_1B8880C(Master_object, v7);
  }
  SetRewardData = EventMissionEntity__getSetRewardData((EventMissionEntity_o *)Master_object, 0LL);
  *(_QWORD *)(v31 + 32) = SetRewardData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 32), (int32_t)SetRewardData, v44, v45);
  if ( !*(_QWORD *)(v31 + 32) )
    goto LABEL_52;
  v48 = *(_QWORD *)(*(_QWORD *)(v31 + 32) + 32LL);
  *(_QWORD *)(v31 + 40) = v48;
  v49 = (Il2CppObject **)(v31 + 40);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 40), v48, v46, v47);
  getSvtList = this->fields.getSvtList;
  if ( !getSvtList || !*(_QWORD *)&getSvtList->max_length )
  {
    if ( *v34 )
    {
      ActionExtensions__Call((System_Action_o *)(*v34)[1].monitor, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v104 = *(EventRewardSetEntity_o **)(v31 + 32);
      v105 = (CommonUI_o *)Instance;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v106 = LocalizationManager__Get((System_String_o *)StringLiteral_8645/*"MISSION_ACTION_SUCCESS"*/, 0LL);
      v107 = System_String__Format(v106, *v49, 0LL);
      v108 = *v34;
      v109 = v107;
      v110 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1B887FC(MissionRewardGetDialog_ClickDelegate_TypeInfo);
      MissionRewardGetDialog_ClickDelegate___ctor(
        v110,
        v108,
        Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__2__,
        0LL);
      if ( v105 )
      {
        CommonUI__OpenMissionRewardGetDialog_30562416(v105, v104, v109, v110, 0LL);
        goto LABEL_155;
      }
    }
    goto LABEL_52;
  }
  Master_object = (__int64)this->fields.touchBlockObj;
  if ( !Master_object )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  v51 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  v52 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v31,
    Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__1__,
    0LL);
  if ( !v51 )
    goto LABEL_52;
  SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)v51, v52, 0LL);
LABEL_155:
  ActionExtensions__Call(this->fields.reDispAct, 0LL);
}


void __fastcall CompleteMissionListViewManager__Awake(CompleteMissionListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CompleteMissionListViewManager__CehckQpMaxAlert(
        CompleteMissionListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        System_Action_o *decideCallback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  void *QpGiftEntity; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x24
  _DWORD *v13; // x22
  System_String_o *Empty; // x20
  _DWORD *v15; // x23
  int32_t v16; // w25
  int32_t QpMax; // w8
  int v18; // w25
  int v19; // w26
  System_String_o *v20; // x24
  Il2CppObject *NumberFormat; // x25
  System_String_o *v22; // x0
  BalanceConfig_c *v23; // x8
  Il2CppObject *v24; // x26
  Il2CppObject *v25; // x0
  System_String_o *v26; // x24
  int32_t v27; // w8
  int32_t v28; // w8
  System_String_o *v29; // x24
  System_String_o *v30; // x0
  int32_t v31; // w8
  Il2CppObject *v32; // x23
  System_String_o *v33; // x0
  BalanceConfig_c *v34; // x8
  Il2CppObject *v35; // x25
  Il2CppObject *v36; // x0
  System_String_o *v37; // x0
  System_String_o *v38; // x22
  System_String_o *v39; // x23
  System_String_o *v40; // x0
  ServantSellMaxAlertDialog_o *qpMaxAlertDialog; // x25
  System_String_o *v42; // x19
  System_Action_o *v43; // x26
  System_Action_o *onTransition; // x21
  Il2CppObject *v45; // x27
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v47; // w2
  int32_t v48; // w3

  if ( (byte_4A59FD5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&Method_CompleteMissionListViewManager___c__CehckQpMaxAlert_b__68_1__);
    sub_1B885B0(&Method_CompleteMissionListViewManager___c__DisplayClass68_0__CehckQpMaxAlert_b__0__);
    sub_1B885B0(&CompleteMissionListViewManager___c__DisplayClass68_0_TypeInfo);
    sub_1B885B0(&CompleteMissionListViewManager___c_TypeInfo);
    sub_1B885B0(&StringLiteral_8683/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_8686/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11659/*"SERVANT_SELL_QP_MAX_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11658/*"SERVANT_SELL_QP_MAX_CLOSE"*/);
    sub_1B885B0(&StringLiteral_11665/*"SERVANT_SELL_TRANSITION_COMBINE"*/);
    byte_4A59FD5 = 1;
  }
  v7 = sub_1B887FC(CompleteMissionListViewManager___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_35;
  *(_QWORD *)(v7 + 16) = decideCallback;
  v12 = v7 + 16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)decideCallback, v10, v11);
  if ( !missionEntity )
    goto LABEL_35;
  QpGiftEntity = EventMissionEntity__GetQpGiftEntity(missionEntity, 0LL);
  if ( !QpGiftEntity )
  {
LABEL_18:
    if ( *(_QWORD *)v12 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v12 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v12 + 64LL),
        *(_QWORD *)(*(_QWORD *)v12 + 40LL));
      return;
    }
LABEL_35:
    sub_1B8880C(QpGiftEntity, v9);
  }
  v13 = QpGiftEntity;
  Empty = string_TypeInfo->static_fields->Empty;
  *(_WORD *)&this->fields.isQpMaxAlert = 0;
  *(_QWORD *)&this->fields.overQpValue = 0LL;
  QpGiftEntity = UserGameMaster__getSelfUserGame(0LL);
  if ( !QpGiftEntity )
    goto LABEL_35;
  v15 = QpGiftEntity;
  v16 = *((_DWORD *)QpGiftEntity + 24);
  QpGiftEntity = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    QpGiftEntity = BalanceConfig_TypeInfo;
  }
  QpMax = *(_DWORD *)(*((_QWORD *)QpGiftEntity + 23) + 4LL);
  if ( v16 < QpMax )
  {
    v18 = v15[24];
    v19 = v13[7];
    if ( !*((_DWORD *)QpGiftEntity + 56) )
    {
      j_il2cpp_runtime_class_init_0(QpGiftEntity);
      QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
    }
    if ( v19 + v18 > QpMax )
    {
      *(_WORD *)&this->fields.isQpMaxAlert = 1;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_8686/*"MISSION_REWARD_QP_WILL_BE_MAX_ALERT_MESSAGE"*/, 0LL);
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v13[7], 0LL);
      v22 = LocalizationManager__GetNumberFormat(v15[24], 0LL);
      v23 = BalanceConfig_TypeInfo;
      v24 = (Il2CppObject *)v22;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v23 = BalanceConfig_TypeInfo;
      }
      v25 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v23->static_fields->QpMax, 0LL);
      v26 = System_String__Format_61721472(v20, NumberFormat, v24, v25, 0LL);
      v27 = BalanceConfig_TypeInfo->static_fields->QpMax - v15[24];
      this->fields.getQpValue = v27;
      v28 = v13[7] - v27;
      goto LABEL_25;
    }
    goto LABEL_18;
  }
  *(_WORD *)&this->fields.isQpMaxAlert = 257;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_8683/*"MISSION_REWARD_QP_MAX_ALERT_MESSAGE"*/, 0LL);
  v30 = LocalizationManager__GetNumberFormat(v13[7], 0LL);
  v31 = v15[24];
  v32 = (Il2CppObject *)v30;
  v33 = LocalizationManager__GetNumberFormat(v31, 0LL);
  v34 = BalanceConfig_TypeInfo;
  v35 = (Il2CppObject *)v33;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v34 = BalanceConfig_TypeInfo;
  }
  v36 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v34->static_fields->QpMax, 0LL);
  v37 = System_String__Format_61721472(v29, v32, v35, v36, 0LL);
  v28 = v13[7];
  v26 = v37;
LABEL_25:
  this->fields.overQpValue = v28;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_11659/*"SERVANT_SELL_QP_MAX_DECIDE"*/, 0LL);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_11665/*"SERVANT_SELL_TRANSITION_COMBINE"*/, 0LL);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_11658/*"SERVANT_SELL_QP_MAX_CLOSE"*/, 0LL);
  qpMaxAlertDialog = this->fields.qpMaxAlertDialog;
  v42 = v40;
  v43 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v7,
    Method_CompleteMissionListViewManager___c__DisplayClass68_0__CehckQpMaxAlert_b__0__,
    0LL);
  QpGiftEntity = CompleteMissionListViewManager___c_TypeInfo;
  if ( !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
    QpGiftEntity = CompleteMissionListViewManager___c_TypeInfo;
  }
  onTransition = *(System_Action_o **)(*((_QWORD *)QpGiftEntity + 23) + 32LL);
  if ( !onTransition )
  {
    if ( !*((_DWORD *)QpGiftEntity + 56) )
    {
      j_il2cpp_runtime_class_init_0(QpGiftEntity);
      QpGiftEntity = CompleteMissionListViewManager___c_TypeInfo;
    }
    v45 = (Il2CppObject *)**((_QWORD **)QpGiftEntity + 23);
    onTransition = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(onTransition, v45, Method_CompleteMissionListViewManager___c__CehckQpMaxAlert_b__68_1__, 0LL);
    static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__68_1 = onTransition;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__68_1, (int32_t)onTransition, v47, v48);
  }
  if ( !qpMaxAlertDialog )
    goto LABEL_35;
  ServantSellMaxAlertDialog__Open(qpMaxAlertDialog, Empty, v26, Empty, v38, v39, v42, v43, onTransition, 0LL, 1, 0LL);
}


void __fastcall CompleteMissionListViewManager__CreateList(
        CompleteMissionListViewManager_o *this,
        System_Collections_Generic_List_EventMissionEntity__o *missionList,
        System_Int32_array *mstMissionIdList,
        int32_t type,
        System_Action_o *redispCallBack,
        const MethodInfo *method)
{
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *current; // x24
  System_Collections_Generic_List_object__o *itemList; // x22
  CompleteMissionListViewItem_o *v14; // x23
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  int32_t CompleteMissionFilterId_k__BackingField; // w25
  __int64 *v27; // x8
  void *ObjectList; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  int v34; // w22
  System_Collections_Generic_List_object__o *v35; // x19
  int32_t i; // w20
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A59FBA & 1) == 0 )
  {
    sub_1B885B0(&CompleteMissionListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_8771/*"MST_MISSION_EMPTY_TXT"*/);
    sub_1B885B0(&StringLiteral_8649/*"MISSION_EMPTY_TXT"*/);
    byte_4A59FBA = 1;
  }
  memset(&v39, 0, sizeof(v39));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields.listType = 0;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v38,
      (System_Collections_Generic_List_object__o *)missionList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v39 = v38;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v39,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v39.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v14 = (CompleteMissionListViewItem_o *)sub_1B887FC(CompleteMissionListViewItem_TypeInfo);
      CompleteMissionListViewItem___ctor(v14, (EventMissionEntity_o *)current, type, v15);
      if ( !itemList )
        sub_1B8880C(v16, v17);
      items = itemList->fields._items;
      v21 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1B8880C(v16, v17);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v14,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v14;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v14, v18, v19);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v39,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v10, v11);
  }
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !byte_4A5A01C )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5A01C = 1;
  }
  CompleteMissionFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( CompleteMissionFilterId_k__BackingField )
    v27 = &StringLiteral_8649/*"MISSION_EMPTY_TXT"*/;
  else
    v27 = &StringLiteral_8771/*"MST_MISSION_EMPTY_TXT"*/;
  ObjectList = LocalizationManager__Get((System_String_o *)*v27, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_39;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0LL);
  if ( !byte_4A5A01C )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A5A01C = 1;
  }
  this->fields.filterStatus = EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField;
  CompleteMissionListViewManager__setList(this, v30);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  if ( redispCallBack )
  {
    this->fields.reDispAct = redispCallBack;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.reDispAct, (int32_t)redispCallBack, v32, v33);
  }
  ObjectList = CompleteMissionListViewManager__get_ObjectList(this, v31);
  if ( !ObjectList )
LABEL_39:
    sub_1B8880C(ObjectList, v29);
  v34 = *((_DWORD *)ObjectList + 6);
  v35 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( v34 >= 1 )
  {
    for ( i = 0; i != v34; ++i )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v35,
               i,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      ObjectList = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL);
      if ( ((unsigned __int8)ObjectList & 1) != 0 )
      {
        if ( !Item )
          goto LABEL_39;
        MissionListViewObject__RedispResTime((MissionListViewObject_o *)Item, 0LL);
      }
    }
  }
}


void __fastcall CompleteMissionListViewManager__DestroyList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


CompleteMissionListViewItem_o *__fastcall CompleteMissionListViewManager__GetItem(
        CompleteMissionListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CompleteMissionListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A59FBD & 1) == 0 )
  {
    sub_1B885B0(&CompleteMissionListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A59FBD = 1;
  }
  result = (CompleteMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CompleteMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)result,
                                                index,
                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (CompleteMissionListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


void __fastcall CompleteMissionListViewManager__ModifyItem(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  Il2CppObject *Entity; // x20
  void *monitor; // x8
  Il2CppObject *MasterData_object; // x20
  struct EventMissionEntity_o *v9; // x8
  DataManager_o *v10; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  MissionListViewItem_o *current; // x22
  __int64 methodPtr_low; // x10
  __int64 MissionId; // x0
  __int64 v16; // x1
  struct EventMissionEntity_o *v17; // x8
  int32_t v18; // w23
  UnityEngine_Object_o *viewObject; // x23
  __int64 v20; // x1
  struct ListViewObject_o *v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A59FCC & 1) == 0 )
  {
    sub_1B885B0(&CompleteMissionListViewItem_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A59FCC = 1;
  }
  memset(&v23, 0, sizeof(v23));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve || !Instance )
    goto LABEL_41;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             missionToRecieve->fields.id,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !Entity )
    goto LABEL_41;
  if ( (__int64)Instance <= (__int64)Entity[4].klass )
  {
    this->fields.isEndEvent = 0;
    return;
  }
  monitor = Entity[4].monitor;
  this->fields.isEndEvent = (__int64)Instance <= (__int64)monitor;
  if ( (__int64)Instance <= (__int64)monitor && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      v9 = this->fields.missionToRecieve;
      if ( v9 )
      {
        if ( MasterData_object )
        {
          Instance = (DataManager_o *)UserEventMissionMaster__GetEntity(
                                        (UserEventMissionMaster_o *)MasterData_object,
                                        (int64_t)Instance,
                                        v9->fields.id,
                                        0LL);
          if ( this->fields.itemList )
          {
            v10 = Instance;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v22,
              (System_Collections_Generic_List_object__o *)this->fields.itemList,
              (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v23 = v22;
            while ( 1 )
            {
              v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v23,
                      (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( !v11 )
                break;
              current = (MissionListViewItem_o *)v23.fields._current;
              if ( !v23.fields._current
                || (methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
                    LOBYTE(v23.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
                || (CompleteMissionListViewItem_c *)v23.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionListViewItem_TypeInfo )
              {
                sub_1B8880C(v11, v12);
              }
              MissionId = MissionListViewItem__get_MissionId((MissionListViewItem_o *)v23.fields._current, 0LL);
              v17 = this->fields.missionToRecieve;
              if ( !v17 )
                sub_1B8880C(MissionId, v16);
              v18 = MissionId;
              if ( (_DWORD)MissionId == v17->fields.id )
              {
                if ( !byte_4A57FF7 )
                {
                  MissionId = sub_1B885B0(&EventRewardSaveData_TypeInfo);
                  byte_4A57FF7 = 1;
                }
                EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v18;
                if ( !v10 )
                  sub_1B8880C(MissionId, v16);
                MissionListViewItem__ModifyItem(current, *(_DWORD *)&v10->fields._DispLog == 5, 0LL);
              }
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
              {
                v21 = current->fields.viewObject;
                if ( !v21 )
                  sub_1B8880C(0LL, v20);
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, Il2CppMethodPointer))v21->klass->vtable._5_SetItem.method)(
                  v21,
                  current,
                  v21->klass->vtable._6_SetItem.methodPtr);
              }
              if ( current->fields.dispNo == 1 )
                ((void (__fastcall *)(MissionListViewItem_o *, Il2CppMethodPointer))current->klass->vtable._6_CheckMissionCond.method)(
                  current,
                  current->klass->vtable._7_SetGiftData.methodPtr);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v23,
              (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
            return;
          }
        }
      }
    }
LABEL_41:
    sub_1B8880C(Instance, v4);
  }
}


void __fastcall CompleteMissionListViewManager__OnChangeAlphaAnim(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  int size; // w21
  int32_t v6; // w20

  if ( (byte_4A59FD4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
    byte_4A59FD4 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(this, v4);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v6,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      CompleteMissionListViewObject__OnChangeAlphaAnim((CompleteMissionListViewObject_o *)ObjectList, v4);
      if ( size == ++v6 )
        return;
    }
LABEL_10:
    sub_1B8880C(ObjectList, v4);
  }
}


void __fastcall CompleteMissionListViewManager__OnClickFilterList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  __int64 filterStatus; // x8

  if ( (byte_4A59FC0 & 1) == 0 )
  {
    sub_1B885B0(&Method_CompleteMissionListViewManager_OnClickFilterList__);
    byte_4A59FC0 = 1;
  }
  v3 = Method_CompleteMissionListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_CompleteMissionListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_CompleteMissionListViewManager_OnClickFilterList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_BECDE4[filterStatus];
  CompleteMissionListViewManager__setList(this, v5);
}


void __fastcall CompleteMissionListViewManager__OnClickListView(
        CompleteMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0
  System_String_o *ActiveStateName; // x0
  __int64 methodPtr_low; // x10
  PlayMakerFSM_o *v8; // x20
  CompleteMissionListViewManager_o *IsHideReward; // x0
  const MethodInfo *v10; // x1
  EventMissionEntity_o *EventMissionEntity; // x1
  const MethodInfo *v12; // x2
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  if ( (byte_4A59FBE & 1) == 0 )
  {
    sub_1B885B0(&Method_CompleteMissionListViewManager_OnClickListView__);
    sub_1B885B0(&CompleteMissionListViewObject_TypeInfo);
    sub_1B885B0(&StringLiteral_15566/*"Wait_Action"*/);
    byte_4A59FBE = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_20;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0LL);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(
                                  ActiveStateName,
                                  (System_String_o *)StringLiteral_15566/*"Wait_Action"*/,
                                  0LL);
  if ( ((unsigned __int8)targetFSM & 1) != 0 )
    return;
  if ( !obj
    || (methodPtr_low = LOBYTE(CompleteMissionListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (CompleteMissionListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionListViewObject_TypeInfo
    || (targetFSM = (PlayMakerFSM_o *)CompleteMissionListViewObject__GetItem(
                                        (CompleteMissionListViewObject_o *)obj,
                                        (const MethodInfo *)obj)) == 0LL )
  {
LABEL_20:
    sub_1B8880C(targetFSM, obj);
  }
  v8 = targetFSM;
  IsHideReward = (CompleteMissionListViewManager_o *)(*(__int64 (__fastcall **)(PlayMakerFSM_o *, void *))&targetFSM->klass[1]._1.byval_arg.bits)(
                                                       targetFSM,
                                                       targetFSM->klass[1]._1.this_arg.data);
  if ( ((unsigned __int8)IsHideReward & 1) == 0
    || (IsHideReward = (CompleteMissionListViewManager_o *)CompleteMissionListViewItem__get_IsHideReward(
                                                             (CompleteMissionListViewItem_o *)v8,
                                                             v10),
        ((unsigned __int8)IsHideReward & 1) != 0)
    || BYTE4(v8[4].fields.fsm) )
  {
    if ( v8[4].fields.m_CachedPtr == 3
      && (LODWORD(v8[2].fields.addEventHandlers) != 1
       || CompleteMissionListViewManager__checkPanelAllOpen(IsHideReward, v10)) )
    {
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v8, 0LL);
      CompleteMissionListViewManager__recieveReward(this, EventMissionEntity, v12);
    }
    else
    {
      v13 = Method_CompleteMissionListViewManager_OnClickListView__;
      if ( (*((_BYTE *)Method_CompleteMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1B885C8(Method_CompleteMissionListViewManager_OnClickListView__);
      v14 = (System_Reflection_MethodBase_o *)sub_1B88594(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0LL);
    }
  }
  else
  {
    MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, (MissionListViewItem_o *)v8, 0, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog(
        CompleteMissionListViewManager_o *this,
        GiftEntity_array *rewards,
        System_String_o *rewardDetail,
        bool isCompleteMission,
        const MethodInfo *method)
{
  bool v9; // w23
  __int64 v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A59FC6 & 1) == 0 )
  {
    sub_1B885B0(&CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_TypeInfo);
    byte_4A59FC6 = 1;
  }
  v9 = isCompleteMission;
  v10 = sub_1B887FC(CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)this, v11, v12);
  *(_QWORD *)(v10 + 48) = rewards;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 48), (int32_t)rewards, v13, v14);
  *(_QWORD *)(v10 + 56) = rewardDetail;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 56), (int32_t)rewardDetail, v15, v16);
  *(_BYTE *)(v10 + 40) = v9;
  return (System_Collections_IEnumerator_o *)v10;
}


void __fastcall CompleteMissionListViewManager__RefrashListDisp(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 methodPtr_low; // x11
  int32_t size; // w8
  int32_t v10; // w21
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A59FBF & 1) == 0 )
  {
    sub_1B885B0(&CompleteMissionListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
    byte_4A59FBF = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v5 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v11;
        ;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields._current->klass->vtable[6].method)(
          i.fields._current,
          i.fields._current->klass->vtable[7].methodPtr) )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &i,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    if ( i.fields._current )
    {
      methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(i.fields._current->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (CompleteMissionListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] == CompleteMissionListViewItem_TypeInfo )
      {
        continue;
      }
    }
    sub_1B8880C(v6, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v5 )
    goto LABEL_17;
  size = v5->fields._size;
  if ( size >= 1 )
  {
    v10 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v5,
                                                                  v10,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
      if ( ++v10 >= v5->fields._size )
        return;
    }
LABEL_17:
    sub_1B8880C(ObjectList, v4);
  }
}


void __fastcall CompleteMissionListViewManager__SetOpenItem(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  __int64 v9; // x1
  struct CompleteMissionListViewItem_o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v15; // x2
  float openItemTime; // s8
  System_Action_o *v17; // x20
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A59FCD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CompleteMissionListViewManager_modifyOpenItem__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__get_Count__);
    sub_1B885B0(&StringLiteral_18843/*"ef_mission_extric01"*/);
    byte_4A59FCD = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)CompleteMissionListViewManager__get_ObjectList(
                                                                this,
                                                                method);
    if ( !ObjectList )
      sub_1B8880C(0LL, v4);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v18,
        ObjectList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_CompleteMissionListViewObject__GetEnumerator__);
      v19 = v18;
      while ( 1 )
      {
        v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v19,
               (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__MoveNext__);
        if ( !v5 )
          break;
        current = v19.fields._current;
        if ( !v19.fields._current )
          sub_1B8880C(v5, v6);
        Item = (MissionListViewItem_o *)CompleteMissionListViewObject__GetItem(
                                          (CompleteMissionListViewObject_o *)v19.fields._current,
                                          v6);
        v10 = (struct CompleteMissionListViewItem_o *)Item;
        if ( !Item )
          sub_1B8880C(0LL, v9);
        MissionId = MissionListViewItem__get_MissionId(Item, 0LL);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_4A57FF7 )
          {
            sub_1B885B0(&EventRewardSaveData_TypeInfo);
            byte_4A57FF7 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v10;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openTargetItem, (int32_t)v10, v11, v12);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v10, 0LL) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0LL);
            CompleteMissionListViewManager__getEffect((System_String_o *)StringLiteral_18843/*"ef_mission_extric01"*/, transform, v15);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v19,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_CompleteMissionListViewObject__Dispose__);
    }
    openItemTime = this->fields.openItemTime;
    v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_CompleteMissionListViewManager_modifyOpenItem__, 0LL);
    ListViewManager__DelayCallMethod((ListViewManager_o *)this, openItemTime, v17, 0LL);
  }
}


void __fastcall CompleteMissionListViewManager__SetResultData(
        CompleteMissionListViewManager_o *this,
        GetSvts_array *svts,
        GetCommandCodes_array *cmds,
        const MethodInfo *method)
{
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x0
  __int64 v9; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t id; // w19

  this->fields.getSvtList = svts;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.getSvtList,
    (int32_t)svts,
    (int32_t)cmds,
    (int32_t)method);
  this->fields.getCommandCodeList = cmds;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.getCommandCodeList, (int32_t)cmds, v6, v7);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    sub_1B8880C(v8, v9);
  id = missionToRecieve->fields.id;
  if ( !byte_4A57FF7 )
  {
    sub_1B885B0(&EventRewardSaveData_TypeInfo);
    byte_4A57FF7 = 1;
  }
  EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = id;
}


System_Collections_IEnumerator_o *__fastcall CompleteMissionListViewManager__StartPanelAnimCoroutine(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A59FD1 & 1) == 0 )
  {
    sub_1B885B0(&CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_TypeInfo);
    byte_4A59FD1 = 1;
  }
  v3 = sub_1B887FC(CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall CompleteMissionListViewManager___modifyOpenItem_b__58_0(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  float endEffectTime; // s8
  System_Action_o *v4; // x20

  if ( (byte_4A59FD7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CompleteMissionListViewManager_actionAfterCallback__);
    byte_4A59FD7 = 1;
  }
  CompleteMissionListViewManager__RefrashListDisp(this, method);
  endEffectTime = this->fields.endEffectTime;
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_CompleteMissionListViewManager_actionAfterCallback__, 0LL);
  ListViewManager__DelayCallMethod((ListViewManager_o *)this, endEffectTime, v4, 0LL);
}


void __fastcall CompleteMissionListViewManager__actionAfterCallback(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Action_o *actionCallback; // x19
  ServantStatusBattleListViewItem_o *p_actionCallback; // x0

  actionCallback = this->fields.actionCallback;
  if ( actionCallback )
  {
    p_actionCallback = (ServantStatusBattleListViewItem_o *)&this->fields.actionCallback;
    p_actionCallback->klass = 0LL;
    sub_1B88554(p_actionCallback, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))actionCallback->fields.m_target)(
      actionCallback->fields.original_method_info,
      *(_QWORD *)&actionCallback->fields.extra_arg);
  }
}


void __fastcall CompleteMissionListViewManager__afterReward(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  AutomatedAction_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A59FC7 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1B885B0(&StringLiteral_5474/*"END_EFFECT"*/);
    byte_4A59FC7 = 1;
  }
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance
    || (AutomatedAction__SetBackGroundUntouchable(Instance, 1, 0LL),
        (Instance = (AutomatedAction_o *)this->fields.targetFSM) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5474/*"END_EFFECT"*/, 0LL);
}


void __fastcall CompleteMissionListViewManager__animAfterCallback(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager_o *v2; // x19
  struct EventMissionEntity_o *missionToRecieve; // x8
  int32_t dispNo; // w20
  struct UILabel_o *sortKindLabel; // x8

  v2 = this;
  if ( (byte_4A59FD0 & 1) == 0 )
  {
    this = (CompleteMissionListViewManager_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A59FD0 = 1;
  }
  missionToRecieve = v2->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_12;
  dispNo = missionToRecieve->fields.dispNo;
  this = (CompleteMissionListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this
    || (sortKindLabel = this[2].fields.sortKindLabel) == 0LL
    || (this = (CompleteMissionListViewManager_o *)sortKindLabel->fields.leftAnchor) == 0LL
    || (this = (CompleteMissionListViewManager_o *)UnityEngine_Transform__GetChild(
                                                     (UnityEngine_Transform_o *)this,
                                                     dispNo - 2,
                                                     0LL)) == 0LL
    || (this = (CompleteMissionListViewManager_o *)UnityEngine_Transform__GetChild(
                                                     (UnityEngine_Transform_o *)this,
                                                     v2->fields.distanceToTexObj,
                                                     0LL)) == 0LL
    || (this = (CompleteMissionListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
        (this = (CompleteMissionListViewManager_o *)v2->fields.touchBlockObj) == 0LL) )
  {
LABEL_12:
    sub_1B8880C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall CompleteMissionListViewManager__checkAcceptable(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v6; // x8
  int64_t v7; // x20
  int64_t v8; // x21
  Il2CppObject *MasterData_object; // x21
  UserPresentBoxEntity_array *VaildList; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  BalanceConfig_c *v13; // x0
  __int64 *v14; // x8
  CompleteMissionListViewManager___c_c *v15; // x0
  System_Action_o *_9__46_0; // x20
  Il2CppObject *v17; // x21
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A59FC3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_0__);
    sub_1B885B0(&CompleteMissionListViewManager___c_TypeInfo);
    sub_1B885B0(&StringLiteral_12136/*"SHOW_MSG"*/);
    sub_1B885B0(&StringLiteral_11118/*"REWARD_ACCEPTABLE"*/);
    byte_4A59FC3 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_36;
  if ( !Instance )
    goto LABEL_36;
  Instance = (int64_t)GiftMaster__getDataById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0LL);
  v6 = this->fields.missionToRecieve;
  if ( !v6 )
    goto LABEL_36;
  if ( v6->fields.rewardType == 1 )
  {
    v7 = Instance;
    if ( !Instance )
      goto LABEL_36;
    if ( Gift__IsServant_37687840(*(_DWORD *)(Instance + 20), 0LL) )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( Instance )
        {
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                *(_DWORD *)(v7 + 24),
                                (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Instance )
          {
            v8 = Instance;
            if ( !SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0LL)
              && !SvtType__IsStatusUp(*(_DWORD *)(v8 + 84), 0LL) )
            {
              goto LABEL_25;
            }
            Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( Instance )
            {
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Instance = NetworkManager__get_UserId(0LL);
              if ( MasterData_object )
              {
                VaildList = UserPresentBoxMaster__getVaildList(
                              (UserPresentBoxMaster_o *)MasterData_object,
                              Instance,
                              0LL);
                Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( Instance )
                {
                  Instance = (int64_t)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
                  if ( Instance )
                  {
                    Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                          *(_DWORD *)(v7 + 24),
                                          (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
                    if ( VaildList )
                    {
                      v13 = BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        v13 = BalanceConfig_TypeInfo;
                      }
                      if ( v13->static_fields->PresentBoxMax > (signed int)VaildList->max_length )
                        goto LABEL_25;
                      v15 = CompleteMissionListViewManager___c_TypeInfo;
                      if ( !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
                        v15 = CompleteMissionListViewManager___c_TypeInfo;
                      }
                      _9__46_0 = v15->static_fields->__9__46_0;
                      if ( !_9__46_0 )
                      {
                        if ( !v15->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v15);
                          v15 = CompleteMissionListViewManager___c_TypeInfo;
                        }
                        v17 = (Il2CppObject *)v15->static_fields->__9;
                        _9__46_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                        System_Action___ctor(
                          _9__46_0,
                          v17,
                          Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_0__,
                          0LL);
                        static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
                        static_fields->__9__46_0 = _9__46_0;
                        sub_1B88554(
                          (ServantStatusBattleListViewItem_o *)&static_fields->__9__46_0,
                          (int32_t)_9__46_0,
                          v19,
                          v20);
                      }
                      this->fields.ShowMSG = _9__46_0;
                      sub_1B88554(
                        (ServantStatusBattleListViewItem_o *)&this->fields.ShowMSG,
                        (int32_t)_9__46_0,
                        v11,
                        v12);
                      Instance = (int64_t)this->fields.targetFSM;
                      if ( Instance )
                      {
                        v14 = &StringLiteral_12136/*"SHOW_MSG"*/;
                        goto LABEL_27;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_36:
      sub_1B8880C(Instance, v4);
    }
  }
LABEL_25:
  Instance = (int64_t)this->fields.targetFSM;
  if ( !Instance )
    goto LABEL_36;
  v14 = &StringLiteral_11118/*"REWARD_ACCEPTABLE"*/;
LABEL_27:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v14, 0LL);
}


bool __fastcall CompleteMissionListViewManager__checkPanelAllOpen(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v3; // x1
  void *monitor; // x8
  System_Collections_Generic_List_EventMissionEntity__o *v5; // x19

  if ( (byte_4A59FD3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A59FD3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (monitor = Instance[9].monitor) == 0LL
    || (v5 = (System_Collections_Generic_List_EventMissionEntity__o *)*((_QWORD *)monitor + 16),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventMissionMaster__getAchivePanelNum((EventMissionMaster_o *)Instance, v5, 0LL), !v5)
    || !Instance )
  {
    sub_1B8880C(Instance, v3);
  }
  return v5->fields._size - 1 == LODWORD(Instance->fields.m_CancellationTokenSource);
}


void __fastcall CompleteMissionListViewManager__endloadEffect(
        CompleteMissionListViewManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8
  const MethodInfo *v9; // x1
  struct EventMissionEntity_o *v10; // x8

  if ( (byte_4A59FCA & 1) == 0 )
  {
    sub_1B885B0(&CompleteMissionListViewManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4A59FCA = 1;
  }
  if ( data )
  {
    CompleteMissionListViewManager_TypeInfo->static_fields->effectAssetData = data;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)CompleteMissionListViewManager_TypeInfo->static_fields,
      (int32_t)data,
      (int32_t)method,
      v3);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve )
      goto LABEL_13;
    if ( MissionActionManager__checkScroll(missionToRecieve->fields.id, 5, 0LL) )
    {
      if ( this->fields.filterStatus )
      {
        this->fields.filterStatus = 0;
        CompleteMissionListViewManager__setList(this, v9);
      }
    }
    else
    {
      CompleteMissionListViewManager__RefrashListDisp(this, v9);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    v10 = this->fields.missionToRecieve;
    if ( !v10 || !Instance )
LABEL_13:
      sub_1B8880C(Instance, v7);
    AutomatedAction__SetMissionAction((AutomatedAction_o *)Instance, v10->fields.id, 5, 0, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall CompleteMissionListViewManager__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__48635516; // x19
  UnityEngine_GameObject_o *v7; // x19
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x20

  if ( (byte_4A59FCB & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&CompleteMissionListViewManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59FCB = 1;
  }
  effectAssetData = CompleteMissionListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              effectAssetData,
                              name,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__48635516,
                                     (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v7 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
  v8 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4A55CE1 )
  {
    effectAssetData = (AssetData_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v8 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
  v9 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4A55CE6 )
  {
    effectAssetData = (AssetData_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v9 )
LABEL_15:
    sub_1B8880C(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v7;
}


System_Collections_Generic_List_CompleteMissionListViewObject__o *__fastcall CompleteMissionListViewManager__get_ClippingObjectList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A59FB9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CompleteMissionListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CompleteMissionListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_CompleteMissionListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59FB9 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_CompleteMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_CompleteMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CompleteMissionListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)CompleteMissionListViewObject__GetItem(
                                 (CompleteMissionListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v16 )
        {
          if ( !v3 )
            sub_1B8880C(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_CompleteMissionListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CompleteMissionListViewObject__o *)v3;
}


System_Collections_Generic_List_CompleteMissionListViewObject__o *__fastcall CompleteMissionListViewManager__get_ObjectList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A59FB8 & 1) == 0 )
  {
    sub_1B885B0(&Method_MissionListViewManager_GetObjectList_CompleteMissionListViewObject___);
    byte_4A59FB8 = 1;
  }
  return (System_Collections_Generic_List_CompleteMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                               (MissionListViewManager_o *)this,
                                                                               (const MethodInfo_2EFE89C *)Method_MissionListViewManager_GetObjectList_CompleteMissionListViewObject___);
}


void __fastcall CompleteMissionListViewManager__loadOpenMissionEffect(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20

  if ( (byte_4A59FC9 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_CompleteMissionListViewManager_endloadEffect__);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&StringLiteral_5843/*"Effect/EventMission"*/);
    byte_4A59FC9 = 1;
  }
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_CompleteMissionListViewManager_endloadEffect__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5843/*"Effect/EventMission"*/, v3, 1, 0LL);
}


void __fastcall CompleteMissionListViewManager__modifyOpenItem(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x21
  __int64 v9; // x1
  void *v10; // x0
  System_Action_o *v11; // x20
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A59FCE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&CompleteMissionListViewItem_TypeInfo);
    sub_1B885B0(&Method_CompleteMissionListViewManager__modifyOpenItem_b__58_0__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59FCE = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_1B8880C(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v13 = v12;
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v13,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v4 )
        break;
      current = v13.fields._current;
      if ( !v13.fields._current
        || (methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v13.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (CompleteMissionListViewItem_c *)v13.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionListViewItem_TypeInfo )
      {
        sub_1B8880C(v4, v5);
      }
      monitor = (UnityEngine_Object_o *)v13.fields._current[6].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v10 = current[6].monitor;
        if ( !v10 )
          sub_1B8880C(0LL, v9);
        (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v10 + 392LL))(
          v10,
          current,
          *(_QWORD *)(*(_QWORD *)v10 + 400LL));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_CompleteMissionListViewManager__modifyOpenItem_b__58_0__, 0LL);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionListViewManager__moveSelectCompleteMissionInfo(
        CompleteMissionListViewManager_o *this,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v9; // w22
  int32_t v10; // w21
  __int64 methodPtr_low; // x10
  bool v12; // w0
  _QWORD *v13; // x8
  bool v14; // w19
  System_Reflection_MethodBase_o *v15; // x0
  int32_t v16; // w1

  if ( (byte_4A59FBC & 1) == 0 )
  {
    sub_1B885B0(&CompleteMissionListViewItem_TypeInfo);
    sub_1B885B0(&Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A59FBC = 1;
  }
  this->fields.targetMissionId = missionID;
  if ( callback )
  {
    this->fields.actionCallback = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.actionCallback,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method);
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_15;
  size = itemList->fields._size;
  v9 = size - 1;
  if ( size >= 1 )
  {
    v10 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v10,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
        break;
      if ( (CompleteMissionListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionListViewItem_TypeInfo )
        break;
      itemList = (System_Collections_Generic_List_object__o *)MissionListViewItem__get_EventMissionEntity(
                                                                (MissionListViewItem_o *)itemList,
                                                                0LL);
      if ( !itemList )
        break;
      if ( LODWORD(itemList->fields._items) == missionID )
        goto LABEL_17;
      if ( v9 == v10 )
        goto LABEL_16;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v10;
    }
    while ( itemList );
LABEL_15:
    sub_1B8880C(itemList, *(_QWORD *)&missionID);
  }
LABEL_16:
  v10 = 0;
LABEL_17:
  v12 = ListViewManager__MoveTopItem((ListViewManager_o *)this, v10, 1, 0LL);
  v13 = Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__;
  v14 = v12;
  if ( (*((_BYTE *)Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B885C8(Method_CompleteMissionListViewManager_moveSelectCompleteMissionInfo__);
  v15 = (System_Reflection_MethodBase_o *)sub_1B88594(v13, v13[4]);
  if ( v14 )
    v16 = 0;
  else
    v16 = 2;
  OverwriteAssetSoundName__PlaySystemSe(v15, v16, 0LL);
}


void __fastcall CompleteMissionListViewManager__panelAfterCallback(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchBlockObj; // x0
  struct EventMissionEntity_o *missionToRecieve; // x8
  Il2CppObject *Entity; // x19
  UnityEngine_GameObject_c *klass; // x8
  System_String_o *v7; // x19
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o *v10; // x19
  CommonUI_o *v11; // x20
  CompleteMissionListViewManager___c_c *v12; // x8
  System_Action_o *_9__65_0; // x21
  Il2CppObject *v14; // x22
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *countText; // [xsp+30h] [xbp-40h] BYREF
  System_String_o *nameText; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_4A59FD2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_CompleteMissionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_CompleteMissionListViewManager___c__panelAfterCallback_b__65_0__);
    sub_1B885B0(&CompleteMissionListViewManager___c_TypeInfo);
    sub_1B885B0(&StringLiteral_25116/*"{0}×{1}"*/);
    sub_1B885B0(&StringLiteral_15968/*"[^0-9]"*/);
    sub_1B885B0(&StringLiteral_3777/*"COMPLETE_MISSION_ACTION_SUCCESS"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_1266/*"1"*/);
    byte_4A59FD2 = 1;
  }
  countText = (System_String_o *)StringLiteral_1/*""*/;
  nameText = (System_String_o *)StringLiteral_1/*""*/;
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(touchBlockObj, 0, 0LL);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_31;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_31;
  if ( !touchBlockObj )
    goto LABEL_31;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)touchBlockObj,
             missionToRecieve->fields.missionTargetId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_31;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Entity )
    goto LABEL_31;
  if ( !touchBlockObj )
    goto LABEL_31;
  touchBlockObj = (UnityEngine_GameObject_o *)GiftMaster__GetGiftListById(
                                                (GiftMaster_o *)touchBlockObj,
                                                HIDWORD(Entity[1].monitor),
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_31;
  klass = touchBlockObj[1].klass;
  if ( !klass )
    return;
  if ( !(_DWORD)klass )
    sub_1B88814(touchBlockObj, method);
  touchBlockObj = (UnityEngine_GameObject_o *)touchBlockObj[1].monitor;
  if ( !touchBlockObj )
    goto LABEL_31;
  GiftEntity__GetInfo((GiftEntity_o *)touchBlockObj, &nameText, &countText, 0LL);
  if ( System_String__IsNullOrEmpty(nameText, 0LL) )
    return;
  if ( !System_String__IsNullOrEmpty(countText, 0LL) )
  {
    v7 = countText;
    if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
    v8 = System_Text_RegularExpressions_Regex__Replace(
           v7,
           (System_String_o *)StringLiteral_15968/*"[^0-9]"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0LL);
    if ( System_String__op_Inequality(v8, (System_String_o *)StringLiteral_1266/*"1"*/, 0LL) )
      nameText = System_String__Format_61721404(
                   (System_String_o *)StringLiteral_25116/*"{0}×{1}"*/,
                   (Il2CppObject *)nameText,
                   (Il2CppObject *)countText,
                   0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3777/*"COMPLETE_MISSION_ACTION_SUCCESS"*/, 0LL);
  v10 = System_String__Format(v9, (Il2CppObject *)nameText, 0LL);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)touchBlockObj;
  v12 = CompleteMissionListViewManager___c_TypeInfo;
  if ( !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
    v12 = CompleteMissionListViewManager___c_TypeInfo;
  }
  _9__65_0 = v12->static_fields->__9__65_0;
  if ( !_9__65_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = CompleteMissionListViewManager___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__65_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__65_0, v14, Method_CompleteMissionListViewManager___c__panelAfterCallback_b__65_0__, 0LL);
    static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__65_0 = _9__65_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__65_0, (int32_t)_9__65_0, v16, v17);
  }
  if ( !v11 )
LABEL_31:
    sub_1B8880C(touchBlockObj, method);
  CommonUI__OpenNotificationDialog(v11, 0LL, v10, _9__65_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
}


void __fastcall CompleteMissionListViewManager__recieveReward(
        CompleteMissionListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  EventMissionEntity_o *v14; // x21
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x3

  if ( (byte_4A59FC2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CompleteMissionListViewManager_recieveReward__);
    sub_1B885B0(&Method_CompleteMissionListViewManager___c__DisplayClass45_0__recieveReward_b__0__);
    sub_1B885B0(&CompleteMissionListViewManager___c__DisplayClass45_0_TypeInfo);
    byte_4A59FC2 = 1;
  }
  v5 = sub_1B887FC(CompleteMissionListViewManager___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = missionEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)missionEntity, v10, v11);
  v12 = Method_CompleteMissionListViewManager_recieveReward__;
  if ( (*((_BYTE *)Method_CompleteMissionListViewManager_recieveReward__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1B885C8(Method_CompleteMissionListViewManager_recieveReward__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B88594(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 8, 0LL);
  v14 = *(EventMissionEntity_o **)(v5 + 24);
  v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_CompleteMissionListViewManager___c__DisplayClass45_0__recieveReward_b__0__,
    0LL);
  CompleteMissionListViewManager__CehckQpMaxAlert(this, v14, v15, v16);
}


void __fastcall CompleteMissionListViewManager__setAfterAction(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct EventMissionEntity_o *missionToRecieve; // x8

  if ( (byte_4A59FC8 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4A59FC8 = 1;
  }
  if ( this->fields.isEndEvent )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    missionToRecieve = this->fields.missionToRecieve;
    if ( !missionToRecieve || !Instance )
      sub_1B8880C(Instance, v4);
    AutomatedAction__SetMissionAction((AutomatedAction_o *)Instance, missionToRecieve->fields.id, 5, 1, 0LL);
  }
  else
  {
    CompleteMissionListViewManager__loadOpenMissionEffect(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionListViewManager__setFilterId(
        CompleteMissionListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  this->fields.filterStatus = id;
  CompleteMissionListViewManager__setList(this, *(const MethodInfo **)&id);
}


void __fastcall CompleteMissionListViewManager__setFilterName(
        CompleteMissionListViewManager_o *this,
        System_String_o *targetFile,
        const MethodInfo *method)
{
  UISprite_o *filterBtnTxt; // x0

  filterBtnTxt = this->fields.filterBtnTxt;
  if ( !filterBtnTxt
    || (UISprite__set_spriteName(filterBtnTxt, targetFile, 0LL), (filterBtnTxt = this->fields.filterBtnTxt) == 0LL) )
  {
    sub_1B8880C(filterBtnTxt, targetFile);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))filterBtnTxt->klass->vtable._33_MakePixelPerfect.method)(
    filterBtnTxt,
    filterBtnTxt->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall CompleteMissionListViewManager__setList(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v4; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *operationSortInfo; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  UILabel_o *v12; // x21
  struct ListViewSort_o *v13; // x8
  int v14; // w9
  bool v15; // w2
  int32_t filterStatus; // w19

  if ( (byte_4A59FC1 & 1) == 0 )
  {
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8771/*"MST_MISSION_EMPTY_TXT"*/);
    sub_1B885B0(&StringLiteral_17569/*"btn_txt_completed"*/);
    sub_1B885B0(&StringLiteral_17602/*"btn_txt_receipt"*/);
    sub_1B885B0(&StringLiteral_17601/*"btn_txt_progress"*/);
    sub_1B885B0(&StringLiteral_8649/*"MISSION_EMPTY_TXT"*/);
    sub_1B885B0(&StringLiteral_17551/*"btn_txt_all"*/);
    byte_4A59FC1 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v4 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759792(v4, baseSortInfo, 0LL);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.operationSortInfo, (int32_t)v4, v6, v7);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8649/*"MISSION_EMPTY_TXT"*/, 0LL);
  if ( !emptyMessageLabel )
LABEL_42:
    sub_1B8880C(operationSortInfo, v10);
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0LL);
  switch ( this->fields.filterStatus )
  {
    case 0:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17551/*"btn_txt_all"*/, v11);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 1, 0LL);
      v12 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8771/*"MST_MISSION_EMPTY_TXT"*/, 0LL);
      if ( !v12 )
        goto LABEL_42;
      UILabel__set_text(v12, operationSortInfo, 0LL);
      goto LABEL_35;
    case 1:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17602/*"btn_txt_receipt"*/, v11);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0LL);
      v13 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      v14 = 1;
      goto LABEL_37;
    case 2:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17601/*"btn_txt_progress"*/, v11);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 1, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      v15 = 0;
      goto LABEL_33;
    case 3:
      CompleteMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17569/*"btn_txt_completed"*/, v11);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      v15 = 1;
LABEL_33:
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, v15, 0LL);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0LL);
LABEL_35:
      v13 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_42;
      v14 = 13;
LABEL_37:
      v13->fields.sortKind = v14;
LABEL_38:
      operationSortInfo = (System_String_o *)this->fields.baseSortInfo;
      if ( !operationSortInfo )
        goto LABEL_42;
      ListViewSort__Set((ListViewSort_o *)operationSortInfo, this->fields.operationSortInfo, 0LL);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
      filterStatus = this->fields.filterStatus;
      if ( !byte_4A5A01D )
      {
        sub_1B885B0(&EventRewardSaveData_TypeInfo);
        byte_4A5A01D = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_CompleteMissionFilterId_k__BackingField = filterStatus;
      EventRewardSaveData__SaveCompleteMissionData(0LL);
      return;
    default:
      goto LABEL_38;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionListViewManager__setNextMissionInfo(
        CompleteMissionListViewManager_o *this,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v9; // w22
  int32_t v10; // w21
  __int64 methodPtr_low; // x10
  System_Action_o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A59FBB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&CompleteMissionListViewItem_TypeInfo);
    sub_1B885B0(&Method_CompleteMissionListViewManager__setNextMissionInfo_b__35_0__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A59FBB = 1;
  }
  this->fields.targetMissionId = missionID;
  if ( callback )
  {
    this->fields.actionCallback = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.actionCallback,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method);
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_15;
  size = itemList->fields._size;
  v9 = size - 1;
  if ( size >= 1 )
  {
    v10 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v10,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
        break;
      if ( (CompleteMissionListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionListViewItem_TypeInfo )
        break;
      itemList = (System_Collections_Generic_List_object__o *)MissionListViewItem__get_EventMissionEntity(
                                                                (MissionListViewItem_o *)itemList,
                                                                0LL);
      if ( !itemList )
        break;
      if ( LODWORD(itemList->fields._items) == missionID )
        goto LABEL_17;
      if ( v9 == v10 )
        goto LABEL_16;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v10;
    }
    while ( itemList );
LABEL_15:
    sub_1B8880C(itemList, *(_QWORD *)&missionID);
  }
LABEL_16:
  v10 = 0;
LABEL_17:
  v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    Method_CompleteMissionListViewManager__setNextMissionInfo_b__35_0__,
    0LL);
  this->fields.callbackAfterScroll = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackAfterScroll, (int32_t)v12, v13, v14);
  ListViewManager__MoveTopItem((ListViewManager_o *)this, v10, 1, 0LL);
}


void __fastcall CompleteMissionListViewManager__setOpenPanel(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  UnityEngine_GameObject_o *touchBlockObj; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct EventMissionEntity_o *missionToRecieve; // x8
  struct EventMissionEntity_o *v9; // x8
  Il2CppObject *Entity; // x21
  void *monitor; // x8
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  void *v15; // x8
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  void *v19; // x8
  Il2CppObject *v20; // x22
  void *v21; // x8
  UISprite_o *v22; // x20
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x20
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x0
  System_String_o *v31; // x20
  AssetLoader_LoadEndDataHandler_o *v32; // x21
  int v33; // [xsp+8h] [xbp-48h] BYREF
  int klass_high; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A59FCF & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1B885B0(&Method_DataManager_GetMasterData_CompleteMissionMaster___);
    sub_1B885B0(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_CompleteMissionListViewManager___c__DisplayClass61_0__setOpenPanel_b__0__);
    sub_1B885B0(&CompleteMissionListViewManager___c__DisplayClass61_0_TypeInfo);
    sub_1B885B0(&StringLiteral_4660/*"CompleteMission/{0}/{1}"*/);
    byte_4A59FCF = 1;
  }
  v3 = sub_1B887FC(CompleteMissionListViewManager___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_42;
  *(_QWORD *)(v3 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 40), (int32_t)this, v6, v7);
  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  CommonUI__SetLoadMode((CommonUI_o *)touchBlockObj, 1, 0LL);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_42;
  *(_DWORD *)(v3 + 24) = missionToRecieve->fields.dispNo - 2;
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)touchBlockObj,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  v9 = this->fields.missionToRecieve;
  if ( !v9 )
    goto LABEL_42;
  if ( !touchBlockObj )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)touchBlockObj,
             v9->fields.missionTargetId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__GetEntity__);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  monitor = touchBlockObj[57].monitor;
  if ( !monitor )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)*((_QWORD *)monitor + 4);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v3 + 24),
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToTexObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)touchBlockObj,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UITexture___);
  *(_QWORD *)(v3 + 16) = Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)Component_object, v13, v14);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  v15 = touchBlockObj[57].monitor;
  if ( !v15 )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)*((_QWORD *)v15 + 4);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v3 + 24),
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToEfPanelObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToAdjustObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToRowlingPanelObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToTextureObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  v16 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)touchBlockObj,
          (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UITexture___);
  *(_QWORD *)(v3 + 32) = v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)v16, v17, v18);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  v19 = touchBlockObj[57].monitor;
  if ( !v19 )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)*((_QWORD *)v19 + 4);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v3 + 24),
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToNumObj,
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  v20 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)touchBlockObj,
          (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
  touchBlockObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !touchBlockObj )
    goto LABEL_42;
  v21 = touchBlockObj[57].monitor;
  if ( !v21 )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)*((_QWORD *)v21 + 4);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                *(_DWORD *)(v3 + 24),
                                                0LL);
  if ( !touchBlockObj )
    goto LABEL_42;
  touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)touchBlockObj,
                                                this->fields.distanceToEfPanelObj,
                                                0LL);
  if ( !touchBlockObj
    || (touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)touchBlockObj,
                                                      this->fields.distanceToAdjustObj,
                                                      0LL)) == 0LL
    || (touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)touchBlockObj,
                                                      this->fields.distanceToRowlingPanelObj,
                                                      0LL)) == 0LL
    || (touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)touchBlockObj,
                                                      this->fields.distanceToNumberObj,
                                                      0LL)) == 0LL
    || (touchBlockObj = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)touchBlockObj,
                                                      (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___),
        !v20)
    || (v22 = (UISprite_o *)touchBlockObj) == 0LL
    || (UISprite__set_atlas((UISprite_o *)touchBlockObj, (UIAtlas_o *)v20[29].klass, 0LL),
        UISprite__set_spriteName(v22, (System_String_o *)v20[29].monitor, 0LL),
        !Entity) )
  {
LABEL_42:
    sub_1B8880C(touchBlockObj, v5);
  }
  klass_high = HIDWORD(Entity[1].klass);
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass_high, v23, v24, v25);
  v33 = *(_DWORD *)(v3 + 24);
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v27, v28, v29);
  v31 = System_String__Format_61721404((System_String_o *)StringLiteral_4660/*"CompleteMission/{0}/{1}"*/, v26, v30, 0LL);
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)v3,
    Method_CompleteMissionListViewManager___c__DisplayClass61_0__setOpenPanel_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v31, v32, 1, 0LL);
}


void __fastcall CompleteMissionListViewManager__setPanelAnim(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  struct EventMissionEntity_o *missionToRecieve; // x8

  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    sub_1B8880C(this, method);
  if ( missionToRecieve->fields.dispNo >= 2 )
    CompleteMissionListViewManager__setOpenPanel(this, method);
}


void __fastcall CompleteMissionListViewManager__startPanelAnim(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchBlockObj; // x0
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *started; // x1

  touchBlockObj = this->fields.touchBlockObj;
  if ( !touchBlockObj )
    sub_1B8880C(0LL, method);
  UnityEngine_GameObject__SetActive(touchBlockObj, 1, 0LL);
  started = CompleteMissionListViewManager__StartPanelAnimCoroutine(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


void __fastcall CompleteMissionListViewManager__unAcceptableDlg(
        CompleteMissionListViewManager_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager_o *v2; // x19
  struct System_Action_o *ShowMSG; // x8

  v2 = this;
  if ( (byte_4A59FC4 & 1) == 0 )
  {
    this = (CompleteMissionListViewManager_o *)sub_1B885B0(&StringLiteral_5479/*"END_NOTICE"*/);
    byte_4A59FC4 = 1;
  }
  ShowMSG = v2->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))ShowMSG->fields.m_target)(
          ShowMSG->fields.original_method_info,
          *(_QWORD *)&ShowMSG->fields.extra_arg),
        (this = (CompleteMissionListViewManager_o *)v2->fields.targetFSM) == 0LL) )
  {
    sub_1B8880C(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5479/*"END_NOTICE"*/, 0LL);
}


void __fastcall CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50___ctor(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__MoveNext(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct CompleteMissionListViewManager_o *_4__this; // x22
  Il2CppObject *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3
  void *_8__1; // x0
  struct CompleteMissionListViewManager_o *v11; // x1
  struct CompleteMissionListViewManager___c__DisplayClass50_0_o *v12; // x8
  _BOOL4 isCompleteMission; // w9
  __int64 v14; // x8
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *Instance; // x0
  GiftEntity_array *rewards; // x20
  System_String_o *rewardDetail; // x21
  Il2CppObject *v27; // x23
  CommonUI_o *v28; // x19
  MissionRewardGetDialog_ClickDelegate_o *v29; // x22

  if ( (byte_4A59FE4 & 1) == 0 )
  {
    sub_1B885B0(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_CompleteMissionListViewManager___c__DisplayClass50_0__OpenPanelMissionRewardGetDialog_b__0__);
    sub_1B885B0(&CompleteMissionListViewManager___c__DisplayClass50_0_TypeInfo);
    byte_4A59FE4 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    goto LABEL_16;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v5 = (Il2CppObject *)sub_1B887FC(CompleteMissionListViewManager___c__DisplayClass50_0_TypeInfo);
    System_Object___ctor(v5, 0LL);
    this->fields.__8__1 = (struct CompleteMissionListViewManager___c__DisplayClass50_0_o *)v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__8__1, (int32_t)v5, v6, v7);
    _8__1 = this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_25;
    v11 = this->fields.__4__this;
    *((_QWORD *)_8__1 + 2) = v11;
    sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)_8__1 + 16), (int32_t)v11, v8, v9);
    v12 = this->fields.__8__1;
    if ( !v12 )
      goto LABEL_25;
    isCompleteMission = this->fields.isCompleteMission;
    v12->fields.isCompleteMission = isCompleteMission;
    if ( !isCompleteMission )
      goto LABEL_22;
    if ( !_4__this )
      goto LABEL_25;
    _8__1 = _4__this->fields.touchBlockObj;
    if ( !_8__1 )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 1, 0LL);
    _8__1 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !_8__1 )
      goto LABEL_25;
    v14 = *((_QWORD *)_8__1 + 172);
    if ( !v14 )
      goto LABEL_25;
    _8__1 = *(void **)(v14 + 32);
    if ( !_8__1 )
      goto LABEL_25;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)_8__1,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Animation___);
    this->fields._anim_5__2 = (struct UnityEngine_Animation_o *)Component_object;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._anim_5__2, (int32_t)Component_object, v16, v17);
    _8__1 = this->fields._anim_5__2;
    if ( !_8__1 )
      goto LABEL_25;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)_8__1, 0LL);
LABEL_16:
    _8__1 = this->fields._anim_5__2;
    if ( !_8__1 )
      goto LABEL_25;
    _8__1 = (void *)UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)_8__1, 0LL);
    if ( ((unsigned __int8)_8__1 & 1) != 0 )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, 0, v18, v19);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    if ( !_4__this )
      goto LABEL_25;
    _8__1 = _4__this->fields.touchBlockObj;
    if ( !_8__1 )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 0, 0LL);
    this->fields._anim_5__2 = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._anim_5__2, 0, v22, v23);
LABEL_22:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    rewards = this->fields.rewards;
    rewardDetail = this->fields.rewardDetail;
    v27 = (Il2CppObject *)this->fields.__8__1;
    v28 = (CommonUI_o *)Instance;
    v29 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1B887FC(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      v29,
      v27,
      Method_CompleteMissionListViewManager___c__DisplayClass50_0__OpenPanelMissionRewardGetDialog_b__0__,
      0LL);
    if ( v28 )
    {
      CommonUI__OpenMissionRewardGetDialog(v28, rewards, rewardDetail, v29, 0, 0LL);
      return 0;
    }
LABEL_25:
    sub_1B8880C(_8__1, method);
  }
  return 0;
}


Il2CppObject *__fastcall CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__System_Collections_IEnumerator_Reset(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__System_Collections_IEnumerator_get_Current(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50__System_IDisposable_Dispose(
        CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog_d__50_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64___ctor(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__MoveNext(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  CompleteMissionListViewManager_o *_4__this; // x20
  UnityEngine_Component_o *Instance; // x0
  _QWORD *monitor; // x8
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_4A59FE5 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A59FE5 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    goto LABEL_11;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    monitor = Instance[57].monitor;
    if ( !monitor )
      goto LABEL_17;
    Instance = (UnityEngine_Component_o *)monitor[4];
    if ( !Instance )
      goto LABEL_17;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         Instance,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Animation___);
    this->fields._anim_5__2 = (struct UnityEngine_Animation_o *)Component_object;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._anim_5__2, (int32_t)Component_object, v8, v9);
    Instance = (UnityEngine_Component_o *)this->fields._anim_5__2;
    if ( !Instance )
      goto LABEL_17;
    UnityEngine_Animation__Play((UnityEngine_Animation_o *)Instance, 0LL);
LABEL_11:
    Instance = (UnityEngine_Component_o *)this->fields._anim_5__2;
    if ( Instance )
    {
      Instance = (UnityEngine_Component_o *)UnityEngine_Animation__get_isPlaying(
                                              (UnityEngine_Animation_o *)Instance,
                                              0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, 0, v10, v11);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      if ( _4__this )
      {
        CompleteMissionListViewManager__panelAfterCallback(_4__this, method);
        return 0;
      }
    }
LABEL_17:
    sub_1B8880C(Instance, method);
  }
  return 0;
}


Il2CppObject *__fastcall CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__System_Collections_IEnumerator_Reset(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__System_Collections_IEnumerator_get_Current(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64__System_IDisposable_Dispose(
        CompleteMissionListViewManager__StartPanelAnimCoroutine_d__64_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CompleteMissionListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A59FD8 & 1) == 0 )
  {
    sub_1B885B0(&CompleteMissionListViewManager___c_TypeInfo);
    byte_4A59FD8 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(CompleteMissionListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  CompleteMissionListViewManager___c_TypeInfo->static_fields->__9 = (struct CompleteMissionListViewManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)CompleteMissionListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall CompleteMissionListViewManager___c___ctor(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager___c___CehckQpMaxAlert_b__68_1(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A59FDB & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A59FDB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseCompleteMission((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(Instance, v3);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0LL, 0LL);
}


void __fastcall CompleteMissionListViewManager___c___checkAcceptable_b__46_0(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  System_String_o *v3; // x0
  __int64 v4; // x1
  CompleteMissionListViewManager___c_c *v5; // x8
  System_String_o *v6; // x20
  System_String_o *v7; // x21
  System_Action_o *_9__46_1; // x22
  Il2CppObject *v9; // x23
  struct CompleteMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A59FD9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_1__);
    sub_1B885B0(&CompleteMissionListViewManager___c_TypeInfo);
    sub_1B885B0(&StringLiteral_8643/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A59FD9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_8643/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0LL);
  v5 = CompleteMissionListViewManager___c_TypeInfo;
  v6 = v3;
  if ( !CompleteMissionListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewManager___c_TypeInfo);
    v5 = CompleteMissionListViewManager___c_TypeInfo;
  }
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  _9__46_1 = v5->static_fields->__9__46_1;
  if ( !_9__46_1 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = CompleteMissionListViewManager___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v5->static_fields->__9;
    _9__46_1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__46_1, v9, Method_CompleteMissionListViewManager___c__checkAcceptable_b__46_1__, 0LL);
    static_fields = CompleteMissionListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__46_1 = _9__46_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__46_1, (int32_t)_9__46_1, v11, v12);
  }
  if ( !Instance )
    sub_1B8880C(v3, v4);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v7, v6, _9__46_1, 150, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
}


void __fastcall CompleteMissionListViewManager___c___checkAcceptable_b__46_1(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A59FDA & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A59FDA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall CompleteMissionListViewManager___c___panelAfterCallback_b__65_0(
        CompleteMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass45_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass45_0___recieveReward_b__0(
        CompleteMissionListViewManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  CompleteMissionListViewManager___c__DisplayClass45_0_o *v4; // x19
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct EventMissionEntity_o *missionEntity; // x1
  struct CompleteMissionListViewManager_o *v7; // x8

  v4 = this;
  if ( (byte_4A59FDC & 1) == 0 )
  {
    this = (CompleteMissionListViewManager___c__DisplayClass45_0_o *)sub_1B885B0(&StringLiteral_8639/*"MISSIONN_REWARD"*/);
    byte_4A59FDC = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (missionEntity = v4->fields.missionEntity,
        _4__this->fields.missionToRecieve = missionEntity,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&_4__this->fields.missionToRecieve,
          (int32_t)missionEntity,
          v2,
          v3),
        (v7 = v4->fields.__4__this) == 0LL)
    || (this = (CompleteMissionListViewManager___c__DisplayClass45_0_o *)v7->fields.targetFSM) == 0LL )
  {
    sub_1B8880C(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8639/*"MISSIONN_REWARD"*/, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_0___AcceptReward_b__2(
        CompleteMissionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4A59FDE & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A59FDE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
  }
  CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)Instance, v4);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_0___AcceptReward_b__4(
        CompleteMissionListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4A59FDD & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A59FDD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
  }
  CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)Instance, v4);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_1___ctor(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__0(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v2; // x19
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v5; // x8
  struct System_Collections_Generic_List_GiftEntity__o *giftList; // x8
  System_Text_StringBuilder_o *v7; // x20
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v8; // x8
  System_String_o *v9; // x21
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v10; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v11; // x8
  System_String_o *v12; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v13; // x8
  System_String_o *v14; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v15; // x8
  System_String_o *v16; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v17; // x8
  System_String_o *v18; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v19; // x8
  struct CompleteMissionListViewManager_o *v20; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v21; // x8
  struct CompleteMissionListViewManager_o *v22; // x8
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v23; // x21
  Il2CppObject *v24; // x0
  System_String_o *v25; // x21
  _QWORD *v26; // x22
  __int64 v27; // x8
  __int64 v28; // x0
  __int64 v29; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v30; // x8
  struct CompleteMissionListViewManager_o *v31; // x8
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v32; // x21
  Il2CppObject *NumberFormat; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v34; // x8
  CompleteMissionListViewManager_o *v35; // x21
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v36; // x22
  const MethodInfo *v37; // x4
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v38; // x8
  System_Collections_IEnumerator_o *Dialog; // x1

  v2 = this;
  if ( (byte_4A59FDF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_object___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&StringLiteral_8684/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_8642/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_8645/*"MISSION_ACTION_SUCCESS"*/);
    sub_1B885B0(&StringLiteral_50/*"\n \n"*/);
    sub_1B885B0(&StringLiteral_51/*"\n \n "*/);
    sub_1B885B0(&StringLiteral_8685/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)sub_1B885B0(&StringLiteral_8648/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/);
    byte_4A59FDF = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_73;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_73;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)_4__this->fields.touchBlockObj;
  if ( !this )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v5 = v2->fields.CS___8__locals1;
  if ( !v5 )
    goto LABEL_73;
  ActionExtensions__Call(v5->fields.callback, 0LL);
  giftList = v2->fields.giftList;
  if ( !giftList )
    goto LABEL_73;
  if ( giftList->fields._size < 1 )
  {
    v10 = v2->fields.CS___8__locals1;
    if ( v10 )
    {
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v10->fields.__4__this;
      if ( this )
      {
        CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)this, method);
        v11 = v2->fields.CS___8__locals1;
        if ( v11 )
        {
          this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v11->fields.__4__this;
          if ( this )
          {
            CompleteMissionListViewManager__setPanelAnim((CompleteMissionListViewManager_o *)this, method);
            return;
          }
        }
      }
    }
    goto LABEL_73;
  }
  v7 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v7, 0LL);
  v8 = v2->fields.CS___8__locals1;
  if ( !v8 )
    goto LABEL_73;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v8->fields.itemTypeDialogMessage;
  if ( !this )
    goto LABEL_73;
  v9 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                            this,
                            this->klass[1]._1.image);
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v9, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v2->fields.giftTypeItemNum >= 2 )
    {
      if ( !v9 )
        goto LABEL_73;
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__Substring_61726036(
                                                                         v9,
                                                                         0,
                                                                         v9->fields._stringLength - 2,
                                                                         0LL);
      if ( !v7 )
        goto LABEL_73;
      System_Text_StringBuilder__Append_60868928(v7, (System_String_o *)this, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8642/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0LL);
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_60868928(
                                                                         v7,
                                                                         v12,
                                                                         0LL);
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_8645/*"MISSION_ACTION_SUCCESS"*/,
                                                                         0LL);
      if ( !v7 )
        goto LABEL_73;
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                         v7,
                                                                         (System_String_o *)this,
                                                                         (Il2CppObject *)v9,
                                                                         0LL);
    }
    v13 = v2->fields.CS___8__locals1;
    if ( !v13 )
      goto LABEL_73;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v13->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_73;
    v14 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                               this,
                               this->klass[1]._1.image);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v14, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_60868928(
                                                                         v7,
                                                                         (System_String_o *)StringLiteral_51/*"\n \n "*/,
                                                                         0LL);
  }
  v15 = v2->fields.CS___8__locals1;
  if ( !v15 )
    goto LABEL_73;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v15->fields.svtTypeDialogMessage;
  if ( !this )
    goto LABEL_73;
  v16 = (System_String_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                             this,
                             this->klass[1]._1.image);
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_String__IsNullOrEmpty(v16, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v17 = v2->fields.CS___8__locals1;
    if ( !v17 )
      goto LABEL_73;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v17->fields.svtTypeDialogMessage;
    if ( !this )
      goto LABEL_73;
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)((__int64 (__fastcall *)(CompleteMissionListViewManager___c__DisplayClass49_1_o *, void *))this->klass->vtable._3_ToString.method)(
                                                                       this,
                                                                       this->klass[1]._1.image);
    if ( !v7 )
      goto LABEL_73;
    System_Text_StringBuilder__Append_60868928(v7, (System_String_o *)this, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8648/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0LL);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__Append_60868928(
                                                                       v7,
                                                                       v18,
                                                                       0LL);
  }
  v19 = v2->fields.CS___8__locals1;
  if ( !v19 )
    goto LABEL_73;
  v20 = v19->fields.__4__this;
  if ( !v20 )
    goto LABEL_73;
  if ( v20->fields.isQpMaxAlert )
  {
    if ( v20->fields.isQpAlreadyMax )
    {
      if ( v7 )
      {
        if ( v2->fields.giftTypeItemNum >= 2 )
          System_Text_StringBuilder__Append_60868928(v7, (System_String_o *)StringLiteral_50/*"\n \n"*/, 0LL);
        else
          System_Text_StringBuilder__set_Length(v7, 0, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                           (System_String_o *)StringLiteral_8684/*"MISSION_REWARD_QP_NOT_GET_MESSAGE"*/,
                                                                           0LL);
        v30 = v2->fields.CS___8__locals1;
        if ( v30 )
        {
          v31 = v30->fields.__4__this;
          if ( v31 )
          {
            v32 = this;
            NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v31->fields.overQpValue, 0LL);
            this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat(
                                                                               v7,
                                                                               (System_String_o *)v32,
                                                                               NumberFormat,
                                                                               0LL);
            goto LABEL_67;
          }
        }
      }
LABEL_73:
      sub_1B8880C(this, method);
    }
    if ( !v7 )
      goto LABEL_73;
    System_Text_StringBuilder__Append_60868928(v7, (System_String_o *)StringLiteral_50/*"\n \n"*/, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_8685/*"MISSION_REWARD_QP_PART_NOT_GET_MESSAGE"*/,
                                                                       0LL);
    v21 = v2->fields.CS___8__locals1;
    if ( !v21 )
      goto LABEL_73;
    v22 = v21->fields.__4__this;
    if ( !v22 )
      goto LABEL_73;
    v23 = this;
    v24 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v22->fields.overQpValue, 0LL);
    v25 = System_String__Format((System_String_o *)v23, v24, 0LL);
    v26 = Method_System_Array_Empty_object___;
    v27 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v27 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_object___);
      v27 = v26[7];
    }
    v28 = *(_QWORD *)(v27 + 16);
    if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
      v28 = sub_1BDA48C(v28);
    if ( !*(_DWORD *)(v28 + 224) )
      j_il2cpp_runtime_class_init_0(v28);
    v29 = *(_QWORD *)(v26[7] + 16LL);
    if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
      v29 = sub_1BDA48C(v29);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Text_StringBuilder__AppendFormat_60875468(
                                                                       v7,
                                                                       v25,
                                                                       **(System_Object_array ***)(v29 + 184),
                                                                       0LL);
  }
LABEL_67:
  v34 = v2->fields.CS___8__locals1;
  if ( !v34 )
    goto LABEL_73;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)v2->fields.giftList;
  if ( !this )
    goto LABEL_73;
  v35 = v34->fields.__4__this;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)System_Collections_Generic_List_object___ToArray(
                                                                     (System_Collections_Generic_List_object__o *)this,
                                                                     (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
  if ( !v7 )
    goto LABEL_73;
  v36 = this;
  this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v7->klass->vtable._3_ToString.method)(
                                                                     v7,
                                                                     v7->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v38 = v2->fields.CS___8__locals1;
  if ( !v38 || !v35 )
    goto LABEL_73;
  Dialog = CompleteMissionListViewManager__OpenPanelMissionRewardGetDialog(
             v35,
             (GiftEntity_array *)v36,
             (System_String_o *)this,
             v38->fields.isCompleteMission,
             v37);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)v35, Dialog, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__1(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  CompleteMissionListViewManager___c__DisplayClass49_1_o *v2; // x19
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  MissionListViewManager_o *_4__this; // x20
  System_Action_o *_9__3; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  v2 = this;
  if ( (byte_4A59FE0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (CompleteMissionListViewManager___c__DisplayClass49_1_o *)sub_1B885B0(&Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__3__);
    byte_4A59FE0 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  _4__this = (MissionListViewManager_o *)CS___8__locals1->fields.__4__this;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_CompleteMissionListViewManager___c__DisplayClass49_1__AcceptReward_b__3__,
      0LL);
    v2->fields.__9__3 = _9__3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v6, v7);
  }
  if ( !_4__this )
LABEL_8:
    sub_1B8880C(this, method);
  MissionListViewManager__StartSvtListGetEffect(_4__this, 0, _9__3, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass49_1___AcceptReward_b__3(
        CompleteMissionListViewManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  SummonAssetManager_o *Instance; // x0
  __int64 v4; // x1
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *CS___8__locals1; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v7; // x8
  Il2CppObject *v8; // x0
  EventRewardSetEntity_o *rwdSetEnt; // x20
  CommonUI_o *v10; // x21
  System_String_o *v11; // x0
  struct CompleteMissionListViewManager___c__DisplayClass49_0_o *v12; // x22
  MissionRewardGetDialog_ClickDelegate_o *_9__4; // x23
  System_String_o *v14; // x19
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A59FE1 & 1) == 0 )
  {
    sub_1B885B0(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1B885B0(&Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__4__);
    sub_1B885B0(&StringLiteral_8645/*"MISSION_ACTION_SUCCESS"*/);
    byte_4A59FE1 = 1;
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  SummonAssetManager__UnloadSummonAssets(Instance, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_15;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  Instance = (SummonAssetManager_o *)_4__this->fields.touchBlockObj;
  if ( !Instance )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  v7 = this->fields.CS___8__locals1;
  if ( !v7 )
    goto LABEL_15;
  ActionExtensions__Call(v7->fields.callback, 0LL);
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  rwdSetEnt = this->fields.rwdSetEnt;
  v10 = (CommonUI_o *)v8;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_8645/*"MISSION_ACTION_SUCCESS"*/, 0LL);
  Instance = (SummonAssetManager_o *)System_String__Format(v11, (Il2CppObject *)this->fields.sendName, 0LL);
  v12 = this->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_15;
  _9__4 = v12->fields.__9__4;
  v14 = (System_String_o *)Instance;
  if ( !_9__4 )
  {
    _9__4 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1B887FC(MissionRewardGetDialog_ClickDelegate_TypeInfo);
    MissionRewardGetDialog_ClickDelegate___ctor(
      _9__4,
      (Il2CppObject *)v12,
      Method_CompleteMissionListViewManager___c__DisplayClass49_0__AcceptReward_b__4__,
      0LL);
    v12->fields.__9__4 = _9__4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->fields.__9__4, (int32_t)_9__4, v15, v16);
  }
  if ( !v10 )
LABEL_15:
    sub_1B8880C(Instance, v4);
  CommonUI__OpenMissionRewardGetDialog_30562416(v10, rwdSetEnt, v14, _9__4, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass50_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass50_0___OpenPanelMissionRewardGetDialog_b__0(
        CompleteMissionListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4A59FE2 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A59FE2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseMissionRewardGetDialog(Instance, 0LL);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
    goto LABEL_8;
  CompleteMissionListViewManager__afterReward((CompleteMissionListViewManager_o *)Instance, v4);
  if ( this->fields.isCompleteMission )
    return;
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
LABEL_8:
    sub_1B8880C(Instance, v4);
  CompleteMissionListViewManager__setPanelAnim((CompleteMissionListViewManager_o *)Instance, v4);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass61_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass61_0___setOpenPanel_b__0(
        CompleteMissionListViewManager___c__DisplayClass61_0_o *this,
        AssetData_o *backPanel,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  struct UITexture_o *tex; // x21
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x0
  struct UITexture_o *animTex; // x21
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  struct CompleteMissionComponent_o *completeMissionComp; // x8
  struct CompleteMissionListViewManager_o *_4__this; // x8
  struct CompleteMissionComponent_o *v20; // x8
  struct CompleteMissionListViewManager_o *v21; // x8
  struct CompleteMissionComponent_o *v22; // x8
  struct CompleteMissionListViewManager_o *v23; // x8
  struct CompleteMissionListViewManager_o *v24; // x19
  float endEffectTime; // s8
  System_Action_o *v26; // x20
  int32_t v27; // [xsp+8h] [xbp-48h] BYREF
  int32_t completeMissionPanelChildIdx; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A59FE3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    sub_1B885B0(&Method_CompleteMissionListViewManager_animAfterCallback__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    byte_4A59FE3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  tex = this->fields.tex;
  completeMissionPanelChildIdx = this->fields.completeMissionPanelChildIdx;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &completeMissionPanelChildIdx, v8, v9, v10);
  Instance = (CommonUI_o *)System_String__Format((System_String_o *)StringLiteral_24983/*"{0}"*/, v11, 0LL);
  if ( !backPanel )
    goto LABEL_30;
  Instance = (CommonUI_o *)AssetData__GetObject_object__48635516(
                             backPanel,
                             (System_String_o *)Instance,
                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
  if ( !tex )
    goto LABEL_30;
  ((void (__fastcall *)(struct UITexture_o *, CommonUI_o *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
    tex,
    Instance,
    tex->klass->vtable._28_get_shader.methodPtr);
  animTex = this->fields.animTex;
  v27 = this->fields.completeMissionPanelChildIdx;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v13, v14, v15);
  v17 = System_String__Format((System_String_o *)StringLiteral_24983/*"{0}"*/, v16, 0LL);
  Instance = (CommonUI_o *)AssetData__GetObject_object__48635516(
                             backPanel,
                             v17,
                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
  if ( !animTex )
    goto LABEL_30;
  ((void (__fastcall *)(struct UITexture_o *, CommonUI_o *, Il2CppMethodPointer))animTex->klass->vtable._27_set_mainTexture.method)(
    animTex,
    Instance,
    animTex->klass->vtable._28_get_shader.methodPtr);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  completeMissionComp = Instance->fields.completeMissionComp;
  if ( !completeMissionComp )
    goto LABEL_30;
  Instance = (CommonUI_o *)completeMissionComp->fields.completeMissionPanel;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             this->fields.completeMissionPanelChildIdx,
                             0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_30;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             _4__this->fields.distanceToNumObj,
                             0LL);
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v20 = Instance->fields.completeMissionComp;
  if ( !v20 )
    goto LABEL_30;
  Instance = (CommonUI_o *)v20->fields.completeMissionPanel;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             this->fields.completeMissionPanelChildIdx,
                             0LL);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_30;
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                             (UnityEngine_Transform_o *)Instance,
                             v21->fields.distanceToTexObj,
                             0LL);
  if ( !Instance )
    goto LABEL_30;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v22 = Instance->fields.completeMissionComp;
  if ( !v22
    || (Instance = (CommonUI_o *)v22->fields.completeMissionPanel) == 0LL
    || (Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                                   (UnityEngine_Transform_o *)Instance,
                                   this->fields.completeMissionPanelChildIdx,
                                   0LL),
        (v23 = this->fields.__4__this) == 0LL)
    || !Instance
    || (Instance = (CommonUI_o *)UnityEngine_Transform__GetChild(
                                   (UnityEngine_Transform_o *)Instance,
                                   v23->fields.distanceToEfPanelObj,
                                   0LL)) == 0LL
    || (Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        (v24 = this->fields.__4__this) == 0LL) )
  {
LABEL_30:
    sub_1B8880C(Instance, v6);
  }
  endEffectTime = v24->fields.endEffectTime;
  v26 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)v24, Method_CompleteMissionListViewManager_animAfterCallback__, 0LL);
  ListViewManager__DelayCallMethod((ListViewManager_o *)v24, endEffectTime, v26, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass68_0___ctor(
        CompleteMissionListViewManager___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CompleteMissionListViewManager___c__DisplayClass68_0___CehckQpMaxAlert_b__0(
        CompleteMissionListViewManager___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *decideCallback; // x8

  decideCallback = this->fields.decideCallback;
  if ( !decideCallback )
    sub_1B8880C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))decideCallback->fields.m_target)(
    decideCallback->fields.original_method_info,
    *(_QWORD *)&decideCallback->fields.extra_arg);
}