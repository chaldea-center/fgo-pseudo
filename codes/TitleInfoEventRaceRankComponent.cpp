void __fastcall TitleInfoEventRaceRankComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TitleInfoEventRaceRankComponent_StaticFields *static_fields; // x8
  struct TitleInfoEventRaceRankComponent_StaticFields *v3; // x8

  if ( (byte_49FA505 & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoEventRaceRankComponent_TypeInfo, v1);
    byte_49FA505 = 1;
  }
  static_fields = TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.x = 0x42A0000000000000LL;
  static_fields->RAIDBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v3 = TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  v3->ANIM_DURATION_FRAME_IN = 0.3;
  v3->DISP_RACE_SEC_TIME = 600LL;
}


void __fastcall TitleInfoEventRaceRankComponent___ctor(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventRaceRankComponent__Destroy(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventRaceRankComponent__FrameIn(
        TitleInfoEventRaceRankComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventRaceRankComponent_c *v8; // x8
  UnityEngine_GameObject_o *v9; // x21
  Il2CppObject *v10; // x0
  float32x2_t *static_fields; // x8
  Il2CppObject *v12; // x21
  float v13; // s0
  void *v14; // x9
  UnityEngine_GameObject_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_49FA503 & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoEventRaceRankComponent_TypeInfo, callback);
    sub_1B640C8(&Method_UITweener_Begin_TweenPosition___, v5);
    sub_1B640C8(&StringLiteral_6799/*"FrameInFinish"*/, v6);
    byte_49FA503 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = TitleInfoEventRaceRankComponent_TypeInfo;
  v9 = gameObject;
  if ( !TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo);
    v8 = TitleInfoEventRaceRankComponent_TypeInfo;
  }
  v10 = UITweener__Begin_object_(
          v9,
          v8->static_fields->ANIM_DURATION_FRAME_IN,
          (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenPosition___);
  if ( !v10 )
    sub_1B64324(0LL);
  static_fields = (float32x2_t *)TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  v12 = v10;
  v13 = this->fields.originPos.fields.z + static_fields[1].n64_f32[0];
  v10[8].klass = (Il2CppClass *)vadd_f32(
                                  *(float32x2_t *)&this->fields.originPos.fields.x,
                                  (float32x2_t)static_fields->n64_u64[0]).n64_u64[0];
  *(float *)&v10[8].monitor = v13;
  v14 = *(void **)&this->fields.originPos.fields.x;
  HIDWORD(v10[9].klass) = LODWORD(this->fields.originPos.fields.z);
  *(void **)((char *)&v10[8].monitor + 4) = v14;
  LODWORD(v10[2].klass) = 2;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12[5].klass = (Il2CppClass *)v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v12[5], (int32_t)v15, v16, v17);
  v18 = StringLiteral_6799/*"FrameInFinish"*/;
  v12[5].monitor = (void *)StringLiteral_6799/*"FrameInFinish"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v12[5].monitor, v18, v19, v20);
  this->fields.frameInCallBack = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.frameInCallBack, (int32_t)callback, v21, v22);
}


void __fastcall TitleInfoEventRaceRankComponent__FrameInFinish(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_frameInCallBack; // x0
  System_Action_o *v5; // x19
  struct System_Action_o *frameInCallBack; // t1

  frameInCallBack = this->fields.frameInCallBack;
  p_frameInCallBack = (ServantStatusBattleListViewItem_o *)&this->fields.frameInCallBack;
  v5 = frameInCallBack;
  p_frameInCallBack->klass = 0LL;
  sub_1B6406C(p_frameInCallBack, 0, v2, v3);
  if ( frameInCallBack )
    ActionExtensions__Call(v5, 0LL);
}


void __fastcall TitleInfoEventRaceRankComponent__FrameOut(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventRaceRankComponent_c *v6; // x8
  UnityEngine_GameObject_o *v7; // x20
  Il2CppObject *v8; // x0
  Il2CppObject *v9; // x20
  float32x2_t *static_fields; // x8
  float v11; // s1
  UnityEngine_GameObject_o *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppClass *v18; // [xsp+0h] [xbp-40h]

  if ( (byte_49FA504 & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoEventRaceRankComponent_TypeInfo, method);
    sub_1B640C8(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_1B640C8(&StringLiteral_6801/*"FrameOutFinish"*/, v4);
    byte_49FA504 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = TitleInfoEventRaceRankComponent_TypeInfo;
  v7 = gameObject;
  if ( !TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo);
    v6 = TitleInfoEventRaceRankComponent_TypeInfo;
  }
  v8 = UITweener__Begin_object_(
         v7,
         v6->static_fields->ANIM_DURATION_FRAME_IN,
         (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenPosition___);
  v18 = *(Il2CppClass **)&this->fields.originPos.fields.x;
  if ( !v8 )
    sub_1B64324(0LL);
  v9 = v8;
  *(float *)&v8[8].monitor = this->fields.originPos.fields.z;
  v8[8].klass = v18;
  static_fields = (float32x2_t *)TitleInfoEventRaceRankComponent_TypeInfo->static_fields;
  v11 = this->fields.originPos.fields.z + static_fields[1].n64_f32[0];
  *(float32x2_t *)((char *)&v8[8].monitor + 4) = vadd_f32(
                                                   *(float32x2_t *)&this->fields.originPos.fields.x,
                                                   (float32x2_t)static_fields->n64_u64[0]);
  *((float *)&v8[9].klass + 1) = v11;
  LODWORD(v8[2].klass) = 2;
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v9[5].klass = (Il2CppClass *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v9[5], (int32_t)v12, v13, v14);
  v15 = StringLiteral_6801/*"FrameOutFinish"*/;
  v9[5].monitor = (void *)StringLiteral_6801/*"FrameOutFinish"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v9[5].monitor, v15, v16, v17);
}


void __fastcall TitleInfoEventRaceRankComponent__FrameOutFinish(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall TitleInfoEventRaceRankComponent__IsDispPossible(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall TitleInfoEventRaceRankComponent__IsEventRaidBoss(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall TitleInfoEventRaceRankComponent__OnDestroy(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaceRankComponent__Setup(
        TitleInfoEventRaceRankComponent_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x23
  int64_t v34; // x21
  int64_t RaceStartedAt; // x0
  int64_t v36; // x23
  TitleInfoEventRaceRankComponent_c *v37; // x0
  _BOOL4 v38; // w29
  QuestGroupMaster_o *v39; // x21
  System_Int32_array *QuestIdListByEventId; // x23
  __int64 v41; // x1
  __int64 v42; // x2
  System_Collections_Generic_List_int__o *v43; // x20
  __int64 v44; // x1
  __int64 v45; // x8
  unsigned __int64 v46; // x25
  int32_t *v47; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  int v51; // w8
  _BOOL4 v52; // w26
  int32_t i; // w21
  int32_t Item; // w23
  int32_t v55; // w8
  System_Collections_Generic_List_EventRaceMaster_GroupRankData__o *GroupIdData; // x20
  __int64 v57; // x1
  __int64 v58; // x2
  System_Collections_Generic_List_bool__o *v59; // x21
  int32_t v60; // w23
  int32_t v61; // w24
  int32_t v62; // w25
  struct System_Boolean_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  struct UISprite_array *carIcon; // x8
  int v67; // w28
  __int64 v68; // x26
  int max_length; // w9
  unsigned int v70; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *v72; // x8
  struct UISprite_array *v73; // x8
  UISprite_o *v74; // x23
  System_String_o *v75; // x0
  System_String_o *v76; // x24
  bool v77; // w23
  struct UISprite_array *v78; // x8
  UnityEngine_GameObject_o *v79; // x0
  System_String_o *v80; // x0
  System_String_o *v81; // x24
  struct UISprite_array *v82; // x8
  struct UISprite_array *carBackSpr; // x8
  __int64 v84; // x24
  unsigned __int64 v85; // x9
  unsigned __int64 v86; // x26
  UISprite_o *v87; // x22
  System_String_o *v88; // x0
  System_String_o *v89; // x23
  struct UISprite_array *v90; // x8
  struct UISprite_array *rankSpr; // x8
  unsigned __int64 v92; // x24
  unsigned __int64 v93; // x9
  UISprite_o *v94; // x22
  System_String_o *v95; // x23
  System_String_o *v96; // x0
  System_String_o *v97; // x23
  struct UISprite_array *goalIcon; // x8
  int32_t v99; // w22
  il2cpp_array_size_t v100; // w9
  UISprite_o *v101; // x23
  System_String_o *v102; // x0
  System_String_o *v103; // x24
  struct UISprite_array *v104; // x8
  UnityEngine_Behaviour_o *v105; // x23
  int v106; // w8
  bool isGoal; // w1
  UnityEngine_GameObject_o *v108; // x0
  UnityEngine_GameObject_o *v109; // x0
  int v110; // [xsp+Ch] [xbp-A4h]
  EventRaceMaster_GroupRankData_o groupId; // [xsp+10h] [xbp-A0h] BYREF
  int v112; // [xsp+2Ch] [xbp-84h] BYREF
  EventRaceMaster_GroupRankData_o v113; // [xsp+30h] [xbp-80h] BYREF
  int32_t eventIda; // [xsp+4Ch] [xbp-64h] BYREF

  eventIda = eventId;
  if ( (byte_49FA502 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&CondType_TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventRaceMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v11);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_bool__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_bool___ctor__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Count__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_bool__get_Item__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v21);
    sub_1B640C8(&System_Collections_Generic_List_bool__TypeInfo, v22);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v23);
    sub_1B640C8(&NetworkManager_TypeInfo, v24);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B640C8(&TitleInfoEventRaceRankComponent_TypeInfo, v26);
    sub_1B640C8(&StringLiteral_22658/*"race_status_goal_"*/, v27);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v28);
    sub_1B640C8(&StringLiteral_22659/*"race_status_rank_"*/, v29);
    sub_1B640C8(&StringLiteral_22657/*"race_status_"*/, v30);
    sub_1B640C8(&StringLiteral_1223/*"000"*/, v31);
    byte_49FA502 = 1;
  }
  memset(&v113, 0, sizeof(v113));
  v112 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_120;
  DataMasterBase_object__object__int___GetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    eventId,
    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !MasterData_object )
    goto LABEL_120;
  v34 = Instance;
  RaceStartedAt = EventRaceResultMaster__getRaceStartedAt(
                    (EventRaceResultMaster_o *)MasterData_object,
                    eventId,
                    termId,
                    0LL);
  if ( RaceStartedAt )
  {
    v36 = RaceStartedAt;
    v37 = TitleInfoEventRaceRankComponent_TypeInfo;
    if ( !TitleInfoEventRaceRankComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaceRankComponent_TypeInfo);
      v37 = TitleInfoEventRaceRankComponent_TypeInfo;
    }
    v38 = v34 - v36 > v37->static_fields->DISP_RACE_SEC_TIME;
  }
  else
  {
    v38 = 0;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_120;
  v39 = (QuestGroupMaster_o *)Instance;
  QuestIdListByEventId = QuestGroupMaster__GetQuestIdListByEventId((QuestGroupMaster_o *)Instance, eventId, 0LL);
  v43 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v41, v42);
  System_Collections_Generic_List_int____ctor(
    v43,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !QuestIdListByEventId )
    goto LABEL_120;
  v45 = *(_QWORD *)&QuestIdListByEventId->max_length;
  if ( (int)v45 >= 1 )
  {
    v46 = 0LL;
    v47 = &QuestIdListByEventId->m_Items[1];
    do
    {
      if ( v46 >= (unsigned int)v45 )
LABEL_122:
        sub_1B6432C(Instance, v44);
      Instance = QuestGroupMaster__GetGroupId(v39, v47[v46], 5, 0LL);
      if ( (_DWORD)Instance == termId )
      {
        if ( v46 >= QuestIdListByEventId->max_length )
          goto LABEL_122;
        if ( !v43 )
          goto LABEL_120;
        v44 = (unsigned int)v47[v46];
        items = v43->fields._items;
        v49 = Method_System_Collections_Generic_List_int__Add__;
        ++v43->fields._version;
        if ( !items )
          goto LABEL_120;
        size = v43->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v43,
            v44,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v43->fields._size = size + 1;
          items->m_Items[size + 1] = v44;
        }
      }
      LODWORD(v45) = QuestIdListByEventId->max_length;
    }
    while ( (__int64)++v46 < (int)v45 );
  }
  if ( !v43 )
    goto LABEL_120;
  v51 = v43->fields._size;
  v52 = v51 > 0;
  if ( v51 >= 1 )
  {
    for ( i = 0; i < v55; v52 = i < v55 )
    {
      Item = System_Collections_Generic_List_int___get_Item(
               v43,
               i,
               (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(1, Item, 0LL, 0, 0LL) )
        break;
      v55 = v43->fields._size;
      ++i;
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventRaceMaster___)) == 0
    || (GroupIdData = EventRaceMaster__getGroupIdData((EventRaceMaster_o *)Instance, eventIda, termId, 0LL),
        v59 = (System_Collections_Generic_List_bool__o *)sub_1B64314(
                                                           System_Collections_Generic_List_bool__TypeInfo,
                                                           v57,
                                                           v58),
        System_Collections_Generic_List_bool____ctor(
          v59,
          (const MethodInfo_3462AEC *)Method_System_Collections_Generic_List_bool___ctor__),
        !GroupIdData) )
  {
LABEL_120:
    sub_1B64324(Instance);
  }
  if ( GroupIdData->fields._size >= 1 )
  {
    v60 = 0;
    do
    {
      v61 = eventIda;
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
        &groupId,
        GroupIdData,
        v60,
        (const MethodInfo_35265E4 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
      v62 = groupId.fields.groupId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = CondType__IsEventRaceGoalScriptPlayed(v61, termId, v62, 0LL);
      if ( !v59 )
        goto LABEL_120;
      v63 = v59->fields._items;
      v64 = Method_System_Collections_Generic_List_bool__Add__;
      ++v59->fields._version;
      if ( !v63 )
        goto LABEL_120;
      v65 = v59->fields._size;
      if ( (unsigned int)v65 >= v63->max_length )
      {
        System_Collections_Generic_List_bool___AddWithResize(
          v59,
          Instance & 1,
          *(const MethodInfo_3463350 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
      }
      else
      {
        v59->fields._size = v65 + 1;
        v63->m_Items[v65 + 4] = Instance & 1;
      }
    }
    while ( ++v60 < GroupIdData->fields._size );
  }
  carIcon = this->fields.carIcon;
  if ( !carIcon )
    goto LABEL_120;
  v67 = v38 && v52;
  v68 = 4LL;
  v110 = v67;
  while ( 1 )
  {
    max_length = carIcon->max_length;
    v70 = v68 - 4;
    if ( (int)v68 - 4 >= max_length )
      break;
    if ( v70 >= max_length )
      goto LABEL_122;
    Instance = *((_QWORD *)&carIcon->obj.klass + v68);
    if ( !Instance )
      goto LABEL_120;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    GameObjectExtensions__SetLocalPosition(gameObject, this->fields.startPos, 0LL);
    v72 = this->fields.carIcon;
    if ( !v72 )
      goto LABEL_120;
    if ( v70 >= v72->max_length )
      goto LABEL_122;
    Instance = *((_QWORD *)&v72->obj.klass + v68);
    if ( !Instance )
      goto LABEL_120;
    if ( (v67 & 1) == 0 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
      goto LABEL_80;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    v73 = this->fields.carIcon;
    if ( !v73 )
      goto LABEL_120;
    if ( v70 >= v73->max_length )
      goto LABEL_122;
    v74 = (UISprite_o *)*((_QWORD *)&v73->obj.klass + v68);
    if ( GroupIdData->fields._size <= (signed int)v70 )
    {
      v80 = System_Int32__ToString((int32_t)&eventIda, 0LL);
      v81 = System_String__Concat_61386656(
              (System_String_o *)StringLiteral_22657/*"race_status_"*/,
              v80,
              (System_String_o *)StringLiteral_1223/*"000"*/,
              0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Instance = AtlasManager__SetEventUI(v74, v81, 0LL);
      if ( (Instance & 1) != 0 )
        goto LABEL_80;
    }
    else
    {
      System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
        &groupId,
        GroupIdData,
        v70,
        (const MethodInfo_35265E4 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
      v113 = groupId;
      v75 = System_Int32__ToString((int32_t)&v113, 0LL);
      v76 = System_String__Concat_61375396((System_String_o *)StringLiteral_22657/*"race_status_"*/, v75, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v77 = AtlasManager__SetEventUI(v74, v76, 0LL);
      Instance = (int64_t)System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
                            &groupId,
                            GroupIdData,
                            v70,
                            (const MethodInfo_35265E4 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
      v67 = v110;
      if ( !groupId.fields.isGoal )
        goto LABEL_75;
      if ( !v59 )
        goto LABEL_120;
      Instance = System_Collections_Generic_List_bool___get_Item(
                   v59,
                   v70,
                   (const MethodInfo_3463050 *)Method_System_Collections_Generic_List_bool__get_Item__);
      if ( (Instance & 1) != 0 )
      {
        v78 = this->fields.carIcon;
        if ( !v78 )
          goto LABEL_120;
        if ( v70 >= v78->max_length )
          goto LABEL_122;
        Instance = *((_QWORD *)&v78->obj.klass + v68);
        if ( !Instance )
          goto LABEL_120;
        v79 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        GameObjectExtensions__SetLocalPosition(v79, this->fields.goalPos, 0LL);
        if ( v77 )
          goto LABEL_80;
      }
      else
      {
LABEL_75:
        if ( v77 )
          goto LABEL_80;
      }
    }
    v82 = this->fields.carIcon;
    if ( !v82 )
      goto LABEL_120;
    if ( v70 >= v82->max_length )
      goto LABEL_122;
    Instance = *((_QWORD *)&v82->obj.klass + v68);
    if ( !Instance )
      goto LABEL_120;
    UISprite__set_atlas((UISprite_o *)Instance, 0LL, 0LL);
LABEL_80:
    carIcon = this->fields.carIcon;
    ++v68;
    if ( !carIcon )
      goto LABEL_120;
  }
  carBackSpr = this->fields.carBackSpr;
  if ( !carBackSpr )
    goto LABEL_120;
  v84 = 4LL;
  while ( 1 )
  {
    v85 = carBackSpr->max_length;
    v86 = v84 - 4;
    if ( v84 - 4 >= (int)v85 )
      break;
    if ( v86 >= v85 )
      goto LABEL_122;
    v87 = (UISprite_o *)*((_QWORD *)&carBackSpr->obj.klass + v84);
    v88 = System_Int32__ToString((int32_t)&eventIda, 0LL);
    v89 = System_String__Concat_61386656(
            (System_String_o *)StringLiteral_22657/*"race_status_"*/,
            v88,
            (System_String_o *)StringLiteral_1223/*"000"*/,
            0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(v87, v89, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v90 = this->fields.carBackSpr;
      if ( !v90 )
        goto LABEL_120;
      if ( v86 >= v90->max_length )
        goto LABEL_122;
      Instance = *((_QWORD *)&v90->obj.klass + v84);
      if ( !Instance )
        goto LABEL_120;
      UISprite__set_atlas((UISprite_o *)Instance, 0LL, 0LL);
    }
    carBackSpr = this->fields.carBackSpr;
    ++v84;
    if ( !carBackSpr )
      goto LABEL_120;
  }
  rankSpr = this->fields.rankSpr;
  if ( !rankSpr )
    goto LABEL_120;
  v92 = 0LL;
  while ( 1 )
  {
    v93 = rankSpr->max_length;
    if ( (__int64)v92 >= (int)v93 )
      break;
    v112 = v92 + 1;
    if ( v92 >= v93 )
      goto LABEL_122;
    v94 = rankSpr->m_Items[v92];
    v95 = System_Int32__ToString((int32_t)&eventIda, 0LL);
    v96 = System_Int32__ToString((int32_t)&v112, 0LL);
    v97 = System_String__Concat_61388660(
            (System_String_o *)StringLiteral_22659/*"race_status_rank_"*/,
            v95,
            (System_String_o *)StringLiteral_16054/*"_"*/,
            v96,
            0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(v94, v97, 0LL);
    rankSpr = this->fields.rankSpr;
    ++v92;
    if ( !rankSpr )
      goto LABEL_120;
  }
  goalIcon = this->fields.goalIcon;
  if ( !goalIcon )
    goto LABEL_120;
  v99 = 0;
  while ( 1 )
  {
    v100 = goalIcon->max_length;
    if ( v99 >= (int)v100 )
      break;
    if ( v99 >= v100 )
      goto LABEL_122;
    v101 = goalIcon->m_Items[v99];
    v102 = System_Int32__ToString((int32_t)&eventIda, 0LL);
    v103 = System_String__Concat_61375396((System_String_o *)StringLiteral_22658/*"race_status_goal_"*/, v102, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(v101, v103, 0LL);
    v104 = this->fields.goalIcon;
    if ( v104 )
    {
      if ( v99 >= v104->max_length )
        goto LABEL_122;
      v105 = (UnityEngine_Behaviour_o *)v104->m_Items[v99];
      if ( GroupIdData->fields._size <= v99 )
      {
        v106 = 0;
      }
      else
      {
        if ( !v59 )
          goto LABEL_120;
        Instance = System_Collections_Generic_List_bool___get_Item(
                     v59,
                     v99,
                     (const MethodInfo_3463050 *)Method_System_Collections_Generic_List_bool__get_Item__);
        v106 = Instance & 1;
      }
      if ( (v106 & v67) != 0 )
      {
        Instance = (int64_t)System_Collections_Generic_List_EventRaceMaster_GroupRankData___get_Item(
                              &groupId,
                              GroupIdData,
                              v99,
                              (const MethodInfo_35265E4 *)Method_System_Collections_Generic_List_EventRaceMaster_GroupRankData__get_Item__);
        isGoal = groupId.fields.isGoal;
        if ( !v105 )
          goto LABEL_120;
      }
      else
      {
        isGoal = 0;
        if ( !v105 )
          goto LABEL_120;
      }
      UnityEngine_Behaviour__set_enabled(v105, isGoal, 0LL);
      goalIcon = this->fields.goalIcon;
      ++v99;
      if ( goalIcon )
        continue;
    }
    goto LABEL_120;
  }
  v108 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v108, 0.0, 0LL);
  v109 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this->fields.originPos = GameObjectExtensions__GetLocalPosition(v109, 0LL);
}


void __fastcall TitleInfoEventRaceRankComponent__UpdateDisp(
        TitleInfoEventRaceRankComponent_o *this,
        const MethodInfo *method)
{
  ;
}