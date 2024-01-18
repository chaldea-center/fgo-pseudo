void __fastcall MotionInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4187373 & 1) == 0 )
  {
    sub_B2C35C(&MotionInfo_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_4187373 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MotionInfo_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_1/*""*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
  MotionInfo_TypeInfo->static_fields->hitNum = 0;
}


void __fastcall MotionInfo___ctor(MotionInfo_o *this, const MethodInfo *method)
{
  LOBYTE(this->fields.y) = 1;
  *(_QWORD *)&this->fields.width = 0x435C000041200000LL;
  *((_DWORD *)&this->fields + 5) = 1128792064;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MotionInfo__GetTypeName(MotionInfo_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 *v7; // x8
  System_String_o *result; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = type;
  if ( (byte_4187372 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_23833/*"バスター"*/, *(_QWORD *)&type);
    sub_B2C35C(&StringLiteral_23817/*"クイック"*/, v4);
    sub_B2C35C(&StringLiteral_23808/*"アーツ"*/, v5);
    sub_B2C35C(&StringLiteral_23812/*"エクストラ"*/, v6);
    byte_4187372 = 1;
  }
  switch ( BattleCommand__getType(type, 0LL) )
  {
    case 1:
      v7 = &StringLiteral_23808/*"アーツ"*/;
      goto LABEL_9;
    case 2:
      v7 = &StringLiteral_23833/*"バスター"*/;
      goto LABEL_9;
    case 3:
      v7 = &StringLiteral_23817/*"クイック"*/;
      goto LABEL_9;
    case 4:
      v7 = &StringLiteral_23812/*"エクストラ"*/;
LABEL_9:
      result = (System_String_o *)*v7;
      break;
    default:
      result = System_Int32__ToString((int32_t)&v9, 0LL);
      break;
  }
  return result;
}


