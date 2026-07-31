void ExRoomMissionReceiveSingleResultDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ExRoomMissionReceiveSingleResultDialog___c_c *v3; // x0
  Il2CppObject *v4; // x19
  System_Func_int__bool__o *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Func_object__object__o *v12; // x19
  struct ExRoomMissionReceiveSingleResultDialog_StaticFields *static_fields; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *v20; // x19
  System_Func_object__object__o *v21; // x20
  struct ExRoomMissionReceiveSingleResultDialog_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct ExRoomMissionReceiveSingleResultDialog_StaticFields *v29; // x0
  struct System_Func_int__bool__o *DefaultIsGetItemEffectResolver; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct ExRoomMissionReceiveSingleResultDialog_StaticFields *v37; // x0
  struct System_Func_string__string__o *DefaultLocalizationResolver; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct ExRoomMissionReceiveSingleResultDialog_StaticFields *v45; // x0
  struct System_Func_ServantEntity__string__o *DefaultServantNameResolver; // x1
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7

  if ( (byte_5932E3E & 1) == 0 )
  {
    sub_21FFC50(&ExRoomMissionReceiveSingleResultDialog_TypeInfo);
    sub_21FFC50(&System_Func_ServantEntity__string__TypeInfo);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&System_Func_string__string__TypeInfo);
    sub_21FFC50(&Method_LocalizationManager_Get__);
    sub_21FFC50(&Method_ExRoomMissionReceiveSingleResultDialog___c___cctor_b__18_0__);
    sub_21FFC50(&Method_ExRoomMissionReceiveSingleResultDialog___c___cctor_b__18_1__);
    sub_21FFC50(&ExRoomMissionReceiveSingleResultDialog___c_TypeInfo);
    byte_5932E3E = 1;
  }
  v3 = ExRoomMissionReceiveSingleResultDialog___c_TypeInfo;
  if ( !*(&ExRoomMissionReceiveSingleResultDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ExRoomMissionReceiveSingleResultDialog___c_TypeInfo, v1, v2);
    v3 = ExRoomMissionReceiveSingleResultDialog___c_TypeInfo;
  }
  v4 = (Il2CppObject *)v3->static_fields->__9;
  v5 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v5, v4, Method_ExRoomMissionReceiveSingleResultDialog___c___cctor_b__18_0__, 0);
  ExRoomMissionReceiveSingleResultDialog_TypeInfo->static_fields->DefaultIsGetItemEffectResolver = v5;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ExRoomMissionReceiveSingleResultDialog_TypeInfo->static_fields,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_string__string__TypeInfo);
  System_Func_object__object____ctor(v12, 0, Method_LocalizationManager_Get__, 0);
  static_fields = ExRoomMissionReceiveSingleResultDialog_TypeInfo->static_fields;
  static_fields->DefaultLocalizationResolver = (struct System_Func_string__string__o *)v12;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->DefaultLocalizationResolver,
    (int32_t)v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (Il2CppObject *)ExRoomMissionReceiveSingleResultDialog___c_TypeInfo->static_fields->__9;
  v21 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_ServantEntity__string__TypeInfo);
  System_Func_object__object____ctor(v21, v20, Method_ExRoomMissionReceiveSingleResultDialog___c___cctor_b__18_1__, 0);
  v22 = ExRoomMissionReceiveSingleResultDialog_TypeInfo->static_fields;
  v22->DefaultServantNameResolver = (struct System_Func_ServantEntity__string__o *)v21;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v22->DefaultServantNameResolver,
    (int32_t)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = ExRoomMissionReceiveSingleResultDialog_TypeInfo->static_fields;
  DefaultIsGetItemEffectResolver = v29->DefaultIsGetItemEffectResolver;
  v29->isGetItemEffectResolver = v29->DefaultIsGetItemEffectResolver;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v29->isGetItemEffectResolver,
    (int32_t)DefaultIsGetItemEffectResolver,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = ExRoomMissionReceiveSingleResultDialog_TypeInfo->static_fields;
  DefaultLocalizationResolver = v37->DefaultLocalizationResolver;
  v37->localizationResolver = DefaultLocalizationResolver;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v37->localizationResolver,
    (int32_t)DefaultLocalizationResolver,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = ExRoomMissionReceiveSingleResultDialog_TypeInfo->static_fields;
  DefaultServantNameResolver = v45->DefaultServantNameResolver;
  v45->servantNameResolver = DefaultServantNameResolver;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v45->servantNameResolver,
    (int32_t)DefaultServantNameResolver,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
}


