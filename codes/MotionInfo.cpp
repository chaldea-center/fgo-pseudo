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

  if ( (byte_40F7D64 & 1) == 0 )
  {
    sub_B16FFC(&MotionInfo_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_1/*""*/, v8);
    byte_40F7D64 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MotionInfo_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_1/*""*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  if ( (byte_40F7D63 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_23734/*"バスター"*/, *(_QWORD *)&type);
    sub_B16FFC(&StringLiteral_23720/*"クイック"*/, v4);
    sub_B16FFC(&StringLiteral_23712/*"アーツ"*/, v5);
    sub_B16FFC(&StringLiteral_23716/*"エクストラ"*/, v6);
    byte_40F7D63 = 1;
  }
  switch ( BattleCommand__getType(type, 0LL) )
  {
    case 1:
      v7 = &StringLiteral_23712/*"アーツ"*/;
      goto LABEL_9;
    case 2:
      v7 = &StringLiteral_23734/*"バスター"*/;
      goto LABEL_9;
    case 3:
      v7 = &StringLiteral_23720/*"クイック"*/;
      goto LABEL_9;
    case 4:
      v7 = &StringLiteral_23716/*"エクストラ"*/;
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
  MotionInfo_c *v11; // x0
  System_Int32_array **TypeName; // x20
  struct BattleActionData_o *actionData; // x8
  int32_t *p_type; // x8
  System_String_array *v15; // x21
  void *NewLine; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x22
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x22
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x22
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x22
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x22
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x22
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x22
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x22
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x22
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **v93; // x22
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x22
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x22
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x22
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Int32_array **v122; // x22
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  System_String_o *v128; // x20
  int32_t width; // w0
  float v130; // s4
  float v131; // s5
  float v132; // s6
  float v133; // s7
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Rect_o v135; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v136; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F7D62 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_GUI_TypeInfo, method);
    sub_B16FFC(&MotionInfo_TypeInfo, v4);
    sub_B16FFC(&string___TypeInfo, v5);
    sub_B16FFC(&StringLiteral_23703/*"【モーションID】"*/, v6);
    sub_B16FFC(&StringLiteral_23704/*"【名前】"*/, v7);
    sub_B16FFC(&StringLiteral_23701/*"【カード属性】"*/, v8);
    sub_B16FFC(&StringLiteral_23702/*"【ヒット数】"*/, v9);
    sub_B16FFC(&StringLiteral_1/*""*/, v10);
    byte_40F7D62 = 1;
  }
  HIDWORD(var40.klass) = 0;
  if ( LOBYTE(this->fields.y) )
  {
    HIDWORD(var40.klass) = 0;
    v11 = MotionInfo_TypeInfo;
    TypeName = (System_Int32_array **)StringLiteral_1/*""*/;
    if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v11 = MotionInfo_TypeInfo;
    }
    actionData = v11->static_fields->actionData;
    if ( actionData )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = MotionInfo_TypeInfo;
        actionData = MotionInfo_TypeInfo->static_fields->actionData;
        if ( !actionData )
          goto LABEL_97;
      }
      HIDWORD(var40.klass) = actionData->fields.motionId;
      if ( actionData->fields.commandType == -1 )
      {
        if ( (WORD1(v11->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v11->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v11);
          actionData = MotionInfo_TypeInfo->static_fields->actionData;
          if ( !actionData )
            goto LABEL_97;
        }
        p_type = &actionData->fields.type;
      }
      else
      {
        if ( (WORD1(v11->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v11->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v11);
          actionData = MotionInfo_TypeInfo->static_fields->actionData;
          if ( !actionData )
            goto LABEL_97;
        }
        p_type = &actionData->fields.commandType;
      }
      TypeName = (System_Int32_array **)MotionInfo__GetTypeName((MotionInfo_o *)v11, *p_type, v2);
    }
    v15 = (System_String_array *)sub_B17014(string___TypeInfo, 19LL, v2);
    NewLine = System_Environment__get_NewLine(0LL);
    if ( v15 )
    {
      v24 = (System_Int32_array **)NewLine;
      if ( !NewLine || (NewLine = (void *)sub_B170BC(NewLine, v15->obj.klass->_1.element_class)) != 0LL )
      {
        if ( !v15->max_length )
          goto LABEL_95;
        v15->m_Items[0] = (System_String_o *)v24;
        sub_B16F98((BattleServantConfConponent_o *)v15->m_Items, v24, v18, v19, v20, v21, v22, v23);
        NewLine = (void *)StringLiteral_23704/*"【名前】"*/;
        if ( StringLiteral_23704/*"【名前】"*/ )
        {
          NewLine = (void *)sub_B170BC(StringLiteral_23704/*"【名前】"*/, v15->obj.klass->_1.element_class);
          if ( !NewLine )
            goto LABEL_96;
          v17 = (System_Int32_array **)StringLiteral_23704/*"【名前】"*/;
        }
        else
        {
          v17 = 0LL;
        }
        if ( v15->max_length <= 1 )
          goto LABEL_95;
        v15->m_Items[1] = (System_String_o *)v17;
        sub_B16F98((BattleServantConfConponent_o *)&v15->m_Items[1], v17, v18, v25, v26, v27, v28, v29);
        NewLine = System_Environment__get_NewLine(0LL);
        v35 = (System_Int32_array **)NewLine;
        if ( !NewLine || (NewLine = (void *)sub_B170BC(NewLine, v15->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v15->max_length <= 2 )
            goto LABEL_95;
          v15->m_Items[2] = (System_String_o *)v35;
          sub_B16F98((BattleServantConfConponent_o *)&v15->m_Items[2], v35, v18, v30, v31, v32, v33, v34);
          NewLine = MotionInfo_TypeInfo;
          if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MotionInfo_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
            NewLine = MotionInfo_TypeInfo;
          }
          v41 = (System_Int32_array **)**((_QWORD **)NewLine + 23);
          if ( !v41 || (NewLine = (void *)sub_B170BC(v41, v15->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v15->max_length <= 3 )
              goto LABEL_95;
            v15->m_Items[3] = (System_String_o *)v41;
            sub_B16F98((BattleServantConfConponent_o *)&v15->m_Items[3], v41, v18, v36, v37, v38, v39, v40);
            NewLine = System_Environment__get_NewLine(0LL);
            v47 = (System_Int32_array **)NewLine;
            if ( !NewLine || (NewLine = (void *)sub_B170BC(NewLine, v15->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v15->max_length <= 4 )
                goto LABEL_95;
              v15->m_Items[4] = (System_String_o *)v47;
              sub_B16F98((BattleServantConfConponent_o *)&v15->m_Items[4], v47, v18, v42, v43, v44, v45, v46);
              NewLine = System_Environment__get_NewLine(0LL);
              v53 = (System_Int32_array **)NewLine;
              if ( !NewLine || (NewLine = (void *)sub_B170BC(NewLine, v15->obj.klass->_1.element_class)) != 0LL )
              {
                if ( v15->max_length <= 5 )
                  goto LABEL_95;
                v15->m_Items[5] = (System_String_o *)v53;
                sub_B16F98((BattleServantConfConponent_o *)&v15->m_Items[5], v53, v18, v48, v49, v50, v51, v52);
                NewLine = (void *)StringLiteral_23703/*"【モーションID】"*/;
                if ( StringLiteral_23703/*"【モーションID】"*/ )
                {
                  NewLine = (void *)sub_B170BC(StringLiteral_23703/*"【モーションID】"*/, v15->obj.klass->_1.element_class);
                  if ( !NewLine )
                    goto LABEL_96;
                  v17 = (System_Int32_array **)StringLiteral_23703/*"【モーションID】"*/;
                }
                else
                {
                  v17 = 0LL;
                }
                if ( v15->max_length <= 6 )
                  goto LABEL_95;
                v15->m_Items[6] = (System_String_o *)v17;
                sub_B16F98((BattleServantConfConponent_o *)&v15->m_Items[6], v17, v18, v54, v55, v56, v57, v58);
                NewLine = System_Environment__get_NewLine(0LL);
                v64 = (System_Int32_array **)NewLine;
                if ( !NewLine || (NewLine = (void *)sub_B170BC(NewLine, v15->obj.klass->_1.element_class)) != 0LL )
                {
                  if ( v15->max_length <= 7 )
                    goto LABEL_95;
                  v15->m_Items[7] = (System_String_o *)v64;
                  sub_B16F98((BattleServantConfConponent_o *)&v15->m_Items[7], v64, v18, v59, v60, v61, v62, v63);
                  NewLine = System_Int32__ToString((int32_t)&var40.klass + 4, 0LL);
                  v70 = (System_Int32_array **)NewLine;
                  if ( !NewLine || (NewLine = (void *)sub_B170BC(NewLine, v15->obj.klass->_1.element_class)) != 0LL )
                  {
                    if ( v15->max_length <= 8 )
                      goto LABEL_95;
                    v15->m_Items[8] = (System_String_o *)v70;
                    sub_B16F98((BattleServantConfConponent_o *)&v15->m_Items[8], v70, v18, v65, v66, v67, v68, v69);
                    NewLine = System_Environment__get_NewLine(0LL);
                    v76 = (System_Int32_array **)NewLine;
                    if ( !NewLine || (NewLine = (void *)sub_B170BC(NewLine, v15->obj.klass->_1.element_class)) != 0LL )
                    {
                      if ( v15->max_length <= 9 )
                        goto LABEL_95;
                      v15->m_Items[9] = (System_String_o *)v76;
                      sub_B16F98((BattleServantConfConponent_o *)&v15->m_Items[9], v76, v18, v71, v72, v73, v74, v75);
                      NewLine = System_Environment__get_NewLine(0LL);
                      v82 = (System_Int32_array **)NewLine;
                      if ( !NewLine || (NewLine = (void *)sub_B170BC(NewLine, v15->obj.klass->_1.element_class)) != 0LL )
                      {
                        if ( v15->max_length <= 0xA )
                          goto LABEL_95;
                        v15->m_Items[10] = (System_String_o *)v82;
                        sub_B16F98((BattleServantConfConponent_o *)&v15->m_Items[10], v82, v18, v77, v78, v79, v80, v81);
                        NewLine = (void *)StringLiteral_23702/*"【ヒット数】"*/;
                        if ( StringLiteral_23702/*"【ヒット数】"*/ )
                        {
                          NewLine = (void *)sub_B170BC(StringLiteral_23702/*"【ヒット数】"*/, v15->obj.klass->_1.element_class);
                          if ( !NewLine )
                            goto LABEL_96;
                          v17 = (System_Int32_array **)StringLiteral_23702/*"【ヒット数】"*/;
                        }
                        else
                        {
                          v17 = 0LL;
                        }
                        if ( v15->max_length <= 0xB )
                          goto LABEL_95;
                        v15->m_Items[11] = (System_String_o *)v17;
                        sub_B16F98((BattleServantConfConponent_o *)&v15->m_Items[11], v17, v18, v83, v84, v85, v86, v87);
                        NewLine = System_Environment__get_NewLine(0LL);
                        v93 = (System_Int32_array **)NewLine;
                        if ( !NewLine
                          || (NewLine = (void *)sub_B170BC(NewLine, v15->obj.klass->_1.element_class)) != 0LL )
                        {
                          if ( v15->max_length <= 0xC )
                            goto LABEL_95;
                          v15->m_Items[12] = (System_String_o *)v93;
                          sub_B16F98(
                            (BattleServantConfConponent_o *)&v15->m_Items[12],
                            v93,
                            v18,
                            v88,
                            v89,
                            v90,
                            v91,
                            v92);
                          NewLine = System_Int32__ToString((unsigned int)MotionInfo_TypeInfo->static_fields + 16, 0LL);
                          v99 = (System_Int32_array **)NewLine;
                          if ( !NewLine
                            || (NewLine = (void *)sub_B170BC(NewLine, v15->obj.klass->_1.element_class)) != 0LL )
                          {
                            if ( v15->max_length <= 0xD )
                              goto LABEL_95;
                            v15->m_Items[13] = (System_String_o *)v99;
                            sub_B16F98(
                              (BattleServantConfConponent_o *)&v15->m_Items[13],
                              v99,
                              v18,
                              v94,
                              v95,
                              v96,
                              v97,
                              v98);
                            NewLine = System_Environment__get_NewLine(0LL);
                            v105 = (System_Int32_array **)NewLine;
                            if ( !NewLine
                              || (NewLine = (void *)sub_B170BC(NewLine, v15->obj.klass->_1.element_class)) != 0LL )
                            {
                              if ( v15->max_length <= 0xE )
                                goto LABEL_95;
                              v15->m_Items[14] = (System_String_o *)v105;
                              sub_B16F98(
                                (BattleServantConfConponent_o *)&v15->m_Items[14],
                                v105,
                                v18,
                                v100,
                                v101,
                                v102,
                                v103,
                                v104);
                              NewLine = System_Environment__get_NewLine(0LL);
                              v111 = (System_Int32_array **)NewLine;
                              if ( !NewLine
                                || (NewLine = (void *)sub_B170BC(NewLine, v15->obj.klass->_1.element_class)) != 0LL )
                              {
                                if ( v15->max_length <= 0xF )
                                  goto LABEL_95;
                                v15->m_Items[15] = (System_String_o *)v111;
                                sub_B16F98(
                                  (BattleServantConfConponent_o *)&v15->m_Items[15],
                                  v111,
                                  v18,
                                  v106,
                                  v107,
                                  v108,
                                  v109,
                                  v110);
                                NewLine = (void *)StringLiteral_23701/*"【カード属性】"*/;
                                if ( StringLiteral_23701/*"【カード属性】"*/ )
                                {
                                  NewLine = (void *)sub_B170BC(StringLiteral_23701/*"【カード属性】"*/, v15->obj.klass->_1.element_class);
                                  if ( !NewLine )
                                    goto LABEL_96;
                                  v17 = (System_Int32_array **)StringLiteral_23701/*"【カード属性】"*/;
                                }
                                else
                                {
                                  v17 = 0LL;
                                }
                                if ( v15->max_length <= 0x10 )
                                  goto LABEL_95;
                                v15->m_Items[16] = (System_String_o *)v17;
                                sub_B16F98(
                                  (BattleServantConfConponent_o *)&v15->m_Items[16],
                                  v17,
                                  v18,
                                  v112,
                                  v113,
                                  v114,
                                  v115,
                                  v116);
                                NewLine = System_Environment__get_NewLine(0LL);
                                v122 = (System_Int32_array **)NewLine;
                                if ( !NewLine
                                  || (NewLine = (void *)sub_B170BC(NewLine, v15->obj.klass->_1.element_class)) != 0LL )
                                {
                                  if ( v15->max_length <= 0x11 )
                                    goto LABEL_95;
                                  v15->m_Items[17] = (System_String_o *)v122;
                                  sub_B16F98(
                                    (BattleServantConfConponent_o *)&v15->m_Items[17],
                                    v122,
                                    v18,
                                    v117,
                                    v118,
                                    v119,
                                    v120,
                                    v121);
                                  if ( !TypeName
                                    || (NewLine = (void *)sub_B170BC(TypeName, v15->obj.klass->_1.element_class)) != 0LL )
                                  {
                                    if ( v15->max_length > 0x12 )
                                    {
                                      v15->m_Items[18] = (System_String_o *)TypeName;
                                      sub_B16F98(
                                        (BattleServantConfConponent_o *)&v15->m_Items[18],
                                        TypeName,
                                        v18,
                                        v123,
                                        v124,
                                        v125,
                                        v126,
                                        v127);
                                      v128 = System_String__Concat_43823856(v15, 0LL);
                                      width = UnityEngine_Screen__get_width(0LL);
                                      v135.fields.m_YMin = this->fields.width;
                                      v135.fields.m_Width = this->fields.height;
                                      v135.fields.m_Height = *((float *)&this->fields + 5);
                                      v135.fields.m_XMin = (float)width - v135.fields.m_Width;
                                      var40.methodPointer = 0LL;
                                      var40.invoker_method = 0LL;
                                      UnityEngine_Rect___ctor(v135, v130, v131, v132, v133, &var40);
                                      if ( (BYTE3(UnityEngine_GUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                        && !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
                                      }
                                      *(_QWORD *)&v136.fields.m_XMin = var40.methodPointer;
                                      *(_QWORD *)&v136.fields.m_Width = var40.invoker_method;
                                      UnityEngine_GUI__Box(v136, v128, 0LL);
                                      return;
                                    }
LABEL_95:
                                    sub_B17100(NewLine, v17, v18);
                                    sub_B170A0();
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
      sub_B170F4(NewLine);
      sub_B170A0();
    }
LABEL_97:
    sub_B170D4();
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

  if ( (byte_40F7D60 & 1) == 0 )
  {
    sub_B16FFC(&MotionInfo_TypeInfo, svtName);
    byte_40F7D60 = 1;
  }
  v10 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v10 = MotionInfo_TypeInfo;
  }
  static_fields = (BattleServantConfConponent_o *)v10->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)svtName;
  sub_B16F98(static_fields, (System_Int32_array **)svtName, (System_String_array **)method, v3, v4, v5, v6, v7);
  v12 = MotionInfo_TypeInfo->static_fields;
  v12->actionData = actionData;
  sub_B16F98(
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

  if ( (byte_40F7D61 & 1) == 0 )
  {
    sub_B16FFC(&MotionInfo_TypeInfo, method);
    byte_40F7D61 = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( (BYTE3(MotionInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v3 = MotionInfo_TypeInfo;
  }
  v3->static_fields->hitNum = hitNum;
}