void FadeInfo___ctor(FadeInfo_o *this, const MethodInfo *method)
{
  this->fields.baseScale = 0.6;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FadeInfo__OnGUI(FadeInfo_o *this, const MethodInfo *method)
{
  FadeLogger_c *v3; // x0
  System_String_o *FadeLog; // x0
  System_String_o *v5; // x19
  float v6; // s10
  System_String_o *v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_String_o *v15; // x20
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t v42; // w1
  System_String_o *v43; // x0
  float v44; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Rect_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC67D6 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Application_TypeInfo);
    sub_1C713B0(&FadeLogger_TypeInfo);
    sub_1C713B0(&UnityEngine_GUI_TypeInfo);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_1717/*"<size="*/);
    sub_1C713B0(&StringLiteral_15921/*"[FADE]\n"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_1520/*"</size>"*/);
    sub_1C713B0(&StringLiteral_1743/*">"*/);
    byte_4CC67D6 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    v3 = FadeLogger_TypeInfo;
    if ( !FadeLogger_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
    FadeLog = FadeLogger__GetFadeLog((const MethodInfo *)v3);
    v5 = System_String__Concat_64031724((System_String_o *)StringLiteral_15921/*"[FADE]\n"*/, FadeLog, 0);
    v6 = this->fields.baseScale * (float)((float)UnityEngine_Screen__get_width(0) * 0.00097656);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v45.fields.m_XMin = 5.0;
    v45.fields.m_YMin = 5.0;
    v45.fields.m_Width = v6 * 660.0;
    v45.fields.m_Height = v6 * 825.0;
    UnityEngine_GUI__Box(v45, (System_String_o *)StringLiteral_1/*""*/, 0);
    v7 = (System_String_o *)sub_1C71458(string___TypeInfo, 5);
    if ( !v7 )
      sub_1C71608(0, v8);
    v15 = v7;
    if ( !LODWORD(v7[1].klass) )
      goto LABEL_18;
    v16 = StringLiteral_1717/*"<size="*/;
    v7[1].monitor = (void *)StringLiteral_1717/*"<size="*/;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v7[1].monitor, v16, v9, v10, v11, v12, v13, v14);
    v44 = v6 * 18.0;
    v7 = System_Single__ToString(v6 * 18.0, (const MethodInfo *)&v44);
    if ( LODWORD(v15[1].klass) <= 1
      || (v15[1].fields = (System_String_Fields)v7,
          sub_1C71354((GrandQuestFolderBoardItem_o *)&v15[1].fields, (int32_t)v7, v17, v18, v19, v20, v21, v22),
          LODWORD(v15[1].klass) <= 2)
      || (v29 = StringLiteral_1743/*">"*/,
          v15[2].klass = (System_String_c *)StringLiteral_1743/*">"*/,
          sub_1C71354((GrandQuestFolderBoardItem_o *)&v15[2], v29, v23, v24, v25, v26, v27, v28),
          LODWORD(v15[1].klass) <= 3)
      || (v15[2].monitor = v5,
          sub_1C71354((GrandQuestFolderBoardItem_o *)&v15[2].monitor, (int32_t)v5, v30, v31, v32, v33, v34, v35),
          LODWORD(v15[1].klass) <= 4) )
    {
LABEL_18:
      sub_1C71610(v7);
    }
    v42 = StringLiteral_1520/*"</size>"*/;
    v15[2].fields = (System_String_Fields)StringLiteral_1520/*"</size>"*/;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v15[2].fields, v42, v36, v37, v38, v39, v40, v41);
    v43 = System_String__Concat_64072256((System_String_array *)v15, 0);
    v46.fields.m_XMin = 10.0;
    v46.fields.m_YMin = 5.0;
    v46.fields.m_Width = v6 * 800.0;
    v46.fields.m_Height = v6 * 825.0;
    UnityEngine_GUI__Label(v46, v43, 0);
  }
}


void FadeInfo__SetScaleSoundInfo(FadeInfo_o *this, float scale, const MethodInfo *method)
{
  this->fields.baseScale = scale;
}