void ExRoomMissionReceiveSingleResultDialog___ctor(
        ExRoomMissionReceiveSingleResultDialog_o *this,
        ExRoomMissionListOutput_o *missionOutput,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.exRoomMissionListOutput = missionOutput;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)missionOutput, v5, v6, v7, v8, v9, v10);
}


System_String_o *ExRoomMissionReceiveSingleResultDialog__BuildDisplayMessage(
        ExRoomMissionReceiveSingleResultDialog_o *this,
        GiftEntity_array *rewards,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *v5; // x19
  System_Text_StringBuilder_o *v6; // x22
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 IsItem_47357376; // x0
  __int64 v10; // x8
  int max_length; // w8
  __int64 v12; // x23
  int v13; // w29
  GiftEntity_o *v14; // x8
  __int64 v15; // x23
  GiftEntity_o **m_Items; // x28
  GiftEntity_o *v17; // x8
  int32_t type; // w24
  GiftEntity_o *v19; // x8
  __int64 v20; // x24
  bool IsCombineMaterial; // w25
  __int64 v22; // x2
  __int64 v23; // x8
  GiftEntity_o *v24; // x8
  Il2CppObject *v25; // x24
  Il2CppObject *v26; // x0
  struct System_Func_string__string__o *localizationResolver; // x8
  Il2CppObject *v28; // x24
  System_String_o *v29; // x0
  GiftEntity_o *v30; // x8
  __int64 v31; // x26
  Il2CppObject *CountableString; // x25
  System_Text_StringBuilder_o *v33; // x24
  __int64 v34; // x2
  __int64 v35; // x8
  GiftEntity_o *v36; // x8
  System_String_o *v37; // x26
  Il2CppObject *v38; // x0
  __int64 v39; // x2
  System_String_o *v40; // x1
  __int64 v41; // x8
  System_Text_StringBuilder_o *v43; // x20
  __int64 v44; // x2
  Il2CppObject *v45; // x21
  __int64 v46; // x8
  __int64 v47; // x2
  __int64 v48; // x8
  System_String_o *v49; // x0
  __int64 v50; // x2
  __int64 v51; // x8
  System_String_o *v52; // x0
  System_String_o *format; // [xsp+0h] [xbp-70h]
  int32_t v54; // [xsp+8h] [xbp-68h] BYREF
  int32_t num; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_5932E3D & 1) == 0 )
  {
    sub_21FFC50(&ExRoomMissionReceiveSingleResultDialog_TypeInfo);
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    sub_21FFC50(&StringLiteral_9023/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_9027/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/);
    sub_21FFC50(&StringLiteral_9026/*"MISSION_ACTION_SUCCESS"*/);
    sub_21FFC50(&StringLiteral_3834/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/);
    sub_21FFC50(&StringLiteral_51/*"\n \n "*/);
    sub_21FFC50(&StringLiteral_9022/*"MISSION_ACTION_ITEM_FORMAT"*/);
    sub_21FFC50(&StringLiteral_49/*"\n "*/);
    sub_21FFC50(&StringLiteral_9029/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/);
    byte_5932E3D = 1;
  }
  if ( !rewards || !rewards->max_length )
    return **(System_String_o ***)(qword_594C0B8 + 184);
  v5 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v5, 0);
  v6 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v6, 0);
  IsItem_47357376 = (__int64)ExRoomMissionReceiveSingleResultDialog_TypeInfo;
  if ( !*(&ExRoomMissionReceiveSingleResultDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ExRoomMissionReceiveSingleResultDialog_TypeInfo, v7, v8);
    IsItem_47357376 = (__int64)ExRoomMissionReceiveSingleResultDialog_TypeInfo;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(IsItem_47357376 + 184) + 32LL);
  if ( !v10 )
    goto LABEL_87;
  IsItem_47357376 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v10 + 24))(
                      *(_QWORD *)(v10 + 64),
                      StringLiteral_3834/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/,
                      *(_QWORD *)(v10 + 40));
  max_length = rewards->max_length;
  format = (System_String_o *)IsItem_47357376;
  if ( max_length < 1 )
  {
    v13 = 0;
  }
  else
  {
    v12 = 0;
    v13 = 0;
    do
    {
      if ( (unsigned int)v12 >= max_length )
        goto LABEL_88;
      v14 = rewards->m_Items[v12];
      if ( !v14 )
        goto LABEL_87;
      IsItem_47357376 = Gift__IsItem_47357376(v14->fields.type, 0);
      max_length = rewards->max_length;
      ++v12;
      v13 += IsItem_47357376 & 1;
    }
    while ( (int)v12 < max_length );
    if ( max_length >= 1 )
    {
      v15 = 0;
      m_Items = rewards->m_Items;
      while ( (unsigned int)v15 < max_length )
      {
        v17 = m_Items[v15];
        if ( !v17 )
          goto LABEL_87;
        type = v17->fields.type;
        IsItem_47357376 = Gift__IsServant_47357416(type, 0);
        if ( (IsItem_47357376 & 1) != 0 )
        {
          if ( (unsigned int)v15 >= LODWORD(rewards->max_length) )
            break;
          v19 = m_Items[v15];
          if ( !v19 )
            goto LABEL_87;
          IsItem_47357376 = (__int64)this->fields.exRoomMissionListOutput;
          if ( IsItem_47357376 )
          {
            IsItem_47357376 = (__int64)ExRoomMissionListOutput__FindRewardResolvedRewardByObjectId(
                                         (ExRoomMissionListOutput_o *)IsItem_47357376,
                                         v19->fields.objectId,
                                         0);
            if ( IsItem_47357376 )
            {
              v20 = *(_QWORD *)(IsItem_47357376 + 32);
              if ( v20 )
              {
                IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(v20 + 84), 0);
                IsItem_47357376 = SvtType__IsStatusUp(*(_DWORD *)(v20 + 84), 0);
                if ( IsCombineMaterial || (IsItem_47357376 & 1) != 0 )
                {
                  if ( !v5 )
                    goto LABEL_87;
                  if ( System_Text_StringBuilder__get_Length(v5, 0) >= 1 )
                    System_Text_StringBuilder__Append_75521760(v5, (System_String_o *)StringLiteral_49/*"\n "*/, 0);
                  IsItem_47357376 = (__int64)ExRoomMissionReceiveSingleResultDialog_TypeInfo;
                  if ( !*(&ExRoomMissionReceiveSingleResultDialog_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(ExRoomMissionReceiveSingleResultDialog_TypeInfo, v7, v22);
                    IsItem_47357376 = (__int64)ExRoomMissionReceiveSingleResultDialog_TypeInfo;
                  }
                  v23 = *(_QWORD *)(*(_QWORD *)(IsItem_47357376 + 184) + 40LL);
                  if ( !v23 )
                    goto LABEL_87;
                  IsItem_47357376 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v23 + 24))(
                                      *(_QWORD *)(v23 + 64),
                                      v20,
                                      *(_QWORD *)(v23 + 40));
                  if ( (unsigned int)v15 >= LODWORD(rewards->max_length) )
                    break;
                  v24 = m_Items[v15];
                  if ( !v24 )
                    goto LABEL_87;
                  v25 = (Il2CppObject *)IsItem_47357376;
                  num = v24->fields.num;
                  v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &num);
                  IsItem_47357376 = (__int64)System_String__Format_75484576(format, v25, v26, 0);
                  localizationResolver = ExRoomMissionReceiveSingleResultDialog_TypeInfo->static_fields->localizationResolver;
                  if ( !localizationResolver )
                    goto LABEL_87;
                  v28 = (Il2CppObject *)IsItem_47357376;
                  v29 = (System_String_o *)((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))localizationResolver->fields.invoke_impl)(
                                             localizationResolver->fields.method_code,
                                             StringLiteral_9022/*"MISSION_ACTION_ITEM_FORMAT"*/,
                                             localizationResolver->fields.method);
                  IsItem_47357376 = (__int64)System_Text_StringBuilder__AppendFormat(v5, v29, v28, 0);
                }
              }
            }
          }
        }
        else
        {
          IsItem_47357376 = Gift__IsItem_47357376(type, 0);
          if ( (IsItem_47357376 & 1) != 0 )
          {
            if ( (unsigned int)v15 >= LODWORD(rewards->max_length) )
              break;
            v30 = m_Items[v15];
            if ( !v30 )
              goto LABEL_87;
            IsItem_47357376 = (__int64)this->fields.exRoomMissionListOutput;
            if ( IsItem_47357376 )
            {
              IsItem_47357376 = (__int64)ExRoomMissionListOutput__FindRewardResolvedRewardByObjectId(
                                           (ExRoomMissionListOutput_o *)IsItem_47357376,
                                           v30->fields.objectId,
                                           0);
              if ( IsItem_47357376 )
              {
                v31 = *(_QWORD *)(IsItem_47357376 + 24);
                if ( v31 )
                {
                  CountableString = (Il2CppObject *)ItemType__GetCountableString(*(_DWORD *)(v31 + 48), 0);
                  v33 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
                  System_Text_StringBuilder___ctor(v33, 0);
                  if ( !v33 )
                    goto LABEL_87;
                  System_Text_StringBuilder__Append_75521760(v33, *(System_String_o **)(v31 + 24), 0);
                  IsItem_47357376 = (__int64)ExRoomMissionReceiveSingleResultDialog_TypeInfo;
                  if ( !*(&ExRoomMissionReceiveSingleResultDialog_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(ExRoomMissionReceiveSingleResultDialog_TypeInfo, v7, v34);
                    IsItem_47357376 = (__int64)ExRoomMissionReceiveSingleResultDialog_TypeInfo;
                  }
                  v35 = *(_QWORD *)(*(_QWORD *)(IsItem_47357376 + 184) + 32LL);
                  if ( !v35 )
                    goto LABEL_87;
                  IsItem_47357376 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v35 + 24))(
                                      *(_QWORD *)(v35 + 64),
                                      StringLiteral_9027/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/,
                                      *(_QWORD *)(v35 + 40));
                  if ( (unsigned int)v15 >= LODWORD(rewards->max_length) )
                    break;
                  v36 = m_Items[v15];
                  if ( !v36 )
                    goto LABEL_87;
                  v37 = (System_String_o *)IsItem_47357376;
                  v54 = v36->fields.num;
                  v38 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v54);
                  System_Text_StringBuilder__AppendFormat_75527968(v33, v37, CountableString, v38, 0);
                  if ( v13 >= 2 )
                  {
                    IsItem_47357376 = (__int64)ExRoomMissionReceiveSingleResultDialog_TypeInfo;
                    if ( !*(&ExRoomMissionReceiveSingleResultDialog_TypeInfo->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(ExRoomMissionReceiveSingleResultDialog_TypeInfo, v7, v39);
                      IsItem_47357376 = (__int64)ExRoomMissionReceiveSingleResultDialog_TypeInfo;
                    }
                    v41 = *(_QWORD *)(*(_QWORD *)(IsItem_47357376 + 184) + 32LL);
                    if ( !v41 )
                      goto LABEL_87;
                    IsItem_47357376 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v41 + 24))(
                                        *(_QWORD *)(v41 + 64),
                                        StringLiteral_9022/*"MISSION_ACTION_ITEM_FORMAT"*/,
                                        *(_QWORD *)(v41 + 40));
                    if ( !v6 )
                      goto LABEL_87;
                    System_Text_StringBuilder__AppendFormat(
                      v6,
                      (System_String_o *)IsItem_47357376,
                      (Il2CppObject *)v33,
                      0);
                    v40 = (System_String_o *)StringLiteral_49/*"\n "*/;
                  }
                  else
                  {
                    IsItem_47357376 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v33->klass->vtable._3_ToString.methodPtr)(
                                        v33,
                                        v33->klass->vtable._3_ToString.method);
                    if ( !v6 )
                      goto LABEL_87;
                    v40 = (System_String_o *)IsItem_47357376;
                  }
                  IsItem_47357376 = (__int64)System_Text_StringBuilder__Append_75521760(v6, v40, 0);
                }
              }
            }
          }
        }
        max_length = rewards->max_length;
        if ( (int)++v15 >= max_length )
          goto LABEL_60;
      }
