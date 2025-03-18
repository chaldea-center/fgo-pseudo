void __fastcall MissionNaviTransitionConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t v11; // x1
  struct MissionNaviTransitionConfirmDialog_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  struct MissionNaviTransitionConfirmDialog_StaticFields *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4C25BF8 & 1) == 0 )
  {
    sub_1C3B764(&MissionNaviTransitionConfirmDialog_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_8847/*"Microsoft.FSharp.Reflection.FSharpValue"*/, v8);
    sub_1C3B764(&StringLiteral_8846/*"Microsoft.FSharp.Reflection.FSharpType"*/, v9);
    sub_1C3B764(&StringLiteral_8844/*"Microsoft.FSharp.Collections.ListModule"*/, v10);
    byte_4C25BF8 = 1;
  }
  MissionNaviTransitionConfirmDialog_TypeInfo->static_fields->MISSION_NAVI_NAME_COMMON = (struct System_String_o *)StringLiteral_8846/*"Microsoft.FSharp.Reflection.FSharpType"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)MissionNaviTransitionConfirmDialog_TypeInfo->static_fields,
    StringLiteral_8846/*"Microsoft.FSharp.Reflection.FSharpType"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = StringLiteral_8847/*"Microsoft.FSharp.Reflection.FSharpValue"*/;
  static_fields = MissionNaviTransitionConfirmDialog_TypeInfo->static_fields;
  static_fields->MISSION_NAVI_NOT_OPEN_BOARD = (struct System_String_o *)StringLiteral_8847/*"Microsoft.FSharp.Reflection.FSharpValue"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->MISSION_NAVI_NOT_OPEN_BOARD,
    v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = StringLiteral_8844/*"Microsoft.FSharp.Collections.ListModule"*/;
  v20 = MissionNaviTransitionConfirmDialog_TypeInfo->static_fields;
  v20->MISSION_NAVI_MAIN_QUEST = (struct System_String_o *)StringLiteral_8844/*"Microsoft.FSharp.Collections.ListModule"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v20->MISSION_NAVI_MAIN_QUEST, v19, v21, v22, v23, v24, v25, v26);
}


void __fastcall MissionNaviTransitionConfirmDialog___ctor(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C25BF7 & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C25BF7 = 1;
  }
  *(_OWORD *)&this->fields.messageTopOffset = xmmword_C0CFE0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MissionNaviTransitionConfirmDialog__Awake(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall MissionNaviTransitionConfirmDialog__CheckSerializeFieldAssertion(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MissionNaviTransitionConfirmDialog__DeleteCallback(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__o *boardItemDrawList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C25BF6 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__Dispose__,
      method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__MoveNext__, v3);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__get_Current__,
      v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__GetEnumerator__, v5);
    byte_4C25BF6 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  boardItemDrawList = this->fields.boardItemDrawList;
  if ( boardItemDrawList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      (System_Collections_Generic_List_object__o *)boardItemDrawList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v8,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__MoveNext__) )
    {
      if ( !v8.fields._current )
        sub_1C3B9C0(0LL, v7);
      MissionNaviTransitionBoardItemDraw__DeleteCallback((MissionNaviTransitionBoardItemDraw_o *)v8.fields._current, v7);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__Dispose__);
  }
}


void __fastcall MissionNaviTransitionConfirmDialog__EndOpen(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


System_String_o *__fastcall MissionNaviTransitionConfirmDialog__GetClosedMessageText(
        int32_t closedMessageId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  System_String_o **p_monitor; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C25BF3 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_ClosedMessageMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v3);
    sub_1C3B764(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v4);
    sub_1C3B764(&StringLiteral_1/*""*/, v5);
    byte_4C25BF3 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  if ( !closedMessageId )
    goto LABEL_10;
  if ( !Master_object )
    goto LABEL_12;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    closedMessageId,
                                    (const MethodInfo_329AE94 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
LABEL_10:
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
    return *p_monitor;
  }
  if ( !entity )
LABEL_12:
    sub_1C3B9C0(Master_object, v7);
  p_monitor = (System_String_o **)&entity[1].monitor;
  return *p_monitor;
}


