void EventRewardVoicePlayCountView___ctor(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventRewardVoicePlayCountView__Close(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UILabel_o *countLabel; // x0

  if ( (byte_5935B02 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5935B02 = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel
    || (UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (countLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_21FFECC(countLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)countLabel, 0, 0);
}


void EventRewardVoicePlayCountView__ResetCount(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  UILabel_o *countLabel; // x0
  const MethodInfo *v4; // x1

  if ( (byte_5935B03 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5935B03 = 1;
  }
  countLabel = this->fields.countLabel;
  if ( !countLabel )
    sub_21FFECC(0, method);
  UILabel__set_text(countLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  EventRewardSaveData__DeletePlayCount(0);
  EventRewardVoicePlayCountView__SetUp(this, v4);
}


void EventRewardVoicePlayCountView__SetUp(EventRewardVoicePlayCountView_o *this, const MethodInfo *method)
{
  __int64 gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  __int64 v6; // x22
  unsigned __int64 v7; // x23
  __int64 v8; // x21
  __int64 v9; // x2
  __int64 v10; // x22
  __int64 v11; // x28
  __int64 v12; // x29
  __int128 *v13; // x21
  __int64 v14; // x26
  int32_t v15; // w23
  int32_t v16; // w24
  int32_t v17; // w25
  __int64 v18; // x27
  int32_t v19; // w0
  struct UILabel_o *countLabel; // x8
  int32_t EventVoicePlayCount_k__BackingField; // w27
  struct UILabel_o *v22; // x23
  System_Object_array *v23; // x24
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  Il2CppObject *v30; // x25
  __int64 v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  Il2CppObject *v38; // x25
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  Il2CppObject *v45; // x25
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  Il2CppObject *v52; // x25
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  Il2CppObject *v59; // x25
  System_String_o *mText; // x24
  System_Object_array *v61; // x25
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  Il2CppObject *v68; // x26
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  Il2CppObject *v75; // x26
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  Il2CppObject *v82; // x26
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  Il2CppObject *v89; // x26
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  Il2CppObject *v96; // x26
  System_String_o *v97; // x0
  __int64 v98; // x0
  __int64 v99; // [xsp+0h] [xbp-B0h]
  __int64 v100; // [xsp+8h] [xbp-A8h]
  unsigned __int64 v101; // [xsp+10h] [xbp-A0h]
  __int64 v102; // [xsp+18h] [xbp-98h]
  __int64 v103; // [xsp+20h] [xbp-90h]
  int32_t v104; // [xsp+2Ch] [xbp-84h] BYREF
  __int128 v105; // [xsp+30h] [xbp-80h] BYREF
  int v106; // [xsp+44h] [xbp-6Ch] BYREF
  int v107; // [xsp+48h] [xbp-68h] BYREF
  int v108; // [xsp+4Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16

  if ( (byte_5935B01 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventVoicePlayMaster___);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_19996/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/);
    byte_5935B01 = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0),
        (gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (gameObject = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)gameObject,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
LABEL_66:
    sub_21FFECC(gameObject, v4);
  }
  gameObject = (__int64)EventMaster__GetEnableExistEventRewardEntityList((EventMaster_o *)gameObject, 0);
  if ( gameObject )
  {
    v5 = *(_QWORD *)(gameObject + 24);
    v6 = gameObject;
    if ( v5 )
    {
      if ( (int)v5 >= 1 )
      {
        v7 = 0;
        v99 = (unsigned int)*(_QWORD *)(gameObject + 24);
        v100 = gameObject;
        while ( 1 )
        {
          if ( v7 >= *(unsigned int *)(v6 + 24) )
            goto LABEL_65;
          v8 = *(_QWORD *)(v6 + 8 * v7 + 32);
          gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !gameObject )
            goto LABEL_66;
          gameObject = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)gameObject,
                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventVoicePlayMaster___);
          if ( !v8 )
            goto LABEL_66;
          v101 = v7;
          if ( !gameObject )
            goto LABEL_66;
          gameObject = (__int64)EventVoicePlayMaster__GetTargetEventIdEntityList(
                                  (EventVoicePlayMaster_o *)gameObject,
                                  *(_DWORD *)(v8 + 16),
                                  0);
          if ( gameObject )
          {
            v10 = gameObject;
            v103 = *(_QWORD *)(gameObject + 24);
            if ( v103 )
            {
              if ( (int)v103 >= 1 )
                break;
            }
          }
LABEL_63:
          v6 = v100;
          v7 = v101 + 1;
          if ( v101 + 1 == v99 )
            return;
        }
        v11 = 0;
        v102 = gameObject + 32;
        while ( (unsigned int)v11 < *(_DWORD *)(v10 + 24) )
        {
          v12 = *(_QWORD *)(v102 + 8 * v11);
          if ( !v12 )
            goto LABEL_66;
          v13 = (__int128 *)(v12 + 28);
          v14 = *(_QWORD *)(v12 + 28);
          v15 = *(_DWORD *)(v12 + 16);
          v16 = *(_DWORD *)(v12 + 20);
          v17 = *(_DWORD *)(v12 + 24);
          v18 = *(_QWORD *)(v12 + 36);
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v9);
          *(_QWORD *)&v109.fields.currentCryptoKey = v14;
          *(_QWORD *)&v109.fields.fakeValue = v18;
          v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v109, 0);
          EventRewardSaveData__LoadEventVoicePlayCount(v15, v16, v17, v19, 0);
          if ( !byte_593282C )
          {
            gameObject = sub_21FFC50(&EventRewardSaveData_TypeInfo);
            byte_593282C = 1;
          }
          countLabel = this->fields.countLabel;
          if ( !countLabel )
            goto LABEL_66;
          EventVoicePlayCount_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventVoicePlayCount_k__BackingField;
          gameObject = System_String__IsNullOrEmpty(countLabel->fields.mText, 0);
          v22 = this->fields.countLabel;
          if ( (gameObject & 1) != 0 )
          {
            v23 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 5);
            v108 = *(_DWORD *)(v12 + 16);
            gameObject = j_il2cpp_value_box_0(qword_594C070, &v108);
            if ( !v23 )
              goto LABEL_66;
            v30 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_21FFDA4(gameObject, v23->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_67;
            }
            if ( !LODWORD(v23->max_length) )
              break;
            v23->m_Items[0] = v30;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v23->m_Items, (int32_t)v30, v24, v25, v26, v27, v28, v29);
            v107 = *(_DWORD *)(v12 + 20);
            gameObject = j_il2cpp_value_box_0(qword_594C070, &v107);
            v38 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_21FFDA4(gameObject, v23->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_67;
            }
            if ( (v23->max_length & 0xFFFFFFFE) == 0 )
              break;
            v23->m_Items[1] = v38;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v23->m_Items[1],
              (int32_t)v38,
              v32,
              v33,
              v34,
              v35,
              v36,
              v37);
            v106 = *(_DWORD *)(v12 + 24);
            gameObject = j_il2cpp_value_box_0(qword_594C070, &v106);
            v45 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_21FFDA4(gameObject, v23->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_67;
            }
            if ( LODWORD(v23->max_length) <= 2 )
              break;
            v23->m_Items[2] = v45;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v23->m_Items[2],
              (int32_t)v45,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44);
            v105 = *v13;
            gameObject = j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v105);
            v52 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_21FFDA4(gameObject, v23->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_67;
            }
            if ( (v23->max_length & 0xFFFFFFFC) == 0 )
              break;
            v23->m_Items[3] = v52;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v23->m_Items[3],
              (int32_t)v52,
              v46,
              v47,
              v48,
              v49,
              v50,
              v51);
            v104 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(qword_594C070, &v104);
            v59 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_21FFDA4(gameObject, v23->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_67;
            }
            if ( LODWORD(v23->max_length) <= 4 )
              break;
            v23->m_Items[4] = v59;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v23->m_Items[4],
              (int32_t)v59,
              v53,
              v54,
              v55,
              v56,
              v57,
              v58);
            gameObject = (__int64)System_String__Format_75484712((System_String_o *)StringLiteral_19996/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v23, 0);
            if ( !v22 )
              goto LABEL_66;
          }
          else
          {
            if ( !v22 )
              goto LABEL_66;
            mText = v22->fields.mText;
            v61 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 5);
            v108 = *(_DWORD *)(v12 + 16);
            gameObject = j_il2cpp_value_box_0(qword_594C070, &v108);
            if ( !v61 )
              goto LABEL_66;
            v68 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_21FFDA4(gameObject, v61->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_67;
            }
            if ( !LODWORD(v61->max_length) )
              break;
            v61->m_Items[0] = v68;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v61->m_Items, (int32_t)v68, v62, v63, v64, v65, v66, v67);
            v107 = *(_DWORD *)(v12 + 20);
            gameObject = j_il2cpp_value_box_0(qword_594C070, &v107);
            v75 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_21FFDA4(gameObject, v61->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_67;
            }
            if ( (v61->max_length & 0xFFFFFFFE) == 0 )
              break;
            v61->m_Items[1] = v75;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v61->m_Items[1],
              (int32_t)v75,
              v69,
              v70,
              v71,
              v72,
              v73,
              v74);
            v106 = *(_DWORD *)(v12 + 24);
            gameObject = j_il2cpp_value_box_0(qword_594C070, &v106);
            v82 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_21FFDA4(gameObject, v61->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_67;
            }
            if ( LODWORD(v61->max_length) <= 2 )
              break;
            v61->m_Items[2] = v82;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v61->m_Items[2],
              (int32_t)v82,
              v76,
              v77,
              v78,
              v79,
              v80,
              v81);
            v105 = *v13;
            gameObject = j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &v105);
            v89 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_21FFDA4(gameObject, v61->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_67;
            }
            if ( (v61->max_length & 0xFFFFFFFC) == 0 )
              break;
            v61->m_Items[3] = v89;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v61->m_Items[3],
              (int32_t)v89,
              v83,
              v84,
              v85,
              v86,
              v87,
              v88);
            v104 = EventVoicePlayCount_k__BackingField;
            gameObject = j_il2cpp_value_box_0(qword_594C070, &v104);
            v96 = (Il2CppObject *)gameObject;
            if ( gameObject )
            {
              gameObject = sub_21FFDA4(gameObject, v61->obj.klass->_1.element_class);
              if ( !gameObject )
              {
LABEL_67:
                v98 = sub_21FFEF0(gameObject, v31);
                sub_21FFD90(v98, 0);
              }
            }
            if ( LODWORD(v61->max_length) <= 4 )
              break;
            v61->m_Items[4] = v96;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v61->m_Items[4],
              (int32_t)v96,
              v90,
              v91,
              v92,
              v93,
              v94,
              v95);
            v97 = System_String__Format_75484712((System_String_o *)StringLiteral_19996/*"eventId : {0}, slot : {1}, idx : {2}, guideImageId : {3}, count : {4}"*/, v61, 0);
            gameObject = (__int64)System_String__Concat_75481624(mText, (System_String_o *)StringLiteral_43/*"\n"*/, v97, 0);
          }
          UILabel__set_text(v22, (System_String_o *)gameObject, 0);
          if ( (_DWORD)v103 == (_DWORD)++v11 )
            goto LABEL_63;
        }
LABEL_65:
        sub_21FFED4(gameObject);
      }
    }
  }
}