LABEL_88:
      sub_21FFED4(IsItem_47357376);
    }
  }
LABEL_60:
  v43 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v43, 0);
  if ( !v6 )
    goto LABEL_87;
  IsItem_47357376 = System_Text_StringBuilder__get_Length(v6, 0);
  if ( (int)IsItem_47357376 < 1 )
  {
    if ( !v5 )
      goto LABEL_87;
  }
  else
  {
    IsItem_47357376 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v6->klass->vtable._3_ToString.methodPtr)(
                        v6,
                        v6->klass->vtable._3_ToString.method);
    v45 = (Il2CppObject *)IsItem_47357376;
    if ( v13 >= 2 )
    {
      if ( !IsItem_47357376 )
        goto LABEL_87;
      IsItem_47357376 = (__int64)System_String__Substring_75489544(
                                   (System_String_o *)IsItem_47357376,
                                   0,
                                   *(_DWORD *)(IsItem_47357376 + 16) - 2,
                                   0);
      if ( !v43 )
        goto LABEL_87;
      System_Text_StringBuilder__Append_75521760(v43, (System_String_o *)IsItem_47357376, 0);
      IsItem_47357376 = (__int64)ExRoomMissionReceiveSingleResultDialog_TypeInfo;
      if ( !*(&ExRoomMissionReceiveSingleResultDialog_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ExRoomMissionReceiveSingleResultDialog_TypeInfo, v7, v47);
        IsItem_47357376 = (__int64)ExRoomMissionReceiveSingleResultDialog_TypeInfo;
      }
      v48 = *(_QWORD *)(*(_QWORD *)(IsItem_47357376 + 184) + 32LL);
      if ( !v48 )
        goto LABEL_87;
      v49 = (System_String_o *)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v48 + 24))(
                                 *(_QWORD *)(v48 + 64),
                                 StringLiteral_9023/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/,
                                 *(_QWORD *)(v48 + 40));
      IsItem_47357376 = (__int64)System_Text_StringBuilder__Append_75521760(v43, v49, 0);
    }
    else
    {
      IsItem_47357376 = (__int64)ExRoomMissionReceiveSingleResultDialog_TypeInfo;
      if ( !*(&ExRoomMissionReceiveSingleResultDialog_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ExRoomMissionReceiveSingleResultDialog_TypeInfo, v7, v44);
        IsItem_47357376 = (__int64)ExRoomMissionReceiveSingleResultDialog_TypeInfo;
      }
      v46 = *(_QWORD *)(*(_QWORD *)(IsItem_47357376 + 184) + 32LL);
      if ( !v46 )
        goto LABEL_87;
      IsItem_47357376 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v46 + 24))(
                          *(_QWORD *)(v46 + 64),
                          StringLiteral_9026/*"MISSION_ACTION_SUCCESS"*/,
                          *(_QWORD *)(v46 + 40));
      if ( !v43 )
        goto LABEL_87;
      IsItem_47357376 = (__int64)System_Text_StringBuilder__AppendFormat(
                                   v43,
                                   (System_String_o *)IsItem_47357376,
                                   v45,
                                   0);
    }
    if ( !v5 )
      goto LABEL_87;
    if ( System_Text_StringBuilder__get_Length(v5, 0) >= 1 )
      System_Text_StringBuilder__Append_75521760(v43, (System_String_o *)StringLiteral_51/*"\n \n "*/, 0);
  }
  IsItem_47357376 = System_Text_StringBuilder__get_Length(v5, 0);
  if ( (int)IsItem_47357376 < 1 )
  {
    if ( v43 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v43->klass->vtable._3_ToString.methodPtr)(
                                  v43,
                                  v43->klass->vtable._3_ToString.method);
LABEL_87:
    sub_21FFECC(IsItem_47357376, v7);
  }
  IsItem_47357376 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v5->klass->vtable._3_ToString.methodPtr)(
                      v5,
                      v5->klass->vtable._3_ToString.method);
  if ( !v43 )
    goto LABEL_87;
  System_Text_StringBuilder__Append_75521760(v43, (System_String_o *)IsItem_47357376, 0);
  IsItem_47357376 = (__int64)ExRoomMissionReceiveSingleResultDialog_TypeInfo;
  if ( !*(&ExRoomMissionReceiveSingleResultDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ExRoomMissionReceiveSingleResultDialog_TypeInfo, v7, v50);
    IsItem_47357376 = (__int64)ExRoomMissionReceiveSingleResultDialog_TypeInfo;
  }
  v51 = *(_QWORD *)(*(_QWORD *)(IsItem_47357376 + 184) + 32LL);
  if ( !v51 )
    goto LABEL_87;
  v52 = (System_String_o *)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v51 + 24))(
                             *(_QWORD *)(v51 + 64),
                             StringLiteral_9029/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/,
                             *(_QWORD *)(v51 + 40));
  System_Text_StringBuilder__Append_75521760(v43, v52, 0);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v43->klass->vtable._3_ToString.methodPtr)(
                              v43,
                              v43->klass->vtable._3_ToString.method);
}