System_String_o *__fastcall MissionNaviTransitionConfirmDialog__GetQuestClosedMessageText(
        MapControl_QuestInfo_o *questInfo,
        QuestEntity_o *questEnt,
        const MethodInfo *method)
{
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
  System_String_o *monitor; // x20
  __int64 Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *PrioredName; // x0
  System_String_o *v25; // x0
  int32_t WarID_ByQuestID; // w21
  int64_t OpenedAt; // x21
  System_Object_array *v28; // x21
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x22
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x22
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x22
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x22
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v70; // x19
  __int64 v72; // x0
  int32_t Minute; // [xsp+Ch] [xbp-64h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-60h] BYREF
  int32_t Day; // [xsp+14h] [xbp-5Ch] BYREF
  int64_t questReleaseValue; // [xsp+18h] [xbp-58h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-50h] BYREF
  Il2CppObject *v78; // [xsp+28h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-38h] BYREF
  System_DateTime_o v80; // 0:x0.8
  System_DateTime_o v81; // 0:x0.8
  System_DateTime_o v82; // 0:x0.8
  System_DateTime_o v83; // 0:x0.8

  if ( (byte_4C25BF4 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ClosedMessageMaster___, questEnt);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMaster_WarMaster___, v6);
    sub_1C3B764(&DataManager_TypeInfo, v7);
    sub_1C3B764(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v8);
    sub_1C3B764(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v9);
    sub_1C3B764(&System_DateTime_TypeInfo, v10);
    sub_1C3B764(&int_TypeInfo, v11);
    sub_1C3B764(&long_TypeInfo, v12);
    sub_1C3B764(&NetworkManager_TypeInfo, v13);
    sub_1C3B764(&object___TypeInfo, v14);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v16);
    sub_1C3B764(&StringLiteral_1/*""*/, v17);
    byte_4C25BF4 = 1;
  }
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  entity = 0LL;
  dateData = 0LL;
  v78 = 0LL;
  if ( questInfo && questInfo->fields.questReleaseClosedID >= 1 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
      if ( Instance )
      {
        monitor = (System_String_o *)StringLiteral_1/*""*/;
        Instance = DataMasterBase_object__object__int___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     &entity,
                     questInfo->fields.questReleaseClosedID,
                     (const MethodInfo_329AE94 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
        if ( (Instance & 1) == 0 )
          goto LABEL_10;
        if ( entity )
        {
          monitor = (System_String_o *)entity[1].monitor;
LABEL_10:
          switch ( questInfo->fields.questReleaseType )
          {
            case 1:
              Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( !Instance )
                goto LABEL_47;
              WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(
                                  (QuestTree_o *)Instance,
                                  questInfo->fields.questReleaseTargetID,
                                  0LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_WarMaster___);
              if ( !Instance )
                goto LABEL_47;
              if ( !DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                      &v78,
                      WarID_ByQuestID,
                      (const MethodInfo_329AE94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
                goto LABEL_40;
              Instance = (__int64)v78;
              if ( !v78 )
                goto LABEL_47;
              PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v78, 0LL);
LABEL_12:
              v25 = System_String__Format(monitor, PrioredName, 0LL);
              goto LABEL_39;
            case 6:
            case 7:
            case 9:
              questReleaseValue = questInfo->fields.questReleaseValue;
              PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &questReleaseValue, v21, v22, v23);
              goto LABEL_12;
            case 0xC:
              if ( !questEnt )
                goto LABEL_47;
              OpenedAt = QuestEntity__getOpenedAt(questEnt, 0LL);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              dateData = NetworkManager__getServerDateTime_39987360(OpenedAt, 0LL).fields._dateData;
              v28 = (System_Object_array *)sub_1C3B80C(object___TypeInfo, 4LL);
              if ( !System_DateTime_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
              v80.fields._dateData = (uint64_t)&dateData;
              LODWORD(questReleaseValue) = System_DateTime__get_Month(v80, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &questReleaseValue, v29, v30, v31);
              if ( !v28 )
                goto LABEL_47;
              v38 = Instance;
              if ( Instance )
              {
                Instance = sub_1C3B8A0(Instance, v28->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( !v28->max_length )
                goto LABEL_48;
              v28->m_Items[0] = (Il2CppObject *)v38;
              sub_1C3B708((PartyOrganizationUtility_o *)v28->m_Items, v38, v32, v33, v34, v35, v36, v37);
              v81.fields._dateData = (uint64_t)&dateData;
              Day = System_DateTime__get_Day(v81, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Day, v39, v40, v41);
              v48 = Instance;
              if ( Instance )
              {
                Instance = sub_1C3B8A0(Instance, v28->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( v28->max_length <= 1 )
                goto LABEL_48;
              v28->m_Items[1] = (Il2CppObject *)v48;
              sub_1C3B708((PartyOrganizationUtility_o *)&v28->m_Items[1], v48, v42, v43, v44, v45, v46, v47);
              v82.fields._dateData = (uint64_t)&dateData;
              Hour = System_DateTime__get_Hour(v82, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v49, v50, v51);
              v58 = Instance;
              if ( Instance )
              {
                Instance = sub_1C3B8A0(Instance, v28->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( v28->max_length <= 2 )
                goto LABEL_48;
              v28->m_Items[2] = (Il2CppObject *)v58;
              sub_1C3B708((PartyOrganizationUtility_o *)&v28->m_Items[2], v58, v52, v53, v54, v55, v56, v57);
              v83.fields._dateData = (uint64_t)&dateData;
              Minute = System_DateTime__get_Minute(v83, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v59, v60, v61);
              v68 = Instance;
              if ( Instance )
              {
                Instance = sub_1C3B8A0(Instance, v28->obj.klass->_1.element_class);
                if ( !Instance )
                {
LABEL_49:
                  v72 = sub_1C3B9E4(Instance);
                  sub_1C3B88C(v72, 0LL);
                }
              }
              if ( v28->max_length <= 3 )
LABEL_48:
                sub_1C3B9C8(Instance, v20);
              v28->m_Items[3] = (Il2CppObject *)v68;
              sub_1C3B708((PartyOrganizationUtility_o *)&v28->m_Items[3], v68, v62, v63, v64, v65, v66, v67);
              v25 = System_String__Format_63383120(monitor, v28, 0LL);
LABEL_39:
              monitor = v25;
LABEL_40:
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_47;
              Instance = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
              if ( !questEnt || !Instance )
                goto LABEL_47;
              EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                         (QuestReleaseOverwriteMaster_o *)Instance,
                                         questEnt->fields.id,
                                         0LL,
                                         0LL);
              if ( EntityByQuestIdAndTime )
              {
                v70 = EntityByQuestIdAndTime;
                if ( !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0LL) )
                  monitor = v70->fields.overlayClosedMessage;
              }
              break;
            default:
              goto LABEL_40;
          }
          return monitor;
        }
      }
    }
LABEL_47:
    sub_1C3B9C0(Instance, v20);
  }
  return monitor;
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_string__string__o __fastcall MissionNaviTransitionConfirmDialog__GetQuestNaviNameAndClosedMessage(
        MissionNaviQuestEntity_o *naviQuestEntity,
        MapControl_QuestInfo_o *tempQuestInfo,
        bool isLocked,
        const MethodInfo *method)
{
  MissionNaviQuestEntity_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t closedMessageId; // w21
  MissionNaviTransitionConfirmDialog_c *v17; // x0
  System_String_o *MISSION_NAVI_NOT_OPEN_BOARD; // x20
  Il2CppObject *v19; // x20
  System_String_o *QuestClosedMessageText; // x0
  const MethodInfo_39E2C94 *v21; // x4
  Il2CppObject *v22; // x20
  Il2CppObject *v23; // x21
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  QuestEntity_o *Mine; // x0
  const MethodInfo *v27; // x2
  Il2CppObject *v28; // x2
  int32_t QuestType; // w19
  __int64 *v30; // x8
  System_String_o *v31; // x0
  struct System_String_o *v32; // x0 OVERLAPPED
  struct System_String_o *v33; // x1
  struct System_String_o *v34; // [xsp+0h] [xbp-40h] BYREF
  struct System_String_o *v35; // [xsp+8h] [xbp-38h]
  System_String_o *challengeNaviName; // [xsp+18h] [xbp-28h] BYREF
  System_ValueTuple_object__object__o v37; // 0:x0.16
  System_ValueTuple_string__string__o result; // 0:x0.16

  v6 = naviQuestEntity;
  if ( (byte_4C25BF0 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, tempQuestInfo);
    sub_1C3B764(&MissionNaviTransitionConfirmDialog_TypeInfo, v7);
    sub_1C3B764(&Method_System_ValueTuple_string__string___ctor__, v8);
    sub_1C3B764(&StringLiteral_43/*"\n"*/, v9);
    sub_1C3B764(&StringLiteral_117/*"   "*/, v10);
    sub_1C3B764(&StringLiteral_8842/*"Microsoft.CSharp.RuntimeBinder.CSharpBinderFlags, Microsoft.CSharp, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a"*/, v11);
    sub_1C3B764(&StringLiteral_897/*"--MM--Z"*/, v12);
    sub_1C3B764(&StringLiteral_8850/*"MidpointRounding"*/, v13);
    sub_1C3B764(&StringLiteral_1/*""*/, v14);
    naviQuestEntity = (MissionNaviQuestEntity_o *)sub_1C3B764(&StringLiteral_8849/*"MidnightBlue"*/, v15);
    byte_4C25BF0 = 1;
  }
  challengeNaviName = 0LL;
  if ( !v6 )
    goto LABEL_36;
  if ( !isLocked )
  {
    naviQuestEntity = (MissionNaviQuestEntity_o *)MissionNaviQuestEntity__TryGetChallengeNaviName(
                                                    v6,
                                                    &challengeNaviName,
                                                    0LL);
    if ( ((unsigned __int8)naviQuestEntity & 1) != 0 )
    {
      v19 = (Il2CppObject *)challengeNaviName;
    }
    else
    {
      if ( !tempQuestInfo )
        goto LABEL_36;
      naviQuestEntity = (MissionNaviQuestEntity_o *)tempQuestInfo->fields._WarInfo_k__BackingField;
      if ( !naviQuestEntity )
        goto LABEL_36;
      naviQuestEntity = (MissionNaviQuestEntity_o *)MapControl_WarInfo__GetMine(
                                                      (MapControl_WarInfo_o *)naviQuestEntity,
                                                      0LL);
      if ( !naviQuestEntity )
        goto LABEL_36;
      naviQuestEntity = (MissionNaviQuestEntity_o *)WarEntity__GetPrioredLongName((WarEntity_o *)naviQuestEntity, 0LL);
      if ( !naviQuestEntity )
        goto LABEL_36;
      v22 = (Il2CppObject *)System_String__Replace_63388240(
                              (System_String_o *)naviQuestEntity,
                              (System_String_o *)StringLiteral_43/*"\n"*/,
                              (System_String_o *)StringLiteral_117/*"   "*/,
                              0LL);
      naviQuestEntity = (MissionNaviQuestEntity_o *)MapControl_QuestInfo__GetMine(tempQuestInfo, 0LL);
      if ( !naviQuestEntity )
        goto LABEL_36;
      naviQuestEntity = *(MissionNaviQuestEntity_o **)&naviQuestEntity->fields.priority;
      if ( !naviQuestEntity )
        goto LABEL_36;
      v23 = (Il2CppObject *)System_String__Replace_63388240(
                              (System_String_o *)naviQuestEntity,
                              (System_String_o *)StringLiteral_43/*"\n"*/,
                              (System_String_o *)StringLiteral_117/*"   "*/,
                              0LL);
      if ( System_String__op_Equality((System_String_o *)v22, (System_String_o *)StringLiteral_897/*"--MM--Z"*/, 0LL)
        || System_String__IsNullOrEmpty((System_String_o *)v22, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_8849/*"MidnightBlue"*/, 0LL);
        v25 = System_String__Format(v24, v23, 0LL);
      }
      else
      {
        QuestType = MapControl_QuestInfo__GetQuestType(tempQuestInfo, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( QuestType == 2 )
          v30 = &StringLiteral_8842/*"Microsoft.CSharp.RuntimeBinder.CSharpBinderFlags, Microsoft.CSharp, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a"*/;
        else
          v30 = &StringLiteral_8850/*"MidpointRounding"*/;
        v31 = LocalizationManager__Get((System_String_o *)*v30, 0LL);
        v25 = System_String__Format_63382984(v31, v22, v23, 0LL);
      }
      v19 = (Il2CppObject *)v25;
      challengeNaviName = v25;
    }
    v28 = (Il2CppObject *)StringLiteral_1/*""*/;
    goto LABEL_35;
  }
  closedMessageId = v6->fields.closedMessageId;
  v17 = MissionNaviTransitionConfirmDialog_TypeInfo;
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
    v17 = MissionNaviTransitionConfirmDialog_TypeInfo;
  }
  MISSION_NAVI_NOT_OPEN_BOARD = v17->static_fields->MISSION_NAVI_NOT_OPEN_BOARD;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  naviQuestEntity = (MissionNaviQuestEntity_o *)LocalizationManager__Get(MISSION_NAVI_NOT_OPEN_BOARD, 0LL);
  v19 = (Il2CppObject *)naviQuestEntity;
  if ( !closedMessageId )
  {
    if ( tempQuestInfo )
    {
      Mine = MapControl_QuestInfo__GetMine(tempQuestInfo, 0LL);
      QuestClosedMessageText = MissionNaviTransitionConfirmDialog__GetQuestClosedMessageText(tempQuestInfo, Mine, v27);
      goto LABEL_26;
    }
LABEL_36:
    sub_1C3B9C0(naviQuestEntity, tempQuestInfo);
  }
  QuestClosedMessageText = MissionNaviTransitionConfirmDialog__GetClosedMessageText(
                             closedMessageId,
                             (const MethodInfo *)tempQuestInfo);
LABEL_26:
  v28 = (Il2CppObject *)QuestClosedMessageText;
LABEL_35:
  v34 = 0LL;
  v35 = 0LL;
  v37.fields.Item1 = (Il2CppObject *)&v34;
  v37.fields.Item2 = v19;
  System_ValueTuple_object__object____ctor(
    v37,
    v28,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v21);
  v32 = v34;
  v33 = v35;
  result.fields.Item2 = v33;
  result.fields.Item1 = v32;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_string__string__o __fastcall MissionNaviTransitionConfirmDialog__GetSpotNaviNameAndClosedMessage(
        MissionNaviTransitionEntity_o *missionNaviTransitionEntity,
        MapControl_SpotInfo_o *spotInfo,
        bool isLocked,
        const MethodInfo *method)
{
  MissionNaviTransitionEntity_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t closedMessageId; // w19
  MissionNaviTransitionConfirmDialog_c *v13; // x0
  System_String_o *MISSION_NAVI_NOT_OPEN_BOARD; // x20
  System_String_o *v15; // x20
  const MethodInfo *v16; // x1
  Il2CppObject *ClosedMessageText; // x2
  const MethodInfo_39E2C94 *v18; // x4
  SpotEntity_o *Mine; // x0
  Il2CppObject *v20; // x19
  MissionNaviTransitionConfirmDialog_c *v21; // x0
  System_String_o *MISSION_NAVI_NAME_COMMON; // x20
  System_String_o *v23; // x0
  struct System_String_o *v24; // x0 OVERLAPPED
  struct System_String_o *v25; // x1
  struct System_String_o *v26; // [xsp+0h] [xbp-40h] BYREF
  struct System_String_o *v27; // [xsp+8h] [xbp-38h]
  System_String_o *challengeNaviName; // [xsp+18h] [xbp-28h] BYREF
  System_ValueTuple_object__object__o v29; // 0:x0.16
  System_ValueTuple_string__string__o result; // 0:x0.16

  v6 = missionNaviTransitionEntity;
  if ( (byte_4C25BF2 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, spotInfo);
    sub_1C3B764(&MissionNaviTransitionConfirmDialog_TypeInfo, v7);
    sub_1C3B764(&Method_System_ValueTuple_string__string___ctor__, v8);
    sub_1C3B764(&StringLiteral_43/*"\n"*/, v9);
    sub_1C3B764(&StringLiteral_117/*"   "*/, v10);
    missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)sub_1C3B764(&StringLiteral_1/*""*/, v11);
    byte_4C25BF2 = 1;
  }
  challengeNaviName = 0LL;
  if ( !v6 )
    goto LABEL_24;
  if ( !isLocked )
  {
    missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)MissionNaviTransitionEntity__TryGetChallengeNaviName(
                                                                     v6,
                                                                     &challengeNaviName,
                                                                     0LL);
    if ( ((unsigned __int8)missionNaviTransitionEntity & 1) != 0 )
    {
      v15 = challengeNaviName;
LABEL_22:
      ClosedMessageText = (Il2CppObject *)StringLiteral_1/*""*/;
      goto LABEL_23;
    }
    if ( spotInfo )
    {
      Mine = MapControl_SpotInfo__GetMine(spotInfo, 0LL);
      if ( !Mine )
      {
        v20 = 0LL;
        goto LABEL_17;
      }
      missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)Mine->fields.name;
      if ( missionNaviTransitionEntity )
      {
        v20 = (Il2CppObject *)System_String__Replace_63388240(
                                (System_String_o *)missionNaviTransitionEntity,
                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                (System_String_o *)StringLiteral_117/*"   "*/,
                                0LL);
LABEL_17:
        v21 = MissionNaviTransitionConfirmDialog_TypeInfo;
        if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
          v21 = MissionNaviTransitionConfirmDialog_TypeInfo;
        }
        MISSION_NAVI_NAME_COMMON = v21->static_fields->MISSION_NAVI_NAME_COMMON;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v23 = LocalizationManager__Get(MISSION_NAVI_NAME_COMMON, 0LL);
        v15 = System_String__Format(v23, v20, 0LL);
        challengeNaviName = v15;
        goto LABEL_22;
      }
    }
LABEL_24:
    sub_1C3B9C0(missionNaviTransitionEntity, spotInfo);
  }
  closedMessageId = v6->fields.closedMessageId;
  v13 = MissionNaviTransitionConfirmDialog_TypeInfo;
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
    v13 = MissionNaviTransitionConfirmDialog_TypeInfo;
  }
  MISSION_NAVI_NOT_OPEN_BOARD = v13->static_fields->MISSION_NAVI_NOT_OPEN_BOARD;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get(MISSION_NAVI_NOT_OPEN_BOARD, 0LL);
  ClosedMessageText = (Il2CppObject *)MissionNaviTransitionConfirmDialog__GetClosedMessageText(closedMessageId, v16);
LABEL_23:
  v26 = 0LL;
  v27 = 0LL;
  v29.fields.Item1 = (Il2CppObject *)&v26;
  v29.fields.Item2 = (Il2CppObject *)v15;
  System_ValueTuple_object__object____ctor(
    v29,
    ClosedMessageText,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v18);
  v24 = v26;
  v25 = v27;
  result.fields.Item2 = v25;
  result.fields.Item1 = v24;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_string__string__o __fastcall MissionNaviTransitionConfirmDialog__GetWarNaviNameAndClosedMessage(
        MissionNaviTransitionEntity_o *missionNaviTransitionEntity,
        MapControl_WarInfo_o *warInfo,
        bool isLocked,
        const MethodInfo *method)
{
  MissionNaviTransitionEntity_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t closedMessageId; // w20
  MissionNaviTransitionConfirmDialog_c *v14; // x0
  System_String_o *MISSION_NAVI_NOT_OPEN_BOARD; // x19
  Il2CppObject *v16; // x19
  const MethodInfo *v17; // x1
  Il2CppObject *ClosedMessageText; // x2
  const MethodInfo_39E2C94 *v19; // x4
  MissionNaviTransitionConfirmDialog_c *v20; // x0
  System_String_o *MISSION_NAVI_MAIN_QUEST; // x19
  System_String_o *v22; // x0
  WarEntity_o *Mine; // x0
  Il2CppObject *v24; // x19
  MissionNaviTransitionConfirmDialog_c *v25; // x0
  System_String_o *MISSION_NAVI_NAME_COMMON; // x20
  System_String_o *v27; // x0
  struct System_String_o *v28; // x0 OVERLAPPED
  struct System_String_o *v29; // x1
  struct System_String_o *v30; // [xsp+0h] [xbp-40h] BYREF
  struct System_String_o *v31; // [xsp+8h] [xbp-38h]
  System_String_o *challengeNaviName; // [xsp+18h] [xbp-28h] BYREF
  System_ValueTuple_object__object__o v33; // 0:x0.16
  System_ValueTuple_string__string__o result; // 0:x0.16

  v6 = missionNaviTransitionEntity;
  if ( (byte_4C25BF1 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, warInfo);
    sub_1C3B764(&MissionNaviTransitionConfirmDialog_TypeInfo, v7);
    sub_1C3B764(&Method_System_ValueTuple_string__string___ctor__, v8);
    sub_1C3B764(&StringLiteral_43/*"\n"*/, v9);
    sub_1C3B764(&StringLiteral_117/*"   "*/, v10);
    sub_1C3B764(&StringLiteral_8679/*"MapGimmickEffect_GappolyPiece"*/, v11);
    missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)sub_1C3B764(&StringLiteral_1/*""*/, v12);
    byte_4C25BF1 = 1;
  }
  challengeNaviName = 0LL;
  if ( !v6 )
    goto LABEL_31;
  if ( !isLocked )
  {
    if ( MissionNaviTransitionEntity__TryGetChallengeNaviName(v6, &challengeNaviName, 0LL) )
    {
      v16 = (Il2CppObject *)challengeNaviName;
LABEL_29:
      ClosedMessageText = (Il2CppObject *)StringLiteral_1/*""*/;
      goto LABEL_30;
    }
    missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)System_String__op_Equality(
                                                                     v6->fields.transitionParam,
                                                                     (System_String_o *)StringLiteral_8679/*"MapGimmickEffect_GappolyPiece"*/,
                                                                     0LL);
    if ( ((unsigned __int8)missionNaviTransitionEntity & 1) != 0 )
    {
      v20 = MissionNaviTransitionConfirmDialog_TypeInfo;
      if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
        v20 = MissionNaviTransitionConfirmDialog_TypeInfo;
      }
      MISSION_NAVI_MAIN_QUEST = v20->static_fields->MISSION_NAVI_MAIN_QUEST;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = LocalizationManager__Get(MISSION_NAVI_MAIN_QUEST, 0LL);
LABEL_28:
      v16 = (Il2CppObject *)v22;
      challengeNaviName = v22;
      goto LABEL_29;
    }
    if ( warInfo )
    {
      Mine = MapControl_WarInfo__GetMine(warInfo, 0LL);
      if ( !Mine )
      {
        v24 = 0LL;
        goto LABEL_23;
      }
      missionNaviTransitionEntity = (MissionNaviTransitionEntity_o *)WarEntity__GetPrioredLongName(Mine, 0LL);
      if ( missionNaviTransitionEntity )
      {
        v24 = (Il2CppObject *)System_String__Replace_63388240(
                                (System_String_o *)missionNaviTransitionEntity,
                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                (System_String_o *)StringLiteral_117/*"   "*/,
                                0LL);
LABEL_23:
        v25 = MissionNaviTransitionConfirmDialog_TypeInfo;
        if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
          v25 = MissionNaviTransitionConfirmDialog_TypeInfo;
        }
        MISSION_NAVI_NAME_COMMON = v25->static_fields->MISSION_NAVI_NAME_COMMON;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v27 = LocalizationManager__Get(MISSION_NAVI_NAME_COMMON, 0LL);
        v22 = System_String__Format(v27, v24, 0LL);
        goto LABEL_28;
      }
    }
