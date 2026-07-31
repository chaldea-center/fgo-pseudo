void EventInfoJobLevelNoticeDialogLoader___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct EventInfoJobLevelNoticeDialogLoader_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_59386B0 & 1) == 0 )
  {
    sub_21FFC50(&EventInfoJobLevelNoticeDialogLoader_TypeInfo);
    sub_21FFC50(&StringLiteral_6526/*"EventUI/Prefabs/{0}"*/);
    sub_21FFC50(&StringLiteral_6471/*"EventInfoJobLevelNoticeDialog"*/);
    byte_59386B0 = 1;
  }
  v7 = StringLiteral_6526/*"EventUI/Prefabs/{0}"*/;
  EventInfoJobLevelNoticeDialogLoader_TypeInfo->static_fields->AssetPathFormat = (struct System_String_o *)StringLiteral_6526/*"EventUI/Prefabs/{0}"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventInfoJobLevelNoticeDialogLoader_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_6471/*"EventInfoJobLevelNoticeDialog"*/;
  static_fields = EventInfoJobLevelNoticeDialogLoader_TypeInfo->static_fields;
  static_fields->PrefabName = (struct System_String_o *)StringLiteral_6471/*"EventInfoJobLevelNoticeDialog"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->PrefabName, v8, v10, v11, v12, v13, v14, v15);
}


void EventInfoJobLevelNoticeDialogLoader___ctor(EventInfoJobLevelNoticeDialogLoader_o *this, const MethodInfo *method)
{
  if ( (byte_59386AF & 1) == 0 )
  {
    sub_21FFC50(&Method_EventInfoDialogLoader_EventInfoJobLevelNoticeDialog___ctor__);
    byte_59386AF = 1;
  }
  EventInfoDialogLoader_object____ctor(
    (EventInfoDialogLoader_TDialog__o *)this,
    (const MethodInfo_42320B4 *)Method_EventInfoDialogLoader_EventInfoJobLevelNoticeDialog___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool EventInfoJobLevelNoticeDialogLoader__CheckAndShow(
        EventInfoJobLevelNoticeDialogLoader_o *this,
        int32_t questId,
        UnityEngine_Transform_o *parent,
        int32_t maskType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v11; // x0
  EventInfoJobLevelSnapshot_o *JobLevelSnapshot_k__BackingField; // x1
  struct EventInfoJobLevelSnapshot_JobEntry_array *jobs; // x8

  if ( (byte_59386AD & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59386AD = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&questId);
  if ( !byte_59359ED )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59359ED = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&questId);
    v11 = TerminalPramsManager_TypeInfo;
  }
  JobLevelSnapshot_k__BackingField = v11->static_fields->_JobLevelSnapshot_k__BackingField;
  return JobLevelSnapshot_k__BackingField
      && JobLevelSnapshot_k__BackingField->fields.questId == questId
      && (jobs = JobLevelSnapshot_k__BackingField->fields.jobs) != 0
      && jobs->max_length
      && EventInfoJobLevelNoticeDialogLoader__CheckAndShowBySnapshot(
           this,
           JobLevelSnapshot_k__BackingField,
           parent,
           maskType,
           callback,
           method);
}


bool EventInfoJobLevelNoticeDialogLoader__CheckAndShowBySnapshot(
        EventInfoJobLevelNoticeDialogLoader_o *this,
        EventInfoJobLevelSnapshot_o *snapshot,
        UnityEngine_Transform_o *parent,
        int32_t maskType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x23
  UserEventJobMaster_o *Master_object; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct EventInfoJobLevelSnapshot_JobEntry_array *jobs; // x8
  signed int v27; // w25
  int max_length; // w26
  __int64 v29; // x22
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct EventInfoJobLevelSnapshot_JobEntry_array *v36; // x8
  int32_t *v37; // x19
  UserEventJobMaster_o *v38; // x24
  EventInfoJobLevelNoticeDialogLoader_c *v40; // x0
  System_String_o *AssetPathFormat; // x21
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  UnityEngine_Transform_o *transform; // x23
  System_String_o *v51; // x20
  System_String_o *PrefabName; // x21
  System_Action_object__o *v53; // x24
  UnityEngine_Component_o *v54; // [xsp+0h] [xbp-80h]
  EventInfoDialogLoader_TDialog__o *v55; // [xsp+8h] [xbp-78h]
  int32_t v56; // [xsp+14h] [xbp-6Ch] BYREF
  UserEventJobEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_59386AE & 1) == 0 )
  {
    sub_21FFC50(&System_Action_EventInfoJobLevelNoticeDialog__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventJobMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventJobPointBonusMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventJobMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_EventInfoDialogLoader_EventInfoJobLevelNoticeDialog__Load__);
    sub_21FFC50(&EventInfoJobLevelNoticeDialogLoader_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_0_TypeInfo);
    sub_21FFC50(&Method_EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_1__CheckAndShowBySnapshot_b__0__);
    sub_21FFC50(&EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_1_TypeInfo);
    byte_59386AE = 1;
  }
  entity = 0;
  v11 = sub_21FFEBC(EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_32;
  *(_QWORD *)(v11 + 16) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 32) = this;
  *(_DWORD *)(v11 + 24) = maskType;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)this, v20, v21, v22, v23, v24, v25);
  if ( !snapshot )
    goto LABEL_32;
  jobs = snapshot->fields.jobs;
  v54 = (UnityEngine_Component_o *)parent;
  v55 = (EventInfoDialogLoader_TDialog__o *)this;
  if ( !jobs )
    goto LABEL_32;
  v27 = 0;
  while ( 1 )
  {
    max_length = jobs->max_length;
    if ( v27 >= max_length )
      break;
    v29 = sub_21FFEBC(EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v29, 0);
    if ( !v29 )
      goto LABEL_32;
    *(_QWORD *)(v29 + 48) = v11;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v29 + 48), v11, v30, v31, v32, v33, v34, v35);
    v36 = snapshot->fields.jobs;
    if ( !v36 )
      goto LABEL_32;
    if ( (unsigned int)v27 >= LODWORD(v36->max_length) )
      sub_21FFED4(Master_object);
    v37 = (int32_t *)v36->m_Items[v27];
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
    Master_object = (UserEventJobMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventJobMaster___);
    if ( !v37 || !Master_object )
      goto LABEL_32;
    Master_object = (UserEventJobMaster_o *)UserEventJobMaster__TryGetEntity(Master_object, &entity, v37[4], 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      Master_object = (UserEventJobMaster_o *)entity;
      if ( !entity )
        goto LABEL_32;
      Master_object = (UserEventJobMaster_o *)UserEventJobEntity__GetJobInfo(entity, v37[5], 0);
      if ( Master_object )
      {
        v38 = Master_object;
        if ( *(&Master_object->fields._MasterKind_k__BackingField + 1) > v37[6] )
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
          Master_object = (UserEventJobMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventJobMaster___);
          if ( !Master_object )
            goto LABEL_32;
          Master_object = (UserEventJobMaster_o *)EventJobMaster__TryGetEntity(
                                                    (EventJobMaster_o *)Master_object,
                                                    (EventJobEntity_o **)(v29 + 16),
                                                    v37[4],
                                                    v37[5],
                                                    0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
            Master_object = (UserEventJobMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventJobPointBonusMaster___);
            if ( !Master_object )
              goto LABEL_32;
            Master_object = (UserEventJobMaster_o *)EventJobPointBonusMaster__TryGetEntity(
                                                      (EventJobPointBonusMaster_o *)Master_object,
                                                      (EventJobPointBonusEntity_o **)(v29 + 24),
                                                      v37[4],
                                                      v37[5],
                                                      v37[6],
                                                      0);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
            {
              if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
              Master_object = (UserEventJobMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventJobPointBonusMaster___);
              if ( !Master_object )
                goto LABEL_32;
              Master_object = (UserEventJobMaster_o *)EventJobPointBonusMaster__TryGetEntity(
                                                        (EventJobPointBonusMaster_o *)Master_object,
                                                        (EventJobPointBonusEntity_o **)(v29 + 32),
                                                        v37[4],
                                                        v37[5],
                                                        *(&v38->fields._MasterKind_k__BackingField + 1),
                                                        0);
              if ( ((unsigned __int8)Master_object & 1) != 0 )
              {
                v40 = EventInfoJobLevelNoticeDialogLoader_TypeInfo;
                if ( !*(&EventInfoJobLevelNoticeDialogLoader_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(EventInfoJobLevelNoticeDialogLoader_TypeInfo, v13);
                  v40 = EventInfoJobLevelNoticeDialogLoader_TypeInfo;
                }
                AssetPathFormat = v40->static_fields->AssetPathFormat;
                v56 = v37[4];
                v42 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v56);
                v43 = System_String__Format(AssetPathFormat, v42, 0);
                *(_QWORD *)(v29 + 40) = v43;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v29 + 40), (int32_t)v43, v44, v45, v46, v47, v48, v49);
                if ( v54 )
                {
                  transform = UnityEngine_Component__get_transform(v54, 0);
                  v51 = *(System_String_o **)(v29 + 40);
                  PrefabName = EventInfoJobLevelNoticeDialogLoader_TypeInfo->static_fields->PrefabName;
                  v53 = (System_Action_object__o *)sub_21FFEBC(System_Action_EventInfoJobLevelNoticeDialog__TypeInfo);
                  System_Action_object____ctor(
                    v53,
                    (Il2CppObject *)v29,
                    Method_EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_1__CheckAndShowBySnapshot_b__0__,
                    0);
                  EventInfoDialogLoader_object___Load(
                    v55,
                    transform,
                    v51,
                    PrefabName,
                    (System_Action_TDialog__o *)v53,
                    (const MethodInfo_4231EC4 *)Method_EventInfoDialogLoader_EventInfoJobLevelNoticeDialog__Load__);
                  return v27 < max_length;
                }
LABEL_32:
                sub_21FFECC(Master_object, v13);
              }
            }
          }
        }
      }
    }
    jobs = snapshot->fields.jobs;
    ++v27;
    if ( !jobs )
      goto LABEL_32;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
  TerminalPramsManager__DeleteJobLevelSnapshot(0);
  return v27 < max_length;
}


void EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_0___ctor(
        EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_1___ctor(
        EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_1___CheckAndShowBySnapshot_b__0(
        EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_1_o *this,
        EventInfoJobLevelNoticeDialog_o *dialog,
        const MethodInfo *method)
{
  __int64 v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  UnityEngine_Object_o *v21; // x21
  struct EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_0_o *CS___8__locals1; // x8
  struct EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_0_o *v23; // x8
  EventInfoJobLevelNoticeDialog_o *v24; // x21
  int32_t maskType; // w24
  EventJobEntity_o *eventJobEntity; // x22
  EventJobPointBonusEntity_o *beforeBonusEntity; // x23
  EventJobPointBonusEntity_o *afterBonusEntity; // x19
  System_Action_o *v29; // x25
  const MethodInfo *v30; // x6

  if ( (byte_59386B1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_2__CheckAndShowBySnapshot_b__1__);
    sub_21FFC50(&EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_2_TypeInfo);
    byte_59386B1 = 1;
  }
  v5 = sub_21FFEBC(EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 16) = dialog;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)dialog, v14, v15, v16, v17, v18, v19);
  v21 = *(UnityEngine_Object_o **)(v5 + 16);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  v6 = UnityEngine_Object__op_Equality(v21, 0, 0);
  if ( v6 )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
    TerminalPramsManager__DeleteJobLevelSnapshot(0);
    CS___8__locals1 = this->fields.CS___8__locals1;
    if ( CS___8__locals1 )
    {
      ActionExtensions__Call(CS___8__locals1->fields.callback, 0);
      return;
    }
LABEL_14:
    sub_21FFECC(v6, v7);
  }
  v23 = this->fields.CS___8__locals1;
  if ( !v23 )
    goto LABEL_14;
  v24 = *(EventInfoJobLevelNoticeDialog_o **)(v5 + 16);
  maskType = v23->fields.maskType;
  eventJobEntity = this->fields.eventJobEntity;
  beforeBonusEntity = this->fields.beforeBonusEntity;
  afterBonusEntity = this->fields.afterBonusEntity;
  v29 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v5,
    Method_EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_2__CheckAndShowBySnapshot_b__1__,
    0);
  if ( !v24 )
    goto LABEL_14;
  EventInfoJobLevelNoticeDialog__Open(v24, eventJobEntity, beforeBonusEntity, afterBonusEntity, maskType, v29, v30);
}


void EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_2___ctor(
        EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_2___CheckAndShowBySnapshot_b__1(
        EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_2_o *this,
        const MethodInfo *method)
{
  EventInfoDialogLoader_TDialog__o *_4__this; // x0
  __int64 v4; // x1
  struct EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_1_o *CS___8__locals2; // x8
  struct EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_0_o *CS___8__locals1; // x9
  struct EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_1_o *v7; // x8
  struct EventInfoJobLevelNoticeDialogLoader___c__DisplayClass3_0_o *v8; // x8

  if ( (byte_59386B2 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventInfoDialogLoader_EventInfoJobLevelNoticeDialog__Release__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59386B2 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  TerminalPramsManager__DeleteJobLevelSnapshot(0);
  BasicHelper__Destroy((UnityEngine_Component_o *)this->fields.dialog, 0);
  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2
    || (CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1) == 0
    || (_4__this = (EventInfoDialogLoader_TDialog__o *)CS___8__locals1->fields.__4__this) == 0
    || (EventInfoDialogLoader_object___Release(
          _4__this,
          CS___8__locals2->fields.assetPath,
          (const MethodInfo_423205C *)Method_EventInfoDialogLoader_EventInfoJobLevelNoticeDialog__Release__),
        (v7 = this->fields.CS___8__locals2) == 0)
    || (v8 = v7->fields.CS___8__locals1) == 0 )
  {
    sub_21FFECC(_4__this, v4);
  }
  ActionExtensions__Call(v8->fields.callback, 0);
}