GiftEntity_array *ExRoomMissionReceiveSingleResultDialog__BuildDisplayRewardGiftEntities(
        ExRoomMissionReceiveSingleResultDialog_o *this,
        const MethodInfo *method)
{
  struct ExRoomMissionListOutput_o *exRoomMissionListOutput; // x8
  struct GiftEntity_array *RewardGiftEntities_k__BackingField; // x26
  System_Collections_Generic_List_object__o *v5; // x20
  System_Collections_Generic_List_object__o *v6; // x21
  ExRoomMissionListOutput_o *RewardResolvedReward; // x0
  Il2CppObject *v8; // x1
  il2cpp_array_size_t max_length; // x8
  __int64 v10; // x22
  GiftEntity_o **m_Items; // x29
  ExRoomMissionListOutput_o *v12; // x23
  GiftEntity_o *v13; // x8
  int32_t type; // w24
  __int64 v15; // x23
  bool IsCombineMaterial; // w0
  int32_t v17; // w8
  bool v18; // w23
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  struct UserEventMissionEntity_o *UserEventMissionEntity_k__BackingField; // x23
  __int64 v30; // x8
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  __int64 v34; // x8
  System_Collections_Generic_List_object__o *v35; // x0
  int32_t v36; // w22
  int32_t v37; // w23
  System_Collections_Generic_List_object__o *v38; // x19

  if ( (byte_5932E3C & 1) == 0 )
  {
    sub_21FFC50(&ExRoomMissionReceiveSingleResultDialog_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity___ctor___91425792);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    byte_5932E3C = 1;
  }
  exRoomMissionListOutput = this->fields.exRoomMissionListOutput;
  if ( !exRoomMissionListOutput )
    return 0;
  RewardGiftEntities_k__BackingField = exRoomMissionListOutput->fields._RewardGiftEntities_k__BackingField;
  if ( !RewardGiftEntities_k__BackingField || !RewardGiftEntities_k__BackingField->max_length )
    return 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  max_length = RewardGiftEntities_k__BackingField->max_length;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    m_Items = RewardGiftEntities_k__BackingField->m_Items;
    while ( 1 )
    {
      RewardResolvedReward = this->fields.exRoomMissionListOutput;
      if ( RewardResolvedReward )
      {
        RewardResolvedReward = (ExRoomMissionListOutput_o *)ExRoomMissionListOutput__GetRewardResolvedReward(
                                                              RewardResolvedReward,
                                                              v10,
                                                              0);
        max_length = RewardGiftEntities_k__BackingField->max_length;
        v12 = RewardResolvedReward;
      }
      else
      {
        v12 = 0;
      }
      if ( (unsigned int)v10 >= (unsigned int)max_length )
LABEL_48:
        sub_21FFED4(RewardResolvedReward);
      v13 = m_Items[v10];
      if ( !v13 )
        goto LABEL_47;
      type = v13->fields.type;
      RewardResolvedReward = (ExRoomMissionListOutput_o *)Gift__IsServant_47357416(type, 0);
      if ( ((unsigned __int8)RewardResolvedReward & 1) != 0 )
        break;
      RewardResolvedReward = (ExRoomMissionListOutput_o *)Gift__IsItem_47357376(type, 0);
      if ( ((unsigned __int8)RewardResolvedReward & 1) != 0 )
      {
        if ( v12 )
        {
          UserEventMissionEntity_k__BackingField = v12->fields._UserEventMissionEntity_k__BackingField;
          if ( UserEventMissionEntity_k__BackingField )
          {
            RewardResolvedReward = (ExRoomMissionListOutput_o *)ExRoomMissionReceiveSingleResultDialog_TypeInfo;
            if ( !*(&ExRoomMissionReceiveSingleResultDialog_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(ExRoomMissionReceiveSingleResultDialog_TypeInfo, v8, v19);
              RewardResolvedReward = (ExRoomMissionListOutput_o *)ExRoomMissionReceiveSingleResultDialog_TypeInfo;
            }
            v30 = *(_QWORD *)&RewardResolvedReward[1].fields._IconGiftEntity_k__BackingField->fields.objectId;
            if ( !v30 )
              goto LABEL_47;
            RewardResolvedReward = (ExRoomMissionListOutput_o *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v30 + 24))(
                                                                  *(_QWORD *)(v30 + 64),
                                                                  LODWORD(UserEventMissionEntity_k__BackingField->fields.userId),
                                                                  *(_QWORD *)(v30 + 40));
            if ( ((unsigned __int8)RewardResolvedReward & 1) == 0 )
            {
LABEL_32:
              if ( (unsigned int)v10 >= LODWORD(RewardGiftEntities_k__BackingField->max_length) )
                goto LABEL_48;
              if ( !v5 )
                goto LABEL_47;
              items = v5->fields._items;
              v8 = (Il2CppObject *)m_Items[v10];
              v32 = Method_System_Collections_Generic_List_GiftEntity__Add__;
              ++v5->fields._version;
              if ( !items )
                goto LABEL_47;
              size = v5->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                v34 = v32[4];
                v35 = v5;
LABEL_40:
                System_Collections_Generic_List_object___AddWithResize(
                  v35,
                  v8,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v34 + 192) + 112LL));
                goto LABEL_41;
              }
              v28 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              goto LABEL_37;
            }
          }
        }
      }
      else if ( type == 8 )
      {
        goto LABEL_32;
      }