LABEL_31:
    sub_1C3B9C0(missionNaviTransitionEntity, warInfo);
  }
  closedMessageId = v6->fields.closedMessageId;
  v14 = MissionNaviTransitionConfirmDialog_TypeInfo;
  if ( !MissionNaviTransitionConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionNaviTransitionConfirmDialog_TypeInfo);
    v14 = MissionNaviTransitionConfirmDialog_TypeInfo;
  }
  MISSION_NAVI_NOT_OPEN_BOARD = v14->static_fields->MISSION_NAVI_NOT_OPEN_BOARD;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = (Il2CppObject *)LocalizationManager__Get(MISSION_NAVI_NOT_OPEN_BOARD, 0LL);
  ClosedMessageText = (Il2CppObject *)MissionNaviTransitionConfirmDialog__GetClosedMessageText(closedMessageId, v17);
LABEL_30:
  v30 = 0LL;
  v31 = 0LL;
  v33.fields.Item1 = (Il2CppObject *)&v30;
  v33.fields.Item2 = v16;
  System_ValueTuple_object__object____ctor(
    v33,
    ClosedMessageText,
    (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__,
    v19);
  v28 = v30;
  v29 = v31;
  result.fields.Item2 = v29;
  result.fields.Item1 = v28;
  return result;
}