void __fastcall MotionInfo__OnGUI(MotionInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  void *NewLine; // x0
  System_Int32_array **TypeName; // x20
  struct BattleActionData_o *actionData; // x8
  __int64 v14; // x1
  int32_t *p_type; // x8
  System_String_array *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x22
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x22
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x22
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x22
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x22
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x22
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x22
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **v93; // x22
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Int32_array **v100; // x1
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Int32_array **v107; // x22
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_Int32_array **v114; // x22
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_Int32_array **v121; // x22
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  System_Int32_array **v128; // x22
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  System_Int32_array **v135; // x1
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  System_Int32_array **v142; // x22
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  System_String_o *v149; // x20
  int32_t width; // w0
  float v151; // s4
  float v152; // s5
  float v153; // s6
  float v154; // s7
  __int64 v155; // x0
  __int64 v156; // x0
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Rect_o v158; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v159; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4187371 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_GUI_TypeInfo, method);
    sub_B2C35C(&MotionInfo_TypeInfo, v4);
    sub_B2C35C(&string___TypeInfo, v5);
    sub_B2C35C(&StringLiteral_23797/*"【モーションID】"*/, v6);
    sub_B2C35C(&StringLiteral_23798/*"【名前】"*/, v7);
    sub_B2C35C(&StringLiteral_23795/*"【カード属性】"*/, v8);
    sub_B2C35C(&StringLiteral_23796/*"【ヒット数】"*/, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_4187371 = 1;
  }
  HIDWORD(var40.klass) = 0;
  if ( LOBYTE(this->fields.y) )
  {
    HIDWORD(var40.klass) = 0;
    NewLine = MotionInfo_TypeInfo;
    TypeName = (System_Int32_array **)StringLiteral_1/*""*/;
    if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      NewLine = MotionInfo_TypeInfo;
    }
    actionData = *(struct BattleActionData_o **)(*((_QWORD *)NewLine + 23) + 8LL);
    if ( actionData )
    {
      if ( (*((_BYTE *)NewLine + 307) & 4) != 0 && !*((_DWORD *)NewLine + 56) )
      {
        j_il2cpp_runtime_class_init_0(NewLine);
        NewLine = MotionInfo_TypeInfo;
        actionData = MotionInfo_TypeInfo->static_fields->actionData;
        if ( !actionData )
          goto LABEL_97;
      }
      HIDWORD(var40.klass) = actionData->fields.motionId;
      if ( actionData->fields.commandType == -1 )
      {
        if ( (*((_WORD *)NewLine + 153) & 0x400) != 0 && !*((_DWORD *)NewLine + 56) )
        {
          j_il2cpp_runtime_class_init_0(NewLine);
          actionData = MotionInfo_TypeInfo->static_fields->actionData;
          if ( !actionData )
            goto LABEL_97;
        }
        p_type = &actionData->fields.type;
      }
      else
      {
        if ( (*((_WORD *)NewLine + 153) & 0x400) != 0 && !*((_DWORD *)NewLine + 56) )
        {
          j_il2cpp_runtime_class_init_0(NewLine);
          actionData = MotionInfo_TypeInfo->static_fields->actionData;
          if ( !actionData )
            goto LABEL_97;
        }
        p_type = &actionData->fields.commandType;
      }
      TypeName = (System_Int32_array **)MotionInfo__GetTypeName((MotionInfo_o *)NewLine, *p_type, v2);
    }
    v16 = (System_String_array *)sub_B2C374(string___TypeInfo, 19LL);
    NewLine = System_Environment__get_NewLine(0LL);
    if ( v16 )
    {
      v23 = (System_Int32_array **)NewLine;
      if ( !NewLine || (NewLine = (void *)sub_B2C41C(NewLine, v16->obj.klass->_1.element_class)) != 0LL )
      {
        if ( !v16->max_length )
          goto LABEL_95;
        v16->m_Items[0] = (System_String_o *)v23;
        sub_B2C2F8((BattleServantConfConponent_o *)v16->m_Items, v23, v17, v18, v19, v20, v21, v22);
        NewLine = (void *)StringLiteral_23798/*"【名前】"*/;
        if ( StringLiteral_23798/*"【名前】"*/ )
        {
          NewLine = (void *)sub_B2C41C(StringLiteral_23798/*"【名前】"*/, v16->obj.klass->_1.element_class);
          if ( !NewLine )
            goto LABEL_96;
          v30 = (System_Int32_array **)StringLiteral_23798/*"【名前】"*/;
        }
        else
        {
          v30 = 0LL;
        }
        if ( v16->max_length <= 1 )
          goto LABEL_95;
        v16->m_Items[1] = (System_String_o *)v30;
        sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[1], v30, v24, v25, v26, v27, v28, v29);
        NewLine = System_Environment__get_NewLine(0LL);
        v37 = (System_Int32_array **)NewLine;
        if ( !NewLine || (NewLine = (void *)sub_B2C41C(NewLine, v16->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v16->max_length <= 2 )
            goto LABEL_95;
          v16->m_Items[2] = (System_String_o *)v37;
          sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[2], v37, v31, v32, v33, v34, v35, v36);
          NewLine = MotionInfo_TypeInfo;
          if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MotionInfo_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
            NewLine = MotionInfo_TypeInfo;
          }
          v44 = (System_Int32_array **)**((_QWORD **)NewLine + 23);
          if ( !v44 || (NewLine = (void *)sub_B2C41C(v44, v16->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v16->max_length <= 3 )
              goto LABEL_95;
            v16->m_Items[3] = (System_String_o *)v44;
            sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[3], v44, v38, v39, v40, v41, v42, v43);
            NewLine = System_Environment__get_NewLine(0LL);
            v51 = (System_Int32_array **)NewLine;
            if ( !NewLine || (NewLine = (void *)sub_B2C41C(NewLine, v16->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v16->max_length <= 4 )
                goto LABEL_95;
              v16->m_Items[4] = (System_String_o *)v51;
              sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[4], v51, v45, v46, v47, v48, v49, v50);
              NewLine = System_Environment__get_NewLine(0LL);
              v58 = (System_Int32_array **)NewLine;
              if ( !NewLine || (NewLine = (void *)sub_B2C41C(NewLine, v16->obj.klass->_1.element_class)) != 0LL )
              {
                if ( v16->max_length <= 5 )
                  goto LABEL_95;
                v16->m_Items[5] = (System_String_o *)v58;
                sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[5], v58, v52, v53, v54, v55, v56, v57);
                NewLine = (void *)StringLiteral_23797/*"【モーションID】"*/;
                if ( StringLiteral_23797/*"【モーションID】"*/ )
                {
                  NewLine = (void *)sub_B2C41C(StringLiteral_23797/*"【モーションID】"*/, v16->obj.klass->_1.element_class);
                  if ( !NewLine )
                    goto LABEL_96;
                  v65 = (System_Int32_array **)StringLiteral_23797/*"【モーションID】"*/;
                }
                else
                {
                  v65 = 0LL;
                }
                if ( v16->max_length <= 6 )
                  goto LABEL_95;
                v16->m_Items[6] = (System_String_o *)v65;
                sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[6], v65, v59, v60, v61, v62, v63, v64);
                NewLine = System_Environment__get_NewLine(0LL);
                v72 = (System_Int32_array **)NewLine;
                if ( !NewLine || (NewLine = (void *)sub_B2C41C(NewLine, v16->obj.klass->_1.element_class)) != 0LL )
                {
                  if ( v16->max_length <= 7 )
                    goto LABEL_95;
                  v16->m_Items[7] = (System_String_o *)v72;
                  sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[7], v72, v66, v67, v68, v69, v70, v71);
                  NewLine = System_Int32__ToString((int32_t)&var40.klass + 4, 0LL);
                  v79 = (System_Int32_array **)NewLine;
                  if ( !NewLine || (NewLine = (void *)sub_B2C41C(NewLine, v16->obj.klass->_1.element_class)) != 0LL )
                  {
                    if ( v16->max_length <= 8 )
                      goto LABEL_95;
                    v16->m_Items[8] = (System_String_o *)v79;
                    sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[8], v79, v73, v74, v75, v76, v77, v78);
                    NewLine = System_Environment__get_NewLine(0LL);
                    v86 = (System_Int32_array **)NewLine;
                    if ( !NewLine || (NewLine = (void *)sub_B2C41C(NewLine, v16->obj.klass->_1.element_class)) != 0LL )
                    {
                      if ( v16->max_length <= 9 )
                        goto LABEL_95;
                      v16->m_Items[9] = (System_String_o *)v86;
                      sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[9], v86, v80, v81, v82, v83, v84, v85);
                      NewLine = System_Environment__get_NewLine(0LL);
                      v93 = (System_Int32_array **)NewLine;
                      if ( !NewLine || (NewLine = (void *)sub_B2C41C(NewLine, v16->obj.klass->_1.element_class)) != 0LL )
                      {
                        if ( v16->max_length <= 0xA )
                          goto LABEL_95;
                        v16->m_Items[10] = (System_String_o *)v93;
                        sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[10], v93, v87, v88, v89, v90, v91, v92);
                        NewLine = (void *)StringLiteral_23796/*"【ヒット数】"*/;
                        if ( StringLiteral_23796/*"【ヒット数】"*/ )
                        {
                          NewLine = (void *)sub_B2C41C(StringLiteral_23796/*"【ヒット数】"*/, v16->obj.klass->_1.element_class);
                          if ( !NewLine )
                            goto LABEL_96;
                          v100 = (System_Int32_array **)StringLiteral_23796/*"【ヒット数】"*/;
                        }
                        else
                        {
                          v100 = 0LL;
                        }
                        if ( v16->max_length <= 0xB )
                          goto LABEL_95;
                        v16->m_Items[11] = (System_String_o *)v100;
                        sub_B2C2F8(
                          (BattleServantConfConponent_o *)&v16->m_Items[11],
                          v100,
                          v94,
                          v95,
                          v96,
                          v97,
                          v98,
                          v99);
                        NewLine = System_Environment__get_NewLine(0LL);
                        v107 = (System_Int32_array **)NewLine;
                        if ( !NewLine
                          || (NewLine = (void *)sub_B2C41C(NewLine, v16->obj.klass->_1.element_class)) != 0LL )
                        {
                          if ( v16->max_length <= 0xC )
                            goto LABEL_95;
                          v16->m_Items[12] = (System_String_o *)v107;
                          sub_B2C2F8(
                            (BattleServantConfConponent_o *)&v16->m_Items[12],
                            v107,
                            v101,
                            v102,
                            v103,
                            v104,
                            v105,
                            v106);
                          NewLine = System_Int32__ToString((unsigned int)MotionInfo_TypeInfo->static_fields + 16, 0LL);
                          v114 = (System_Int32_array **)NewLine;
                          if ( !NewLine
                            || (NewLine = (void *)sub_B2C41C(NewLine, v16->obj.klass->_1.element_class)) != 0LL )
                          {
                            if ( v16->max_length <= 0xD )
                              goto LABEL_95;
                            v16->m_Items[13] = (System_String_o *)v114;
                            sub_B2C2F8(
                              (BattleServantConfConponent_o *)&v16->m_Items[13],
                              v114,
                              v108,
                              v109,
                              v110,
                              v111,
                              v112,
                              v113);
                            NewLine = System_Environment__get_NewLine(0LL);
                            v121 = (System_Int32_array **)NewLine;
                            if ( !NewLine
                              || (NewLine = (void *)sub_B2C41C(NewLine, v16->obj.klass->_1.element_class)) != 0LL )
                            {
                              if ( v16->max_length <= 0xE )
                                goto LABEL_95;
                              v16->m_Items[14] = (System_String_o *)v121;
                              sub_B2C2F8(
                                (BattleServantConfConponent_o *)&v16->m_Items[14],
                                v121,
                                v115,
                                v116,
                                v117,
                                v118,
                                v119,
                                v120);
                              NewLine = System_Environment__get_NewLine(0LL);
                              v128 = (System_Int32_array **)NewLine;
                              if ( !NewLine
                                || (NewLine = (void *)sub_B2C41C(NewLine, v16->obj.klass->_1.element_class)) != 0LL )
                              {
                                if ( v16->max_length <= 0xF )
                                  goto LABEL_95;
                                v16->m_Items[15] = (System_String_o *)v128;
                                sub_B2C2F8(
                                  (BattleServantConfConponent_o *)&v16->m_Items[15],
                                  v128,
                                  v122,
                                  v123,
                                  v124,
                                  v125,
                                  v126,
                                  v127);
                                NewLine = (void *)StringLiteral_23795/*"【カード属性】"*/;
                                if ( StringLiteral_23795/*"【カード属性】"*/ )
                                {
                                  NewLine = (void *)sub_B2C41C(StringLiteral_23795/*"【カード属性】"*/, v16->obj.klass->_1.element_class);
                                  if ( !NewLine )
                                    goto LABEL_96;
                                  v135 = (System_Int32_array **)StringLiteral_23795/*"【カード属性】"*/;
                                }
                                else
                                {
                                  v135 = 0LL;
                                }
                                if ( v16->max_length <= 0x10 )
                                  goto LABEL_95;
                                v16->m_Items[16] = (System_String_o *)v135;
                                sub_B2C2F8(
                                  (BattleServantConfConponent_o *)&v16->m_Items[16],
                                  v135,
                                  v129,
                                  v130,
                                  v131,
                                  v132,
                                  v133,
                                  v134);
                                NewLine = System_Environment__get_NewLine(0LL);
                                v142 = (System_Int32_array **)NewLine;
                                if ( !NewLine
                                  || (NewLine = (void *)sub_B2C41C(NewLine, v16->obj.klass->_1.element_class)) != 0LL )
                                {
                                  if ( v16->max_length <= 0x11 )
                                    goto LABEL_95;
                                  v16->m_Items[17] = (System_String_o *)v142;
                                  sub_B2C2F8(
                                    (BattleServantConfConponent_o *)&v16->m_Items[17],
                                    v142,
                                    v136,
                                    v137,
                                    v138,
                                    v139,
                                    v140,
                                    v141);
                                  if ( !TypeName
                                    || (NewLine = (void *)sub_B2C41C(TypeName, v16->obj.klass->_1.element_class)) != 0LL )
                                  {
                                    if ( v16->max_length > 0x12 )
                                    {
                                      v16->m_Items[18] = (System_String_o *)TypeName;
                                      sub_B2C2F8(
                                        (BattleServantConfConponent_o *)&v16->m_Items[18],
                                        TypeName,
                                        v143,
                                        v144,
                                        v145,
                                        v146,
                                        v147,
                                        v148);
                                      v149 = System_String__Concat_44385656(v16, 0LL);
                                      width = UnityEngine_Screen__get_width(0LL);
                                      v158.fields.m_YMin = this->fields.width;
                                      v158.fields.m_Width = this->fields.height;
                                      v158.fields.m_Height = *((float *)&this->fields + 5);
                                      v158.fields.m_XMin = (float)width - v158.fields.m_Width;
                                      var40.methodPointer = 0LL;
                                      var40.invoker_method = 0LL;
                                      UnityEngine_Rect___ctor(v158, v151, v152, v153, v154, &var40);
                                      if ( (BYTE3(UnityEngine_GUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
                                      }
                                      *(_QWORD *)&v159.fields.m_XMin = var40.methodPointer;
                                      *(_QWORD *)&v159.fields.m_Width = var40.invoker_method;
                                      UnityEngine_GUI__Box(v159, v149, 0LL);
                                      return;
                                    }
LABEL_95:
                                    v155 = sub_B2C460(NewLine);
                                    sub_B2C400(v155, 0LL);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_96:
      v156 = sub_B2C454(NewLine);
      sub_B2C400(v156, 0LL);
    }
LABEL_97:
    sub_B2C434(NewLine, v14);
  }
}


void __fastcall MotionInfo__SetActionData(
        BattleActionData_o *actionData,
        System_String_o *svtName,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MotionInfo_c *v10; // x0
  BattleServantConfConponent_o *static_fields; // x0
  struct MotionInfo_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_418736F & 1) == 0 )
  {
    sub_B2C35C(&MotionInfo_TypeInfo, svtName);
    byte_418736F = 1;
  }
  v10 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v10 = MotionInfo_TypeInfo;
  }
  static_fields = (BattleServantConfConponent_o *)v10->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)svtName;
  sub_B2C2F8(static_fields, (System_Int32_array **)svtName, (System_String_array **)method, v3, v4, v5, v6, v7);
  v12 = MotionInfo_TypeInfo->static_fields;
  v12->actionData = actionData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v12->actionData,
    (System_Int32_array **)actionData,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall MotionInfo__SetHitNum(int32_t hitNum, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4187370 & 1) == 0 )
  {
    sub_B2C35C(&MotionInfo_TypeInfo, method);
    byte_4187370 = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v3 = MotionInfo_TypeInfo;
  }
  v3->static_fields->hitNum = hitNum;
}