LABEL_41:
      max_length = RewardGiftEntities_k__BackingField->max_length;
      if ( (int)++v10 >= (int)max_length )
        goto LABEL_42;
    }
    if ( !v12 )
      goto LABEL_41;
    v15 = *(_QWORD *)&v12->fields._ProgressType_k__BackingField;
    if ( !v15 )
      goto LABEL_41;
    IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(v15 + 84), 0);
    v17 = *(_DWORD *)(v15 + 84);
    v18 = IsCombineMaterial;
    RewardResolvedReward = (ExRoomMissionListOutput_o *)SvtType__IsStatusUp(v17, 0);
    if ( !v18 && ((unsigned __int8)RewardResolvedReward & 1) == 0 )
      goto LABEL_41;
    if ( (unsigned int)v10 >= LODWORD(RewardGiftEntities_k__BackingField->max_length) )
      goto LABEL_48;
    if ( !v6 )
      goto LABEL_47;
    v25 = v6->fields._items;
    v8 = (Il2CppObject *)m_Items[v10];
    v26 = Method_System_Collections_Generic_List_GiftEntity__Add__;
    ++v6->fields._version;
    if ( !v25 )
      goto LABEL_47;
    v27 = v6->fields._size;
    if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
    {
      v34 = v26[4];
      v35 = v6;
      goto LABEL_40;
    }
    v28 = &v25->obj.klass + v27;
    v6->fields._size = v27 + 1;