void __fastcall MissionNaviTransitionConfirmDialog__OnChangeAlphaAnim(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  MasterMissionListViewItemDraw_o *limitedMissionItemDraw; // x0

  limitedMissionItemDraw = this->fields.limitedMissionItemDraw;
  if ( !limitedMissionItemDraw )
    sub_1C3B9C0(0LL, method);
  MasterMissionListViewItemDraw__OnChangeAlphaAnim(
    limitedMissionItemDraw,
    this->fields.missionListViewItem,
    1,
    this->fields.missionListViewManager,
    0LL);
}


void __fastcall MissionNaviTransitionConfirmDialog__OnClickClose(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct MissionNaviTransitionConfirmDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_4C25BEE & 1) == 0 )
  {
    sub_1C3B764(&Method_MissionNaviTransitionConfirmDialog_OnClickClose__, method);
    byte_4C25BEE = 1;
  }
  if ( this->fields.state == 2 )
  {
    MissionNaviTransitionConfirmDialog__DeleteCallback(this, method);
    this->fields.state = 3;
    v3 = Method_MissionNaviTransitionConfirmDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_MissionNaviTransitionConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_MissionNaviTransitionConfirmDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1C3B9C0(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeFunc->fields.m_target)(
      closeFunc->fields.original_method_info,
      *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


void __fastcall MissionNaviTransitionConfirmDialog__Open(
        MissionNaviTransitionConfirmDialog_o *this,
        MissionListViewItem_o *missionItem,
        MissionListViewManager_o *listViewManager,
        int32_t missionBoardType,
        System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *boardItemList,
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *closeDelegate,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
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
  __int64 v32; // x1
  UILabel_o *titleLabel; // x25
  System_String_o *limitedMissionItemDraw; // x0
  __int64 v35; // x1
  UILabel_o *choiceMessageLabel; // x25
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  Il2CppClass *v43; // x8
  __int64 methodPtr_low; // x9
  MissionListViewItem_o *v45; // x10
  MissionListViewItem_o *v46; // x1
  struct MasterMissionListViewItem_o **p_missionListViewItem; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  Il2CppClass *v54; // x8
  __int64 v55; // x9
  MissionListViewManager_o *v56; // x10
  MissionListViewManager_o *v57; // x1
  struct MasterMissionListViewManager_o **p_missionListViewManager; // x24
  UnityEngine_Object_o *v59; // x22
  float messageHeight; // s8
  float messageTopOffset; // s9
  UnityEngine_GameObject_o *v62; // x23
  UnityEngine_Transform_o *v63; // x22
  float v64; // s8
  UnityEngine_Transform_o *v65; // x24
  UnityEngine_Transform_o *v66; // x24
  float v67; // s10
  float messageBottomOffset; // s11
  float boardHeight; // s9
  System_Collections_Generic_List_object__o *v70; // x25
  struct System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__o **p_boardItemDrawList; // x24
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  float v78; // s9
  float v79; // s8
  __int64 v80; // x1
  UnityEngine_GameObject_o *challengeGrid; // x0
  Il2CppObject *current; // x26
  Il2CppObject *missionNaviTransitionBoardItemDrawPrefab; // x21
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *v85; // x0
  __int64 v86; // x1
  UnityEngine_GameObject_o *v87; // x25
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v89; // x1
  Il2CppObject *v90; // x21
  UnityEngine_Transform_o *v91; // x0
  __int64 v92; // x1
  float v93; // s8
  __int64 v94; // x0
  __int64 v95; // x1
  UnityEngine_Transform_o *v96; // x26
  __int64 v97; // x0
  __int64 v98; // x1
  UnityEngine_Transform_o *v99; // x25
  __int64 v100; // x1
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  System_Collections_Generic_List_object__o *v107; // x0
  struct System_Object_array *items; // x8
  _QWORD *v109; // x9
  __int64 size; // x10
  Il2CppClass **v111; // x8
  UILabel_o *closeBtnLabel; // x21
  UILabel_o *warningMessageLabel; // x21
  System_Action_o *v114; // x20
  System_Collections_Generic_List_Enumerator_object__o v115; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v116; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v118; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C25BED & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, missionItem);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__Dispose__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__MoveNext__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__get_Current__, v17);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponentInChildren_MissionNaviTransitionBoardItemDraw___, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__Add__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__GetEnumerator__, v20);
    sub_1C3B764(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw___ctor__, v21);
    sub_1C3B764(&System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__TypeInfo, v22);
    sub_1C3B764(&LocalizationManager_TypeInfo, v23);
    sub_1C3B764(&MasterMissionListViewItem_TypeInfo, v24);
    sub_1C3B764(&MasterMissionListViewManager_TypeInfo, v25);
    sub_1C3B764(&Method_MissionNaviTransitionConfirmDialog_EndOpen__, v26);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject____77992824, v27);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v28);
    sub_1C3B764(&StringLiteral_8834/*"Microsoft Win32S "*/, v29);
    sub_1C3B764(&StringLiteral_8836/*"Microsoft Windows 98 "*/, v30);
    sub_1C3B764(&StringLiteral_8840/*"Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo, Microsoft.CSharp, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a"*/, v31);
    sub_1C3B764(&StringLiteral_8839/*"Microsoft.CSharp.RuntimeBinder.Binder, Microsoft.CSharp, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a"*/, v32);
    byte_4C25BED = 1;
  }
  memset(&v116, 0, sizeof(v116));
  this->fields.closeFunc = closeDelegate;
  this->fields.isSetUpMissionListView = 0;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.closeFunc,
    (int64_t)closeDelegate,
    (int64_t)listViewManager,
    missionBoardType,
    (System_String_o *)boardItemList,
    (BattleSetupInfo_o *)closeDelegate,
    (FollowerInfo_o *)openCallback,
    (PartyListViewItem_o *)method);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8839/*"Microsoft.CSharp.RuntimeBinder.Binder, Microsoft.CSharp, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_96;
  UILabel__set_text(titleLabel, limitedMissionItemDraw, 0LL);
  choiceMessageLabel = this->fields.choiceMessageLabel;
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8834/*"Microsoft Win32S "*/, 0LL);
  if ( !choiceMessageLabel )
    goto LABEL_96;
  UILabel__set_text(choiceMessageLabel, limitedMissionItemDraw, 0LL);
  if ( missionBoardType == 1 )
  {
    if ( missionItem )
    {
      v43 = (Il2CppClass *)MasterMissionListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(missionItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (MasterMissionListViewItem_c *)missionItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo )
          v45 = missionItem;
        else
          v45 = 0LL;
      }
      else
      {
        v45 = 0LL;
      }
      this->fields.missionListViewItem = (struct MasterMissionListViewItem_o *)v45;
      p_missionListViewItem = &this->fields.missionListViewItem;
      if ( LOBYTE(missionItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( missionItem->klass->_2.typeHierarchy[methodPtr_low - 1] == v43 )
          v46 = missionItem;
        else
          v46 = 0LL;
      }
      else
      {
        v46 = 0LL;
      }
    }
    else
    {
      v46 = 0LL;
      this->fields.missionListViewItem = 0LL;
      p_missionListViewItem = &this->fields.missionListViewItem;
    }
    sub_1C3B708((PartyOrganizationUtility_o *)p_missionListViewItem, (int64_t)v46, v37, v38, v39, v40, v41, v42);
    if ( listViewManager )
    {
      v54 = (Il2CppClass *)MasterMissionListViewManager_TypeInfo;
      v55 = LOBYTE(MasterMissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(listViewManager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v55 )
      {
        if ( (MasterMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v55 - 1] == MasterMissionListViewManager_TypeInfo )
          v56 = listViewManager;
        else
          v56 = 0LL;
      }
      else
      {
        v56 = 0LL;
      }
      this->fields.missionListViewManager = (struct MasterMissionListViewManager_o *)v56;
      p_missionListViewManager = &this->fields.missionListViewManager;
      if ( LOBYTE(listViewManager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v55 )
      {
        if ( listViewManager->klass->_2.typeHierarchy[v55 - 1] == v54 )
          v57 = listViewManager;
        else
          v57 = 0LL;
      }
      else
      {
        v57 = 0LL;
      }
    }
    else
    {
      v57 = 0LL;
      this->fields.missionListViewManager = 0LL;
      p_missionListViewManager = &this->fields.missionListViewManager;
    }
    sub_1C3B708((PartyOrganizationUtility_o *)p_missionListViewManager, (int64_t)v57, v48, v49, v50, v51, v52, v53);
    limitedMissionItemDraw = (System_String_o *)this->fields.limitedMissionItemDraw;
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    limitedMissionItemDraw = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)limitedMissionItemDraw,
                                                  0LL);
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitedMissionItemDraw, 1, 0LL);
    limitedMissionItemDraw = (System_String_o *)this->fields.limitedMissionItemDraw;
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    ((void (__fastcall *)(System_String_o *, MissionListViewItem_o *, __int64, MissionListViewManager_o *, Il2CppMethodPointer))limitedMissionItemDraw->klass->vtable._4_CompareTo.method)(
      limitedMissionItemDraw,
      missionItem,
      1LL,
      listViewManager,
      limitedMissionItemDraw->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.methodPtr);
    limitedMissionItemDraw = (System_String_o *)this->fields.limitedMissionItemDraw;
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    MissionListViewItemDraw__SetChallengeButtonActive((MissionListViewItemDraw_o *)limitedMissionItemDraw, 0, 0LL);
    if ( missionItem )
    {
      v59 = (UnityEngine_Object_o *)*p_missionListViewManager;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v59, 0LL, 0LL) )
        this->fields.isSetUpMissionListView = 1;
    }
  }
  limitedMissionItemDraw = (System_String_o *)this->fields.choiceMessageLabel;
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  messageHeight = this->fields.messageHeight;
  messageTopOffset = this->fields.messageTopOffset;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)limitedMissionItemDraw,
                                                0LL);
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  v62 = (UnityEngine_GameObject_o *)limitedMissionItemDraw;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)limitedMissionItemDraw,
                                                0LL);
  if ( !this->fields.challengeGrid )
    goto LABEL_96;
  v63 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(this->fields.challengeGrid, 0LL);
  if ( !v63 )
    goto LABEL_96;
  UnityEngine_Transform__set_parent(v63, (UnityEngine_Transform_o *)limitedMissionItemDraw, 0LL);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v62, 0LL);
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  v64 = 0.0 - (float)((float)(messageHeight * 0.5) + messageTopOffset);
  v117.fields.x = 0.0;
  v117.fields.z = 0.0;
  v117.fields.y = v64;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)limitedMissionItemDraw, v117, 0LL);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v62, 0LL);
  v65 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  if ( !byte_4C1C517 )
  {
    limitedMissionItemDraw = (System_String_o *)sub_1C3B764(&UnityEngine_Quaternion_TypeInfo, v35);
    byte_4C1C517 = 1;
  }
  if ( !v65 )
    goto LABEL_96;
  UnityEngine_Transform__set_localRotation(v65, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v62, 0LL);
  v66 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  if ( !byte_4C1C516 )
  {
    limitedMissionItemDraw = (System_String_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v35);
    byte_4C1C516 = 1;
  }
  if ( !v66 )
    goto LABEL_96;
  UnityEngine_Transform__set_localScale(v66, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  messageBottomOffset = this->fields.messageBottomOffset;
  v67 = this->fields.messageHeight;
  boardHeight = this->fields.boardHeight;
  v70 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v70,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw___ctor__);
  this->fields.boardItemDrawList = (struct System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__o *)v70;
  p_boardItemDrawList = &this->fields.boardItemDrawList;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.boardItemDrawList, (int64_t)v70, v72, v73, v74, v75, v76, v77);
  if ( !boardItemList )
    goto LABEL_96;
  v78 = boardHeight * 0.5;
  v79 = v64 - (float)((float)(v67 * 0.5) + messageBottomOffset);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v115,
    (System_Collections_Generic_List_object__o *)boardItemList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__GetEnumerator__);
  v116 = v115;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v116,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__MoveNext__) )
  {
    challengeGrid = this->fields.challengeGrid;
    if ( !challengeGrid )
      sub_1C3B9C0(0LL, v80);
    current = v116.fields._current;
    missionNaviTransitionBoardItemDrawPrefab = (Il2CppObject *)this->fields.missionNaviTransitionBoardItemDrawPrefab;
    transform = UnityEngine_GameObject__get_transform(challengeGrid, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v85 = UnityEngine_Object__Instantiate_object__50818788(
            missionNaviTransitionBoardItemDrawPrefab,
            transform,
            (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
    v87 = (UnityEngine_GameObject_o *)v85;
    if ( !v85 )
      sub_1C3B9C0(0LL, v86);
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)v85,
                                   (const MethodInfo_3041C7C *)Method_UnityEngine_GameObject_GetComponentInChildren_MissionNaviTransitionBoardItemDraw___);
    v90 = ComponentInChildren_object;
    if ( !ComponentInChildren_object )
      sub_1C3B9C0(0LL, v89);
    ((void (__fastcall *)(Il2CppObject *, Il2CppObject *, _QWORD, Il2CppMethodPointer))ComponentInChildren_object->klass->vtable[4].method)(
      ComponentInChildren_object,
      current,
      0LL,
      ComponentInChildren_object->klass->vtable[5].methodPtr);
    v91 = UnityEngine_GameObject__get_transform(v87, 0LL);
    if ( !v91 )
      sub_1C3B9C0(0LL, v92);
    v93 = v79 - v78;
    v118.fields.x = 0.0;
    v118.fields.z = 0.0;
    v118.fields.y = v93;
    UnityEngine_Transform__set_localPosition(v91, v118, 0LL);
    v94 = (__int64)UnityEngine_GameObject__get_transform(v87, 0LL);
    v96 = (UnityEngine_Transform_o *)v94;
    if ( !byte_4C1C517 )
    {
      v94 = sub_1C3B764(&UnityEngine_Quaternion_TypeInfo, v95);
      byte_4C1C517 = 1;
    }
    if ( !v96 )
      sub_1C3B9C0(v94, v95);
    UnityEngine_Transform__set_localRotation(
      v96,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0LL);
    v97 = (__int64)UnityEngine_GameObject__get_transform(v87, 0LL);
    v99 = (UnityEngine_Transform_o *)v97;
    if ( !byte_4C1C516 )
    {
      v97 = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v98);
      byte_4C1C516 = 1;
    }
    if ( !v99 )
      sub_1C3B9C0(v97, v98);
    UnityEngine_Transform__set_localScale(v99, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v107 = (System_Collections_Generic_List_object__o *)*p_boardItemDrawList;
    if ( !*p_boardItemDrawList )
      sub_1C3B9C0(0LL, v100);
    items = v107->fields._items;
    v109 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__Add__;
    ++v107->fields._version;
    if ( !items )
      sub_1C3B9C0(v107, v100);
    size = v107->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v107,
        v90,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    }
    else
    {
      v111 = &items->obj.klass + size;
      v107->fields._size = size + 1;
      v111[4] = (Il2CppClass *)v90;
      sub_1C3B708((PartyOrganizationUtility_o *)(v111 + 4), (int64_t)v90, v101, v102, v103, v104, v105, v106);
    }
    v79 = v93 - v78;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v116,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__Dispose__);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  UIScrollView__ResetPosition((UIScrollView_o *)limitedMissionItemDraw, 0LL);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  ((void (__fastcall *)(System_String_o *, _QWORD, Il2CppMethodPointer, float, float))limitedMissionItemDraw->klass->vtable._9_GetTypeCode.method)(
    limitedMissionItemDraw,
    0LL,
    limitedMissionItemDraw->klass->vtable._10_System_IConvertible_ToBoolean.methodPtr,
    0.0,
    0.0);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  ((void (__fastcall *)(System_String_o *, __int64, Il2CppMethodPointer))limitedMissionItemDraw->klass->vtable._8_Equals.method)(
    limitedMissionItemDraw,
    1LL,
    limitedMissionItemDraw->klass->vtable._9_GetTypeCode.methodPtr);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  UIScrollView__UpdatePosition((UIScrollView_o *)limitedMissionItemDraw, 0LL);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeGrid;
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)limitedMissionItemDraw,
                                                0LL);
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)limitedMissionItemDraw, 0LL) <= 3 )
  {
    limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)limitedMissionItemDraw, 0, 0LL);
    limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollBar;
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitedMissionItemDraw, 0, 0LL);
  }
  closeBtnLabel = this->fields.closeBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8836/*"Microsoft Windows 98 "*/, 0LL);
  if ( !closeBtnLabel
    || (UILabel__set_text(closeBtnLabel, limitedMissionItemDraw, 0LL),
        warningMessageLabel = this->fields.warningMessageLabel,
        limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8840/*"Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo, Microsoft.CSharp, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a"*/, 0LL),
        !warningMessageLabel) )
  {
LABEL_96:
    sub_1C3B9C0(limitedMissionItemDraw, v35);
  }
  UILabel__set_text(warningMessageLabel, limitedMissionItemDraw, 0LL);
  ActionExtensions__Call(openCallback, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v114 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v114, (Il2CppObject *)this, Method_MissionNaviTransitionConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v114, 0, 0LL);
}


void __fastcall MissionNaviTransitionConfirmDialog__RedispResTime(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct MasterMissionListViewItemDraw_o *limitedMissionItemDraw; // x19
  struct MasterMissionListViewItem_o *missionListViewItem; // x20
  int64_t Time; // x0
  __int64 v6; // x1

  if ( (byte_4C25BF5 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    byte_4C25BF5 = 1;
  }
  limitedMissionItemDraw = this->fields.limitedMissionItemDraw;
  missionListViewItem = this->fields.missionListViewItem;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !limitedMissionItemDraw )
    sub_1C3B9C0(Time, v6);
  ((void (__fastcall *)(struct MasterMissionListViewItemDraw_o *, struct MasterMissionListViewItem_o *, int64_t, Il2CppMethodPointer))limitedMissionItemDraw->klass->vtable._9_UpdateDispResTime.method)(
    limitedMissionItemDraw,
    missionListViewItem,
    Time,
    limitedMissionItemDraw->klass->vtable._10_SetInput.methodPtr);
}


void __fastcall MissionNaviTransitionConfirmDialog__RewardUpdateAnim(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct MasterMissionListViewManager_o *missionListViewManager; // x8

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_1C3B9C0(this, method);
  if ( missionListViewManager->fields._IsChangeMissionNaviDialogAnim_k__BackingField )
  {
    missionListViewManager->fields._IsChangeMissionNaviDialogAnim_k__BackingField = 0;
    MissionNaviTransitionConfirmDialog__OnChangeAlphaAnim(this, method);
  }
}