LABEL_37:
    v28[4] = (Il2CppClass *)v8;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)v8, v19, v20, v21, v22, v23, v24);
    goto LABEL_41;
  }
LABEL_42:
  if ( !v5
    || !v6
    || (v36 = v5->fields._size,
        v37 = v6->fields._size,
        v38 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GiftEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor_71627580(
          v38,
          v37 + v36,
          (const MethodInfo_444F33C *)Method_System_Collections_Generic_List_GiftEntity___ctor___91425792),
        !v38) )
  {
LABEL_47:
    sub_21FFECC(RewardResolvedReward, v8);
  }
  System_Collections_Generic_List_object___AddRange(
    v38,
    (System_Collections_Generic_IEnumerable_T__o *)v5,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v38,
    (System_Collections_Generic_IEnumerable_T__o *)v6,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  return (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v38,
                               (const MethodInfo_445164C *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
}


ItemEntity_o *ExRoomMissionReceiveSingleResultDialog__FindItemEntityByObjectId(
        ExRoomMissionReceiveSingleResultDialog_o *this,
        int32_t objectId,
        const MethodInfo *method)
{
  ItemEntity_o *result; // x0

  result = (ItemEntity_o *)this->fields.exRoomMissionListOutput;
  if ( result )
  {
    result = (ItemEntity_o *)ExRoomMissionListOutput__FindRewardResolvedRewardByObjectId(
                               (ExRoomMissionListOutput_o *)result,
                               objectId,
                               0);
    if ( result )
      return (ItemEntity_o *)result->fields.name;
  }
  return result;
}


ServantEntity_o *ExRoomMissionReceiveSingleResultDialog__FindServantEntityByObjectId(
        ExRoomMissionReceiveSingleResultDialog_o *this,
        int32_t objectId,
        const MethodInfo *method)
{
  ServantEntity_o *result; // x0

  result = (ServantEntity_o *)this->fields.exRoomMissionListOutput;
  if ( result )
  {
    result = (ServantEntity_o *)ExRoomMissionListOutput__FindRewardResolvedRewardByObjectId(
                                  (ExRoomMissionListOutput_o *)result,
                                  objectId,
                                  0);
    if ( result )
      return *(ServantEntity_o **)&result->fields.baseSvtId.fields.currentCryptoKey;
  }
  return result;
}


System_String_o *ExRoomMissionReceiveSingleResultDialog__get_DisplayMessage(
        ExRoomMissionReceiveSingleResultDialog_o *this,
        const MethodInfo *method)
{
  GiftEntity_array *v3; // x1
  const MethodInfo *v4; // x2

  v3 = ExRoomMissionReceiveSingleResultDialog__BuildDisplayRewardGiftEntities(this, method);
  return ExRoomMissionReceiveSingleResultDialog__BuildDisplayMessage(this, v3, v4);
}


// attributes: thunk
GiftEntity_array *ExRoomMissionReceiveSingleResultDialog__get_DisplayRewardGiftEntities(
        ExRoomMissionReceiveSingleResultDialog_o *this,
        const MethodInfo *method)
{
  return ExRoomMissionReceiveSingleResultDialog__BuildDisplayRewardGiftEntities(this, method);
}


GiftEntity_array *ExRoomMissionReceiveSingleResultDialog__get_RewardGiftEntities(
        ExRoomMissionReceiveSingleResultDialog_o *this,
        const MethodInfo *method)
{
  struct ExRoomMissionListOutput_o *exRoomMissionListOutput; // x8

  exRoomMissionListOutput = this->fields.exRoomMissionListOutput;
  if ( exRoomMissionListOutput )
    return exRoomMissionListOutput->fields._RewardGiftEntities_k__BackingField;
  else
    return 0;
}


void ExRoomMissionReceiveSingleResultDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5932E3F & 1) == 0 )
  {
    sub_21FFC50(&ExRoomMissionReceiveSingleResultDialog___c_TypeInfo);
    byte_5932E3F = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ExRoomMissionReceiveSingleResultDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ExRoomMissionReceiveSingleResultDialog___c_TypeInfo->static_fields->__9 = (struct ExRoomMissionReceiveSingleResultDialog___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ExRoomMissionReceiveSingleResultDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionReceiveSingleResultDialog___c___ctor(
        ExRoomMissionReceiveSingleResultDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ExRoomMissionReceiveSingleResultDialog___c____cctor_b__18_0(
        ExRoomMissionReceiveSingleResultDialog___c_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x20
  Il2CppObject *v7; // x0
  __int64 v8; // x1

  if ( (byte_5932E40 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5932E40 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
    return 0;
  v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v7 )
    sub_21FFECC(0, v8);
  return CommonUI__IsGetItemEffect((CommonUI_o *)v7, itemId, 0);
}


System_String_o *ExRoomMissionReceiveSingleResultDialog___c____cctor_b__18_1(
        ExRoomMissionReceiveSingleResultDialog___c_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  if ( !servantEntity )
    sub_21FFECC(this, 0);
  return ServantEntity__getName(servantEntity, -1, -1, 0, 0, 0);
}