void __fastcall MissionNaviTransitionConfirmDialog__SetState(
        MissionNaviTransitionConfirmDialog_o *this,
        int32_t currentState,
        const MethodInfo *method)
{
  this->fields.state = currentState;
}


void __fastcall MissionNaviTransitionConfirmDialog__Update(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  MasterMissionListViewItemDraw_o *limitedMissionItemDraw; // x0
  const MethodInfo *v5; // x1

  if ( this->fields.isSetUpMissionListView )
  {
    MissionNaviTransitionConfirmDialog__RedispResTime(this, method);
    limitedMissionItemDraw = this->fields.limitedMissionItemDraw;
    if ( !limitedMissionItemDraw )
      sub_1C3B9C0(0LL, v3);
    MasterMissionListViewItemDraw__UpdateItem(
      limitedMissionItemDraw,
      this->fields.missionListViewItem,
      1,
      this->fields.missionListViewManager,
      0LL);
    MissionNaviTransitionConfirmDialog__RewardUpdateAnim(this, v5);
  }
}


System_String_o *__fastcall MissionNaviTransitionConfirmDialog__get_closeBtnPath(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C25BEF & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_15959/*"_PetternNumber"*/, method);
    byte_4C25BEF = 1;
  }
  return (System_String_o *)StringLiteral_15959/*"_PetternNumber"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNaviTransitionConfirmDialog_CloseDelegate___ctor(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A80F88;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A80F48;
}


System_IAsyncResult_o *__fastcall MissionNaviTransitionConfirmDialog_CloseDelegate__BeginInvoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1C3B718(this, &v5, callback, object);
}


void __fastcall MissionNaviTransitionConfirmDialog_CloseDelegate__EndInvoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
}


void __fastcall MissionNaviTransitionConfirmDialog_CloseDelegate__Invoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}